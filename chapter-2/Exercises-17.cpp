// ******** QUESTION ******** 
/*
  (Science: wind-chill temperature) How cold is it outside? The temperature alone is
  not enough to provide the answer. Other factors including wind speed, relative humidity,
  and sunshine play important roles in determining coldness outside. In 2001, the
  National Weather Service (NWS) implemented the new wind-chill temperature to
  measure the coldness using temperature and wind speed. The formula is:
  twc = 35.74 + 0.6215*ta - 35.75*v^(0.16) + 0.4275*ta*v^(0.16)
  where ta is the outside temperature measured in degrees Fahrenheit and v is the speed
  measured in miles per hour. twc is the wind-chill temperature. The formula cannot be
  used for wind speeds below 2 mph or temperatures below –58°F or above 41°F.
  Write a program that prompts the user to enter a temperature between –58°F and
  41°F and a wind speed greater than or equal to 2 and displays the wind-chill temperature.
  Use pow(a, b) to compute v^(0.16).
*/

// ******** SOLUTION ******** 

#include<iostream>
#include<cmath>
using namespace std;

int main(){
  double temperature, windSpeed, twc;
  cout << "Enter the temperature in Fahrenheit: ";
  cin >> temperature;
  cout << "Enter the wind speed in miles per hour: ";
  cin >> windSpeed;

  twc = 35.74 + (0.6215 * temperature) - (35.75 * pow(windSpeed,0.16)) + (0.4275 * temperature * pow(windSpeed,0.16));

  cout << "The wind chill index is " << twc;

  return 0;
}