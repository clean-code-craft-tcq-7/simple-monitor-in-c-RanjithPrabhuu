#include <stdio.h>
#include "config.h"
#include "checkLanguage.h"

char* TemperatureMessageEnglish[4] = {
	"Low Temperature Warning\n",
	"High Temperature Warning\n",
	"Low Temperature Breach\n",
	"High Temperature Breach\n",
};

char* SOCMessageEnglish[4] = {
	"Low SOC Warning\n",
	"High SOC Warning\n",
	"Low SOC Breach\n",
	"High SOC Breach\n",
};

char* ChargeRateMessageEnglish[1] = {
	"High Charge Rate Breach\n"
}

char* TemperatureMessageFrench[4] = {
	"Avertissement de basse température\n",
	"Avertissement de température élevée\n",
	"Brèche à basse température\n",
	"Brèche à haute température\n",
};

char* SOCMessageFrench[4] = {
	"Avertissement SOC faible\n",
	"Avertissement SOC élevé\n",
	"Infraction à faible SOC\n",
	"Violation SOC élevée\n",
};

char* ChargeRateMessageFrench[1] = {
	"Violation du taux de charge élevé\n"
}

char* TemperatureMessageList[MAX_LANGUAGE_SUPRTD] = {
	&TemperatureMessageEnglish,
	&TemperatureMessageFrench,
}

char* SOCMessageList[MAX_LANGUAGE_SUPRTD] = {
	&SOCMessageEnglish,
	&SOCMessageFrench,
}

char* ChargeRateMessageList[MAX_LANGUAGE_SUPRTD] = {
	&ChargeRateMessageEnglish,
	&ChargeRateMessageFrench,
}
