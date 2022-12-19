#include <stdio.h>
#include <assert.h>
#include "checker.h"
#include "checkFunctions.h"

//function declaration for battery is ok check 
int batteryIsOk(float temperature, float soc, float chargeRate, int warningLevelOn) 
{
    int returnStatus = 0;
  
    returnStatus = checkTemperatureRange(temperature,&tempRangeDisplayInfo,warningLevelOn);
    returnStatus = (returnStatus & checkSocRange(soc,&socpRangeDisplayInfo,warningLevelOn));
    returnStatus = (returnStatus & checkChargeRateRange(chargeRate,&chargeRateRangeDisplayInfo,warningLevelOn));
    
    return returnStatus;
 } 
