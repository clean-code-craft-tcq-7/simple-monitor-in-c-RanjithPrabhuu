#include "stdio.h"
#include "checkConfig.h"

//Function that checks whether charge rate is in range 
int checkChargeRate(float value);
//Function that checks whether input value is in range or not
int checkRange(float value,float minVal,float maxVal);
//function to select the language type
void checkLanguage(langType Language);
//function definition for check warning level
WarningLevel checkWarningLevel(int input, int MinValue , int MaxValue);
//function definition to check battery health
warningType checkBatteryHealth(int value,int min,int max);
//function definition to check breach
warningType checkBreach(int val,int min,int max);
//function definition to check warning
WarningType checkWarning(int val,int min,int max);

