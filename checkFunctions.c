#include <stdio.h>
#include "checkFunctions.h"

//function to check whether temperature is in range or not
int checkTemperatureRange(float temperature, (void)(*printFunc)(int checkStatus), int warningLevelOn)
{
  int retStatus = 1;
  valueRangeStatus checkStatus = chackValueRange(TEMPERATURE_MIN_VALUE, TEMPERATURE_MAX_VALUE, temperature, warningLevelOn);
  
  if(checkStatus > NORMAL)
  {
	  retStatus = 0;
	  printFunc(checkStatus)
  }
  return retStatus;
}

//functions to check whether state of charge is in range or not
int checkSocRange(float soc, (void)(*printFunc)(int checkStatus), int warningLevelOn)
{
  int retStatus = 1;
  valueRangeStatus checkStatus = chackValueRange(SOC_MIN_VALUE, SOC_MAX_VALUE, soc, warningLevelOn);
  
  if(checkStatus > NORMAL)
  {
	  retStatus = 0;
	  printFunc(checkStatus)
  }
  return retStatus;
}

//function to check whether charge rate is in range or not
int checkChargeRateRange(float chargeRate, (void)(*printFunc)(int checkStatus), int warningLevelOn)
{
   int retStatus = 1;
   if(chargeRate > CHARGE_RATE_MAX_VALUE)
   {
    printFunc(HIGH_VALUE_BREAH);
    retStatus = 0;
   }
  return retStatus;
}
