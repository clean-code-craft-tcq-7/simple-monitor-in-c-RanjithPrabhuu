#include <assert.h>
#include "checker.h"
#include "checkFunctions.h"

extern const char* breachMessage[MAX_MESSAGE];
extern const char* warningMessage[MAX_WARNING];
extern const char* breachMessageLang[MAX_LANG][MAX_MESSAGE];

int main() 
{
  assert(batteryIsOk(25, 70, 0.7) == 1);
  assert(batteryIsOk(50, 85, 0) == 0 );
  assert(batteryIsOk(44, 79, 0.7) == 1);
  assert(batteryIsOk(46, 81, 0.8) == 0);
  assert(batteryIsOk(0, 0, 0.7) == 0);
 
  checkLanguage(ENGLISH);
  assert(breachMessage[(checkBatteryHealth(77,24,76))] == "HIGH_SOC_WARNING");
  checkLanguage(GERMAN);
  assert(breachMessage[(checkBatteryHealth(23,24,76))] == "Niedrige SOC-Warnung");
  
  assert(warningMessage[checkWarningLevel(23,SOC_MIN ,SOC_MAX)] == "ReachingMinThreshold"); // 5% of 80 is 4 , [20-24],[76-80]
  assert(warningMessage[checkWarningLevel(77,SOC_MIN,SOC_MAX)] == "ReachingMaxThreshold");
  assert(warningMessage[checkWarningLevel(1,TEMPERATURE_MIN ,TEMPERATURE_MAX )] == "ReachingMinThreshold"); // 5% of 45 is 2 , [0-2],[43-45]
  assert(warningMessage[checkWarningLevel(44,TEMPERATURE_MIN,TEMPERATURE_MIN)] == "ReachingMaxThreshold");
  
  return 0;
}
