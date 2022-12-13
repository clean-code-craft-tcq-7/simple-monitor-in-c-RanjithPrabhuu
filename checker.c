#include <stdio.h>
#include <assert.h>
#include "checker.h"
#include "checkFunctions.h"

//function declaration for battery is ok check 
int batteryIsOk(float temperature, float soc, float chargeRate) 
{
    int returnStatus = 0;
  
    returnStatus = checkTemperatureRange(temperature);
    returnStatus = (returnStatus & checkSocRange(soc));
    returnStatus = (returnStatus & checkChargeRateRange(chargeRate));
    
    return returnStatus;
 } 
