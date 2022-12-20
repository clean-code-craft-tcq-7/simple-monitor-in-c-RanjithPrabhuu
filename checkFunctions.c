#include <stdio.h>
#include "checkFunctions.h"

extern const char* breachMessage[MAX_MESSAGE];
extern const char* warningMessage[MAX_WARNING];
extern const char* breachMessageLang[MAX_LANG][MAX_MESSAGE];

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
    if((value < minVal) || (value > maxVal))
    {
	 return 0;
    }
    else
    {
	 return 1;  
    }
}

//function definition for check warning level
warningLevel checkWarningLevel(int input, int MinValue , int MaxValue)
{ 
    int Value = (int)((5*MaxValue)/100);   
    int minThreshold = MinValue + Value;
    int maxThreshold  = MaxValue - Value;
	
    if(input <= minThreshold)	    
    {
        return minWarningLevel;
    }
 
    if( input>= maxThreshold)
    {
        return maxWarningLevel;
    }	
}

//function definition to check battery health
warningType checkBatteryHealth(int value,int min,int max)
{  
    if(checkRange(value, min, max) == 1)
    {
	return checkWarning(value,min,max);
    }
    else
    {
	return checkBreach(value,min,max);
    }
}
	
//function definition to check breach
warningType checkBreach(int val,int min,int max)
{
	if(checkRange(val, min, max) == 1)
	{
		return LOW_SOC_BREACH;
	}
	else
	{
		return HIGH_SOC_BREACH;
	}
	
}

//function definition to check warning
warningType checkWarning(int val,int min,int max)
{
	if(checkRange(val, min, max) == 1)
	{
		return LOW_SOC_WARNING;
	}
	else
	{
		return HIGH_SOC_WARNING;
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
	
	    
		
	    
	


	
   
