#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "checker.h"
#include "checkFunctions.h"

int main() 
{
  assert(batteryIsOk(25, 70, 0.7) == 1);
  assert(batteryIsOk(50, 85, 0) == 0 );
  assert(batteryIsOk(44, 79, 0.7) == 1);
  assert(batteryIsOk(46, 81, 0.8) == 0);
  assert(batteryIsOk(0, 0, 0.7) == 0);
 
  checkLanguage(ENGLISH);
  printf("%s\n",breachMessage[2]);
  assert(strcmp(breachMessage[(checkBatteryHealth(13,20,80))],"LOW_SOC_BREACH") == 0);
  checkLanguage(GERMAN);
  assert(strcmp(breachMessage[(checkBatteryHealth(23,21,81))],"Niedrige SOC-Warnung") == 0);
  
  assert(strcmp(warningMessage[checkWarningLevel(23,SOC_MIN ,SOC_MAX)],"ReachingMinThreshold") == 0); 
  assert(strcmp(warningMessage[checkWarningLevel(77,SOC_MIN,SOC_MAX)],"ReachingMaxThreshold") == 0);
  assert(strcmp(warningMessage[checkWarningLevel(1,TEMPERATURE_MIN ,TEMPERATURE_MAX )],"ReachingMinThreshold") == 0);
  assert(strcmp(warningMessage[checkWarningLevel(44,TEMPERATURE_MIN,TEMPERATURE_MIN)],"ReachingMaxThreshold") == 0);
  
  return 0;
}
