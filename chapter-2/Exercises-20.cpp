// ******** QUESTION ******** 
/*
  (Slope of a line) Write a program that prompts the user to enter the coordinates of two
  points (x1, y1) and (x2, y2), and displays the slope of the line that connects the two
  points. The formula of the slope is (y2 - y1)/(x2 - x1).
*/

// ******** SOLUTION ******** 

#include<iostream>
#include<cmath>
using namespace std;

int main(){
  double x1, x2 ,y1 ,y2 ,slope;

  
  cout << "Enter the coordinates for two points: ";
  cin >> x1 >> y1 >> x2 >> y2;

  slope = (y2 - y1) / (x2 - x1);

  cout << "The slope for the line that connects two points (" << x1 << " , " << y1 << ") and (" <<x2 <<" , "<< y2 <<") is " << slope;
  return 0;
}