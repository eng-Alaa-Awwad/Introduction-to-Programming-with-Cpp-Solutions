// ******** QUESTION ******** 
/*
  (Geometry: distance of two points) Write a program that prompts the user to enter
  two points (x1, y1) and (x2, y2) and displays their distance between them.
  The formula for computing the distance is ((x2 - x1)^2 + (y2 - y1)^2)^0.5. Note that you
  can use pow(a, 0.5) to compute a^2. Here is a sample run:
*/

// ******** SOLUTION ******** 

#include<iostream>
#include<cmath>
using namespace std;

int main(){
  double x1, x2, y1, y2, distance;

  cout << "Enter x1 and y1: ";
  cin >> x1 >> y1;
  cout << "Enter x2 and y2: ";
  cin >> x2 >> y2;

  distance = pow((pow(x2-x1,2.0) + pow(y2-y1,2.0)),0.5);

  cout << "The distance between the two points is " << distance;
  return 0;
}