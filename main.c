#include <assert.h>
#include "checker.h"
#include "checkFunctions.h"

int main() {
  // Test for temperature not in Range, soc and charge current in range
  assert(batteryIsOk(25, 70, 0.7) == 1);
  
  // Test for temperature not in Range, soc and charge current in range
  assert(batteryIsOk(52, 70, 0.5) == 0);
  
  // Test for temperature, charge current in range and soc out of range
  assert(batteryIsOk(30, 88, 0.5) == 0);
  
  return 0;
}
