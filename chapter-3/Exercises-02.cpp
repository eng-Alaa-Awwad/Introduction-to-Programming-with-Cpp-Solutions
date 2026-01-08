// ******** QUESTION ******** 
/*
(Check numbers) Write a program that prompts the user to enter two integers and
checks whether the first number is divisible by the second.
*/

// ******** SOLUTION ******** 
#include<iostream>
using namespace std;

int main(){
  int number1, number2;
  // step-1: Enter the numbers 
  cout << "Enter two integers: ";
  cin >> number1 >> number2;

  // step-2: check the numbers and print the result 
  if ((number1 % number2) == 0){
    cout << number1 << " is divisible by " << number2;
  }else{
    cout << number1 << " is not divisible by " << number2;
  }
  return 0;
}