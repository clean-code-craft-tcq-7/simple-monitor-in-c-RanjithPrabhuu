#include <stdio.h>
#include <assert.h>
#include "checker.h"
#include "checkFunctions.h"

//function declaration for battery is ok check 
int batteryIsOk(float temperature, float soc, float chargeRate) 
{
    int returnStatus = 1;
    int retTemperatureInrangeStatus = 1;
    int retSocInrangeStatus = 1;
    int retChargeRateInrangeStatus = 1;
  
    retTemperatureInrangeStatus = (returnStatus & checkTemperatureRange(temperature));
    retSocInrangeStatus = (retTemperatureInrangeStatus & checkSocRange(soc));
    retChargeRateInrangeStatus = (retSocInrangeStatus & checkChargeRateRange(chargeRate));
    returnStatus  = retChargeRateInrangeStatus;
    
    return returnStatus;
 } 
