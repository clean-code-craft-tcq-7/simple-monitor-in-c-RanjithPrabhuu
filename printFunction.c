#include <stdio.h>
#include <string.h>
#include "config.h"
#include "checkLanguage.h"

langType Language = ENGLISH;

void setPrintLanguage(langType language)
{
    Language = language;
}

void printText(char* text)
{
	printf("%s", text);
}

void printTempratureMessage(int rangeStatus)
{
	char* printMessageData = TemperatureMessageList[Language];
	int offset = rangeStatus - 2;
	printText(*(printMessageData + offset));
}

void printSOCMessage(int rangeStatus)
{
	char* printMessageData = SOCMessageList[Language];
	int offset = rangeStatus - 2;
	printText(*(printMessageData + offset));
}

void printChargeRateMessage(int rangeStatus)
{
	char* printMessageData = ChargeRateMessageList[Language];
	int offset = rangeStatus - 5;
	printText(*(printMessageData + offset));
}
