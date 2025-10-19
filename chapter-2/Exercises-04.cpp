// ******** QUESTION ******** 
/*
  (Convert pounds into kilograms) Write a program that converts pounds into kilograms.
  The program prompts the user to enter a number in pounds, converts it to
  kilograms, and displays the result. One pound is 0.454 kilograms.
*/

// ******** SOLUTION ******** 

#include<iostream>
using namespace std;

int main(){
  double pounds, kilograms;
  

  cout << "Enter a number in pounds: ";
  cin >> pounds;
  
  kilograms = 0.454 * pounds;

  cout << pounds << " pounds is " << kilograms << " kilograms" <<endl;

  return 0;
}