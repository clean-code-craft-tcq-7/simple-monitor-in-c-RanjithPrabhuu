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
    LOW_SOC_WARNING,
    HIGH_SOC_WARNING,
    LOW_SOC_BREACH,
    HIGH_SOC_BREACH,
    MAX_MESSAGE
}warningType;

//enum for warning levels
typedef enum {
    minWarningLevel,
    maxWarningLevel,
    MAX_WARNING
} WarningLevel;


