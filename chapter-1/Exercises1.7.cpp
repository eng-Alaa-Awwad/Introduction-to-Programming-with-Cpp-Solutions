// ******** QUESTION ******** 
/*
(Approximate p) p can be computed using the following formula:
*** See Formula in text book *** 
Write a program that displays the result of it.
*/

// ******** SOLUTION ******** 

#include<iostream>
#include<cmath>
using namespace std;

int main(){
  cout << "PI = " << pow((6*(1+(1.0/4)+(1.0/9)+(1.0/16)+(1.0/25))),0.5);
  return 0;
}

// ******** NOTE ********
// We use 1.0 (a floating-point value) instead of 1 (an integer)
// so that division like 1.0/4 gives a decimal result.
// The pow(x, 0.5) function is used to compute the square root of x.
// In later chapters, we can also use sqrt(x) from <cmath> for the same purpose.
