// ******** QUESTION ******** 
/*
  (Geometry: area of a triangle) Write a program that prompts the user to enter three
  points (x1, y1), (x2, y2), (x3, y3) of a triangle and displays its area. The formula
  for computing the area of a triangle is
  s = (side1 + side2 + side3)/2;
  area = s(s - side1)(s - side2)(s - side3)^0.5
*/

// ******** SOLUTION ******** 

#include<iostream>
#include<cmath>
using namespace std;

int main(){
  double x1, x2 ,x3 ,y1 ,y2 ,y3 ,area ,s ,side1 ,side2 ,side3;

  
  cout << "Enter three points for a triangle: ";
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  // cacluate the value of each side as in exercies-15
  side1 = pow((pow(x2-x1,2.0) + pow(y2-y1,2.0)),0.5);
  side2 = pow((pow(x2-x3,2.0) + pow(y2-y3,2.0)),0.5);
  side3 = pow((pow(x3-x1,2.0) + pow(y3-y1,2.0)),0.5);

  s = (side1 + side2 + side3) / 2;

  area = pow((s * (s - side1) * (s - side2) * (s - side3)) , 0.5);

  cout << "The area of the triangle is " << area;
  return 0;
}