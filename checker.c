#include <stdio.h>
#include <assert.h>
#include "checker.h"
#include "checkFunctions.h"
#include "config.h"

const char* Store_WarningMessage[MESSAGE_MAX];
const char* PreWarningMessageTable[Warning_max] = {"Approaching_discharge","Approaching_charge_peak"};
const char* WarningMessageTable[MAX_LANG][MESSAGE_MAX] = {
		{/*Language : DEFAULT */
			"LOW_SOC_BREACH","LOW_SOC_WARNING","SOC_NORMAL","HIGH_SOC_WARNING","HIGH_SOC_BREACH","SOC_UNDEFINED"},
		{/*Language : ENGLISH */
			"LOW_SOC_BREACH","LOW_SOC_WARNING","SOC_NORMAL","HIGH_SOC_WARNING","HIGH_SOC_BREACH","SOC_UNDEFINED"},
		{/*Language : GERMAN */
			"LOW_SOC_BREACH","LOW_SOC_WARNUNG","SOC_NORMAL","HIGH_SOC_WARNUNG","HIGH_SOC_BREACH","SOC_UNDEFINED"},
		{ /*Language : CHINA */
			"L_S_BREACHEN","L_S_WARN!!","NORMAL","H_S_WARN!!","H_S_BREACHEN","UNDEFINED"}
		/* Extend the table as per Requirements  */
		
	};


/*Function Delceration for BMS*/
int Check_ChargeRate(float chargeRate);

/*Function Returns True if the Battery is OK else return false*/
int batteryIsOk(float temperature, float soc, float chargeRate)
{
  int batterystate = 1;
  /*Macro returns flase if the Temperature is out of range and true if Temperature is in range*/ 
  batterystate = RangeCheck(temperature,TEMPMIN,TEMPMAX);
  /*Macro returns flase if the SOC is out of range and true if its in range*/
  batterystate *= RangeCheck(soc,SOCMIN,SOCMAX);
  batterystate *= Check_ChargeRate(chargeRate);

  return batterystate;
}
 
/*Function returns flase if the chargeRate is out of range and true if its in range*/ 
int Check_ChargeRate(float chargeRate)
{
   if(chargeRate > CHARGERATEMAX)
   return 0;
   else
   return 1;
}

void SelectLanguageandWarnigMessage(Select_Language Language)
{   
   if(Language < MAX_LANG)
   {
      for(int i =0;i<MESSAGE_MAX;i++)
      {
	Store_WarningMessage[i] = WarningMessageTable[Language][i];
      }
    } 
}

