#include <stdio.h>
#include <string.h>

#include "config.h"
#include "checkLanguage.h"

int LangType Language = ENGLISH;

void setPrintLanguage(LangType language)
{
    Language = language;
}

void printText(char* text)
{
	printf("%s", text);
}

void printTempratureMessage(int rangeStatus)
{
	char* printMessageData = TemperatureMessageList[printLanguage];
	int offset = rangeStatus - 2;
	printText(*(printMessageData + offset));
}

void printSOCMessage(int rangeStatus)
{
	char* printMessageData = SOCMessageList[printLanguage];
	int offset = rangeStatus - 2;
	printText(*(printMessageData + offset));
}

void printChargeRateMessage(int rangeStatus)
{
	char* printMessageData = ChargeRateMessageList[printLanguage];
	int offset = rangeStatus - 5;
	printText(*(printMessageData + offset));
}
