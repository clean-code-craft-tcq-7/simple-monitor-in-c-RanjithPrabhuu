#include <stdio.h>
#include <assert.h>
#include "checker.h"
#include "checkFunctions.h"

//function declaration for battery is ok check 
int batteryIsOk(float temperature, float soc, float chargeRate) 
{
    int returnStatus = 0;
    int retTemperatureInrangeStatus = 0;
    int retSocInrangeStatus = 0;
    int retChargeRateInrangeStatus = 0;
  
    retTemperatureInrangeStatus = checkTemperatureRange(temperature);
    retSocInrangeStatus = (retTemperatureInrangeStatus & checkSocRange(soc));
    retChargeRateInrangeStatus = (retSocInrangeStatus & checkChargeRateRange(chargeRate));
    returnStatus  = retChargeRateInrangeStatus;
    
    return returnStatus;
 } 
