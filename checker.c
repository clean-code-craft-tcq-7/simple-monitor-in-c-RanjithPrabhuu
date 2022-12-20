#include <stdio.h>
#include <assert.h>
#include "checker.h"
#include "checkFunctions.h"
#include "config.h"


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

