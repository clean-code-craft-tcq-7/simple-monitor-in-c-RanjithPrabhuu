#include <assert.h>
#include "checker.h"
#include "checkFunctions.h"

int main() {
  // Test batterOk for success
  assert(batteryIsOk(25, 70, 0.7) == 1);
  return 0;
}
