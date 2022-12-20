#include <stdio.h>
#include "checkFunctions.h"
#include "checkConfig.h"

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

/Function that checks whether input value is in range or not
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
	    
		
	    
	


	
   
