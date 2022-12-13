#include <assert.h>
#include "checker.h"
#include "checkFunctions.h"

int main() {
  // Test batterOk for success
  assert(batteryIsOk(25, 70, 0.7) == 1);
  
  // Test for temperature not in Range, soc and charge current in range
  assert(batteryIsOk(50, 70, 0.5) == 0 );
  
  return 0;
}
