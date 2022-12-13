#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) 
{
    int retTemperatureInrangeStatus = 1;
    int retSocInrangeStatus = 1;
    int retChargeRateInrangeStatus = 1;
  
    retTemperatureInrangeStatus = checkTemperatureInRange(temperature);
    retSocInrangeStatus = checkSocInRange(soc);
    retChargeRateInrangeStatus = checkChargeRateInRange(chargeRate);
  
    if((retTemperatureInrangeStatus == 1) && (retSocInrangeStatus == 1) && (retChargeRateInrangeStatus == 1))
        return 1;
    else
        return 0;
 } 
  
int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
