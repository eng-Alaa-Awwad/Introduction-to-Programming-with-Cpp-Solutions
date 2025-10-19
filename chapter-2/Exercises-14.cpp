// ******** QUESTION ******** 
/*
  (Health application: BMI) Body Mass Index (BMI) is a measure of health on
  weight. It can be calculated by taking your weight in kilograms and dividing by the
  square of your height in meters. Write a program that prompts the user to enter a
  weight in pounds and height in inches and displays the BMI. Note that one pound is
  0.45359237 kilograms and one inch is 0.0254 meters.
*/

// ******** SOLUTION ******** 

#include<iostream>
#include<cmath>
using namespace std;

int main(){
  double weight, height, BMI;

  cout << "Enter weight in pounds: ";
  cin >> weight;
  // convert weight to kg;
  weight *= 0.45359237;
  cout << "Enter height in inches: ";
  cin >> height;
  // convert height to meters;
  height *= 0.0254;

  BMI = weight / pow(height,2.0);

  cout << "BMI is " << BMI;

  return 0;
}