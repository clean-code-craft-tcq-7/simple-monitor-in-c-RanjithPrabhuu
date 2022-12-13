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
  
  // Test soc range check function
  assert(checkSocRange(19.5) == 0);
  assert(checkSocRange(20) == 1);
  assert(checkSocRange(40) == 1);
  assert(checkSocRange(80) == 1);
  assert(checkSocRange(82) == 0);
  
  // Test charge Rate check function
  assert(checkChargeRateRange(0.1) == 1);
  assert(checkChargeRateRange(0.8) == 1);
  assert(checkChargeRateRange(0.9) == 0);
  assert(checkChargeRateRange(1.0) == 0);
  
  
  
  return 0;
}
