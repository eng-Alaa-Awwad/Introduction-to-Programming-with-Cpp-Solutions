// ******** QUESTION ******** 
// (Algebra: solve quadratic equations) 

// ******** SOLUTION ******** 
#include<iostream>
#include<cmath>
using namespace std;

int main(){
  double a, b, c, discriminant;
  // step-1: Enter the equation coefficients 
  cout << "Enter a, b, c: ";
  cin >> a >> b >> c;

  // step-2: Calculate discriminant
  discriminant = pow(b , 2) - (4 * a * c);

  // step-3 : Calculate Roots and display the answer
  if (discriminant>0){
    double r1 = (-b + pow(discriminant , 0.5)) / (2*a);
    double r2 = (-b - pow(discriminant , 0.5)) / (2*a);
    cout << "The roots are " << r1 << " and " << r2;
  }else if(discriminant == 0){
    double r = (-b) / (2*a);
    cout << "The root is " << r ;
  }else{
    cout << "The equation has no real roots";
  }

  return 0;
}