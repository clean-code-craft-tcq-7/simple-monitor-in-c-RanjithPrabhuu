#include <stdio.h>
#include <assert.h>
#include "checker.h"
#include "checkFunctions.h"
#include "checkConfig.h"

//function declaration for battery is ok check 
int batteryIsOk(float temperature, float soc, float chargeRate)
{
   int returnStatus = 0;
  
    returnStatus = checkRange(temperature,TEMPERATURE_MIN,TEMPERATURE_MAX);
    returnStatus = (returnStatus & checkRange(soc,SOC_MIN,SOC_MAX));
    returnStatus = (returnStatus & checkChargeRate(chargeRate));
    
    return returnStatus;
}
