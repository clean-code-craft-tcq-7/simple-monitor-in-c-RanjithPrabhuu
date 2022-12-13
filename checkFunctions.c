#include <stdio.h>
#include "checkFunctions.h"

//function to check whether temperature is in range or not
int checkTemperatureRange(float temperature)
{
  if(temperature < 0 || temperature > 45) 
  {
    printf("%s\n","Temperature out of range");
    return 0;
  }
  return 1;
}

//functions to check whether state of charge is in range or not
int checkSocRange(float soc)
{
  if(soc < 20 || soc > 80) 
  {
    printf("%s\n","State of Charge out of range!");
    return 0;
  }
  return 1;
}

//function to check whether charge rate is in range or not
int checkChargeRateRange(float chargeRate)
{
  if(chargeRate > 0.8) 
  {
    printf("%s\n","Charge Rate out of range!");
    return 0;
  }
  return 1;
}
