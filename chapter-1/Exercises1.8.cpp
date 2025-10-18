// ******** QUESTION ******** 
/*
(Area and perimeter of an equilateral triangle) Write a program that displays the area and perimeter of an equilateral 
triangle that has its three sides as 9.2, using the following formula:
                        area = 1.732 * (side1)^2 / 4
                        perimeter = 3 * side1
*/

// ******** SOLUTION ******** 

#include<iostream>
#include<cmath>
using namespace std;

int main(){
  double side = 9.2;
  double area = 1.732 * pow(side,2) / 4;
  double perimeter = 3 * side;
  cout << "Area = " << area << endl;
  cout << "perimeter = " << perimeter << endl;
  return 0;
}

// ******** NOTE ********
// In later chapters, we will learn how to let the user enter the side value
// using cin, instead of using a fixed value in the program.
// For example: cin >> side;
