// ******** QUESTION ******** 
/*
(Geometry: area of a hexagon) Write a program that prompts the user to enter the
side of a hexagon and displays its area. The formula for computing the area of a
hexagon is
Area = ((3*3^0.5)/2) * s^2
where s is the length of a side.
*/

// ******** SOLUTION ******** 

#include<iostream>
#include<cmath>
using namespace std;

int main(){
  double side, area;

  cout << "Enter the side: ";
  cin  >> side;

  area = ((3 * pow(3,0.5)) / 2) * pow(side, 2.0);

  cout << "The area of the hexagon is " << area;
  
  return 0;
}