// ******** QUESTION ******** 
/*
(Health application: BMI) Revise Listing 3.2, ComputeAndInterpretBMI.cpp, to
let the user enter weight, feet, and inches. For example, if a person is 5 feet, 10
inches, you will enter 5 for feet and 10 for inches.
*/

// ******** SOLUTION ******** 
#include<iostream>
#include<cMath>
using namespace std;

int main(){
  double pounds;
  double feet;
  double inches;
  double KG_PER_POUNDS = 0.453592;
  double METER_PER_FEET = 0.3048;
  double METER_PER_INCH = 0.0254;

  cout << "Enter weight in pounds: ";
  cin >> pounds;
  cout << "Enter feet: ";
  cin >> feet;
  cout << "Enter inches: ";
  cin >> inches;

  double BMI = (pounds*KG_PER_POUNDS) / pow(((feet*METER_PER_FEET)+(inches*METER_PER_INCH)),2);

  cout << "BMI is " << BMI;
  return 0;
}