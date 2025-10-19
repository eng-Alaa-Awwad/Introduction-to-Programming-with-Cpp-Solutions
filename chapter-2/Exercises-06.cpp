// ******** QUESTION ******** 
/*
  (Sum the digits in an integer) Write a program that reads an integer between 0 and
  1000 and adds all the digits in the integer. For example, if an integer is 932, the sum
  of all its digits is 14.
  Hint: Use the % operator to extract digits, and use the / operator to remove the
  extracted digit. For instance, 932 % 10 = 2 and 932 / 10 = 93.
*/

// ******** SOLUTION ******** 

#include<iostream>
using namespace std;

int main(){
  int firstDigit, secondDigit, thirdDigit, fourthDigit;
  int userNumber, sum;
  
  cout << "Enter a number between 0 and 1000: ";
  cin >> userNumber;

  firstDigit = userNumber % 10;
  userNumber /= 10;
  secondDigit = userNumber % 10;
  userNumber /= 10;
  thirdDigit = userNumber % 10;
  userNumber /= 10;
  fourthDigit = userNumber % 10;
  userNumber /= 10;

  sum = firstDigit + secondDigit + thirdDigit + fourthDigit;
  cout << "The sum of the digits is " << sum <<endl;
  return 0;
}