// ******** QUESTION ******** 
/*
  (Cost of driving) Write a program that prompts the user to enter the distance to drive,
  the fuel efficiency of the car in miles per gallon, and the price per gallon, and displays
  the cost of the trip.
*/

// ******** SOLUTION ******** 

#include<iostream>
using namespace std;

int main(){
  double distance, fuelEfficiency, fulePrice, cost;

  cout << "Enter the driving distance: ";
  cin >> distance;
  cout << "Enter miles per gallon: ";
  cin >> fuelEfficiency;
  cout << "Enter price per gallon: ";
  cin >> fulePrice;

  cost = (distance / fuelEfficiency) * fulePrice;
  cout << "The cost of driving is $" << cost;
  return 0;
}