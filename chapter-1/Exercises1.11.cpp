// ******** QUESTION ******** 
/*
(Population projection) The U.S. Census Bureau projects population based on the following assumptions:
  
  -- One birth every 7 seconds
  -- One death every 13 seconds
  -- One new immigrant every 45 seconds

  Write a program that displays the population for each of the next five years. Assume the current population is 312,032,486 
  and one year has 365 days. 
  
  **** Hint ****  
  In C++, if two integers perform division, the result is the quotient. 
  The fractional part is truncated. For example, 5 / 4 is 1 (not 1.25) and 10 / 4 is 2 (not 2.5). 
  To get an accurate result with the fractional part, one of the values involved in the division must 
  be a number with a decimal point. For example, 5.0 / 4 is 1.25 and 10 / 4.0 is 2.5.
*/

// ******** SOLUTION ******** 

#include<iostream>
using namespace std;

int main(){
  int currentPopulation = 312032486;
  int secondsInYear = 365 * 24 * 60 * 60;
  
  // Calculate changes per year
  int birthsPerYear = secondsInYear / 7;
  int deathsPerYear = secondsInYear / 13;
  int immigrantsPerYear = secondsInYear / 45;

  // Net population change per year
  int populationChange = birthsPerYear + immigrantsPerYear - deathsPerYear;

  cout << "Current population      = " << currentPopulation << endl;
  cout << "population after 1 year = " << currentPopulation + 1 * populationChange << endl;
  cout << "population after 2 year = " << currentPopulation + 2 * populationChange << endl;
  cout << "population after 3 year = " << currentPopulation + 3 * populationChange << endl;
  cout << "population after 4 year = " << currentPopulation + 4 * populationChange << endl;
  cout << "population after 5 year = " << currentPopulation + 5 * populationChange << endl;
  return 0;
}



