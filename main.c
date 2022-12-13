#include <assert.h>
#include "checker.h"
#include "checkFunctions.h"

int main() {
  // Test for temperature not in Range, soc and charge current in range
  assert(batteryIsOk(25, 78, 0.7) == 1);
  
  // Test for soc and charge current in range and temperature out of Range
  assert(batteryIsOk(52, 78, 0.6) == 0);
  
  // Test for temperature, charge current in range and soc out of range
  assert(batteryIsOk(30, 88, 0.6) == 0);
  
  // Test for temperature, soc in range and charge current out of range
  assert(batteryIsOk(35, 78, 0.9) == 0);
  
  // Test temperature range check function 
  assert(checkTemperatureRange(42) == 1);
  assert(checkTemperatureRange(47) == 0);
  assert(checkTemperatureRange(0) == 1);
  assert(checkTemperatureRange(40) == 1);
  assert(checkTemperatureRange(-1) == 0);
  
  
  
  return 0;
}
