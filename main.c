#include <assert.h>
#include "checker.h"
#include "checkFunctions.h"

int main() {
 
  // Test for temperature, soc, charge current in range
  assert(batteryIsOk(25, 70, 0.7, 1));
  // Test for temperature not in Range, soc and charge current in range
  assert(!batteryIsOk(50, 70, 0.5,1));
  // Test for temperature, charge current in range and soc out of range
  assert(!batteryIsOk(30, 85, 0.5, 1));
  // Test for temperature, soc in range and charge current out of range
  assert(!batteryIsOk(30, 70, 0.9, 1));
  
  return 0;
}
