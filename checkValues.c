#include <stdio.h>
#include "checkValues.h"

int checkRange(float min, float max, float value)
{
	if((value < min) || (value > max))
	{
		return 1;
	}
}

valueRange checkMinMaxBreach(float min, float max, float value)
{
	valueRange returnValue = NORMAL;
	int boundaryOutsideRetVal = checkRange(min, max, value);
	
	if(boundaryOutsideRetVal == 0)
	{
		returnValue = LOW_VALUE_BREACH;
	}
	else if(boundaryOutsideRetVal == 1)
	{
		returnValue = HIGH_VALUE_BREACH;
	}
	
	return returnValue;
}

valueRange checkWarning(float minTolerance,float maxTolerance, float value)
{
	valueRange returnValue = NORMAL;
	
	int boundaryOutsideRetVal = checkRange(minTolerance, maxTolerance, value);
	
	if(boundaryOutsideRetVal == 0)
	{
		returnValue = LOW_VALUE_WARNING;
	}
	else if(boundaryOutsideRetVal == 1)
	{
		returnValue = HIGH_VALUE_WARNING;
	}
	
	return returnValue;
}
		
valueRange checkValueRange(float min, float max, float value, float tolerance,int warningLevelOn)
{
	valueRange returnValue = NORMAL;
	
	float toleranceVal = (max * tolerance) / 100;
	float minTolerance = min + toleranceVal;
	float maxTolerance = max - toleranceVal;
	
	if(checkRange(min,max,value) == 1)
	{
		returnValue = checkMinMaxBreach(min,max,value);
	}
	else if(warningEnabled == 1)
	{
		returnValue = checkWarning(minTolerance,minTolerance,value);
	}
	
	return returnValue;
		
}
