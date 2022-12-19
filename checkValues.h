typedef enum
{
	NORMAL = 1,
	LOW_VALUE_WARNING,
	HIGH_VALUE_WARNING,
	LOW_VALUE_BREACH,
	HIGH_VALUE_BREACH,
} valueRange;

valueRange checkMinMaxBreach(float min, float max, float value);
valueRange checkWarning(float minTolerance,float maxTolerance, float value);
valueRange checkValueRange(float min, float max, float value, float tolerance,int warningLevelOn);
