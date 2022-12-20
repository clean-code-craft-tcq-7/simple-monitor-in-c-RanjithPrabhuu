#include <assert.h>
#include "checker.h"
#include "checkFunctions.h"

int main() 
{
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
  assert(batteryIsOk(44, 79, 0.7));
  assert(!batteryIsOk(46, 81, 0.8));
  assert(!batteryIsOk(0, 0, 0.7));
  SelectLanguageandWarnigMessage(DEFAULT);
  assert(Store_WarningMessage[(BatteryHelathMonitor(13))] == "LOW_SOC_BREACH");
  SelectLanguageandWarnigMessage(GERMAN);
  assert(Store_WarningMessage[(BatteryHelathMonitor(77))] == "HIGH_SOC_WARNUNG");
  assert(PreWarningMessageTable[PreWarningIndicatorMessage(23,SOCMIN,SOCMAX)] == "Approaching_discharge"); /* 5% of 80 is 4 , [20-24],[76-80] */
  assert(PreWarningMessageTable[PreWarningIndicatorMessage(77,SOCMIN,SOCMAX)] == "Approaching_charge_peak");
  assert(PreWarningMessageTable[PreWarningIndicatorMessage(1,TEMPMIN,TEMPMAX)] == "Approaching_discharge"); /* 5% of 45 is 2 , [0-2],[43-45] */
  assert(PreWarningMessageTable[PreWarningIndicatorMessage(44,TEMPMIN,TEMPMAX)] == "Approaching_charge_peak");
  SelectLanguageandWarnigMessage(CHINA);
  assert(Store_WarningMessage[(BatteryHelathMonitor(23))] == "L_S_WARN!!");
  
  return 0;
}
