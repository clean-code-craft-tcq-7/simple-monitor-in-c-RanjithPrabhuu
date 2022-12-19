#inlcude <stdio.h>
#include "checkValues.h"

int checkOutsideBoundary(float min, float max, float value)
{
	if(value < min)
	{
		return 0;
	}
	else if(value > max)
	{
		return 1;
	}
}

valueRange checkMinMaxBreach(float min, float max, float value)
{
	valueRange returnValue = NORMAL;
	int boundaryOutsideRetVal = checkOutsideBoundary(min, max, value);
	
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
	
	int boundaryOutsideRetVal = checkOutsideBoundary(minTolerance, maxTolerance, value);
	
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
		
valueRange chackValueRange(float min, float max, float value, float tolerance,int warningLevelOn)
{
	valueRange returnValue = NORMAL;
	
	float toleranceVal = (max * tolerance) / 100;
	float minTolerance = min + toleranceVal;
	float maxTolerance = max - toleranceVal;
	
	if(value < min || value > max)
	{
		returnValue = checkMinMaxBreach(min,max,value);
	}
	else if(warningEnabled == 1)
	{
		returnValue = checkWarning(minTolerance,minTolerance,value);
	}
	
	return returnValue;
		
}
