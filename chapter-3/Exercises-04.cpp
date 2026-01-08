// ******** QUESTION ******** 
/*
(Check the speed) Write a program that prompts the user to enter the speed of a
vehicle. If speed is less than 20, display too slow; if speed is greater than 80,
display too fast; otherwise, display just right.
*/

// ******** SOLUTION ******** 
#include<iostream>
using namespace std;

int main(){
  double speed;
  cout << "Enter the speed of a vehicle ";
  cin >> speed;

  if(speed < 20){
    cout << "too slow";
  }else if(speed > 80){
    cout << "too fast";
  }else{
    cout << "just right";
  }
  return 0;
}