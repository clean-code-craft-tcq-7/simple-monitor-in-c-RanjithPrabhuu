//function declaration for check temperature in range check
int checkTemperatureRange(float temperature,(void)(*printFunc)(int checkStatus), int warningLevelOn);
//function declaration for state of charge in range check
int checkSocRange(float soc,(void)(*printFunc)(int checkStatus), int warningLevelOn);
//function declaration for charge rate in range check
int checkChargeRateRange(float chargeRate, (void)(*printFunc)(int checkStatus), int warningLevelOn);
