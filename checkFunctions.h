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

