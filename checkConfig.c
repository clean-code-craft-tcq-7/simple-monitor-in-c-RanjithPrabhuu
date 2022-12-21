#include "checkConfig.h"

char* breachMessage[MAX_MESSAGE];
char* warningMessage[MAX_WARNING] = {"ReachingMinThreshold","ReachingMaxThreshold"};
char* breachMessageLang[MAX_LANG][MAX_MESSAGE] = 
{
     {
	     "LOW_WARNING",
	     "HIGH_WARNING",
	     "LOW_BREACH",
	     "HIGH_BREACH"
     },
     {
	     "Niedrige -Warnung",
	     "Hohe -Warnung",
	     "Niedrige -Verletzung",
	     "Hohe -Verletzung"
     },
};
