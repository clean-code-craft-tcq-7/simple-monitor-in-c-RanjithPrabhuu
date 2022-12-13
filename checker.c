#include <stdio.h>
#include <assert.h>
#include "checker.h"
#include "checkFunctions.h"

//function declaration for battery is ok check 
int batteryIsOk(float temperature, float soc, float chargeRate) 
{
    int retTemperatureInrangeStatus = 1;
    int retSocInrangeStatus = 1;
    int retChargeRateInrangeStatus = 1;
  
    retTemperatureInrangeStatus = checkTemperatureRange(temperature);
    retSocInrangeStatus = checkSocRange(soc);
    retChargeRateInrangeStatus = checkChargeRateRange(chargeRate);
  
    if((retTemperatureInrangeStatus == 1) && (retSocInrangeStatus == 1) && (retChargeRateInrangeStatus == 1))
        return 1;
    else
        return 0;
 } 
