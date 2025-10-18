// ******** QUESTION ******** 
/*
(Average sales in kilograms) Assume a vendor sells 5553 grams of grocery in 2 hours, 9 minutes and 30 seconds.
Write a program that displays the average sale in kilograms per hour (Note that 1 kilogram is 1000 grams).
*/

// ******** SOLUTION ******** 

#include<iostream>
using namespace std;

int main(){
  double timeInHour = 2 + (9.0/60) + (30.0/3600);
  double amountInKg = 5553 / 1000.0;
  double average = amountInKg / timeInHour; 
  cout << "The Average sales in kg = " << average  << " Kg/h"; 

  return 0;
}



