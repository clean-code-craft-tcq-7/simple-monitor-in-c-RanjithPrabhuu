#include "checkConfig.h"

const char* breachMessage[MAX_MESSAGE];
const char* warningMessage[MAX_WARNING] = {"ReachingMinThreshold","ReachingMaxThreshold"};
const char* breachMessageLang[MAX_LANG][MAX_MESSAGE] = 
{
     {
	     "LOW_SOC_WARNING",
	     "HIGH_SOC_WARNING",
	     "LOW_SOC_BREACH",
	     "HIGH_SOC_BREACH"
     },
     {
	     "Niedrige SOC-Warnung",
	     "Hohe SOC-Warnung",
	     "Niedrige SOC-Verletzung",
	     "Hohe SOC-Verletzung"
     },
};
