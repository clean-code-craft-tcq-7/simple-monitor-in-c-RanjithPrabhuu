#include <stdio.h>
#include "checkFunctions.h"
#include "checkConfig.h"

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

//function declaration to set the language
void setLanguage(langType Language)
{   
   if(Language < MAX_LANG)
   {
      	for(int i =0;i<MAX_MESSAGE;i++)
      	{
	   	breachMessage[i] = breachMessageLang[Language][i];
      	}
   } 
}
	
	    
		
	    
	


	
   
