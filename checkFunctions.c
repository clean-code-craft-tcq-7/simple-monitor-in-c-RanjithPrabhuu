#include <stdio.h>
#include "checkFunctions.h"

int minThreshold,maxThreshold;

//Function that checks whether charge rate is in range 
int checkChargeRate(float value)
{
   if(value < CHARGE_RATE_MAX)
   {
   	return 1;
   }	   
   else
   {
   	return 0;
   }
}

//Function that checks whether input value is in range or not
int checkRange(float value,float minVal,float maxVal)
{
    int ret = 1;
    if(value < minVal) 
    {
	 ret = 0;
    }
    else if(value > maxVal)
    {
	 ret = 2; 
    }
    return ret;
}

//function definition for check warning level
warningLevel checkWarningLevel(int input,int MinValue ,int MaxValue)
{ 
    int Value = (int)((5*MaxValue)/100);   //tolerance is kept as 5%
    minThreshold = MinValue + Value;
    maxThreshold  = MaxValue - Value;
	
    if(input <= minThreshold)	    
    {
        return minWarningLevel;
    }
 
    if( input >= maxThreshold)
    {
        return maxWarningLevel;
    }	
    return 0;		
}

//function definition to check battery health
warningType checkBatteryHealth(int value,int min,int max,int minWarning,int maxWarning)
{  
    if(checkRange(value, min, max) == 1)
    {
	return checkWarning(value,minWarning,maxWarning);
    }
    else
    {
	return checkBreach(value,minWarning,minWarning);
    }
}
	
//function definition to check breach
warningType checkBreach(int val,int min,int max)
{
	if(checkRange(val, min, max) == 0)
	{
		return LOW_BREACH;
	}
	else if(checkRange(val, min, max) == 2)
	{
		return HIGH_BREACH;
	}
	
}

//function definition to check warning
warningType checkWarning(int val,int min,int max)
{
	if(checkRange(val, min, max) == 0)
	{
		return LOW_WARNING;
	}
	else if(checkRange(val, min, max) == 2)
	{
		return HIGH_WARNING;
	}
}

//function definition to set the language
void checkLanguage(langType Language)
{   
   if(Language < MAX_LANG)
   {
      	for(int i =0;i<MAX_MESSAGE;i++)
      	{
	   	breachMessage[i] = breachMessageLang[Language][i];
      	}
   } 
}
	
	    
		
	    
	


	
   
