// ******** QUESTION ******** 
/*
  (Science: calculating energy) Write a program that calculates the energy needed to
  heat water from an initial temperature to a final temperature. Your program should
  prompt the user to enter the amount of water in kilograms and the initial and final
  temperatures of the water. The formula to compute the energy is
  Q = M * (finalTemperature – initialTemperature) * 4184
  where M is the weight of water in kilograms, temperatures are in degrees Celsius, and
  energy Q is measured in joules.
*/

// ******** SOLUTION ******** 

#include<iostream>
using namespace std;

int main(){
  double amountOfWater, initialTemperature, finalTemperature, energy;

  cout << "Enter the amount of water in kilograms: ";
  cin  >> amountOfWater;
  cout << "Enter the initial temperature: ";
  cin  >> initialTemperature;
  cout << "Enter the final temperature: ";
  cin  >> finalTemperature;

  energy = amountOfWater * (finalTemperature - initialTemperature) * 4184;
  cout << "The energy needed is " << energy ;
  return 0;
}