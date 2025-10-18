// ******** QUESTION ******** 
/*
(Area and perimeter of a square) Write a program that displays the area and perimeter of a square that has a side of 5.2 using the following formula:
                                    area = (side)^2 and perimeter = 4 * side
*/

// ******** SOLUTION ******** 

#include<iostream>
#include<cmath>
using namespace std;

int main(){
  double side = 5.2;
  double area = pow(side,2);
  double perimeter = 4 * side;
  cout << "Area = " << area << endl;
  cout << "perimeter = " << perimeter << endl;
  return 0;
}

// ******** NOTE ********
// In later chapters, we will learn how to let the user enter the side value
// using cin, instead of using a fixed value in the program.
// For example: cin >> side;
