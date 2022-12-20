const char* Store_WarningMessage[MAX_BREACH];
const char* WarningMessage[MAX_WARNING] = {"Approaching_discharge","Approaching_charge_peak"};
const char* BreachMessageTable[MAX_LANG][MAX_BREACH] = 
{
		{"LOW_SOC_BREACH","LOW_SOC_WARNING","SOC_NORMAL","HIGH_SOC_WARNING","HIGH_SOC_BREACH","SOC_UNDEFINED"},
		{"LOW_SOC_BREACH","LOW_SOC_WARNUNG","SOC_NORMAL","HIGH_SOC_WARNUNG","HIGH_SOC_BREACH","SOC_UNDEFINED"},
};
