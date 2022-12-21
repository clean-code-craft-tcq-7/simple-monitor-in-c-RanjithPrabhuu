//Macro for min max range
#define TEMPERATURE_MIN 10
#define TEMPERATURE_MAX	45
#define SOC_MIN 20
#define SOC_MAX 80
#define CHARGE_RATE_MAX 0.8

//enum for langType
typedef enum 
{
    ENGLISH,
    GERMAN,
    MAX_LANG
}langType;

//enum for warning messages
typedef enum {
    LOW_WARNING,
    HIGH_WARNING,
    LOW_BREACH,
    HIGH_BREACH,
    MAX_MESSAGE
}warningType;

//enum for warning levels
typedef enum {
    minWarningLevel,
    maxWarningLevel,
    MAX_WARNING
}warningLevel;

extern char* breachMessage[MAX_MESSAGE];
extern char* warningMessage[MAX_WARNING];
extern char* breachMessageLang[MAX_LANG][MAX_MESSAGE];

