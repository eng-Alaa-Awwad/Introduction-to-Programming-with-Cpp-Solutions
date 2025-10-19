// ******** QUESTION ******** 
/*
  (Compute the volume of a cylinder) Write a program that reads in the radius and length
  of a cylinder and computes the area and volume using the following formulas:
  area = radius * radius * π
  volume = area * length
*/

// ******** SOLUTION ******** 

#include<iostream>
using namespace std;

int main(){
  double radius, length, area, volume;
  const double PI = 3.14159;

  cout << "Enter the radius and length of a cylinder: ";
  cin >> radius>> length;
  
  area = radius * radius * PI;
  volume = area * length;

  cout << "The area is " << area <<endl;
  cout << "The volume is " << volume <<endl;

  return 0;
}