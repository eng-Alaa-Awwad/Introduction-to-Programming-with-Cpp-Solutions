// ******** QUESTION ******** 
/*
  (Population projection) Rewrite Programming Exercise 1.11 to prompt the user to
  enter the number of years and displays the population after the number of years. Use
  the hint in Programming Exercise 1.11 for this program.
*/

// ******** SOLUTION ******** 

#include<iostream>
using namespace std;

int main(){
  int years,population;
  int currentPopulation = 312032486;
  int secondsInYear = 365 * 24 * 60 * 60;
  
  // Calculate changes per year
  int birthsPerYear = secondsInYear / 7;
  int deathsPerYear = secondsInYear / 13;
  int immigrantsPerYear = secondsInYear / 45;

  // Net population change per year
  int populationChange = birthsPerYear + immigrantsPerYear - deathsPerYear;

  cout << "Enter the number of years: ";
  cin  >> years;
  population = currentPopulation + years * populationChange;

  cout << "The population in " << years << " years is " << population << endl;
  return 0;
}