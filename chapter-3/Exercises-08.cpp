// ******** QUESTION ******** 
/*
(Comparing Integers) Write a program that prompts the user to enter the edges
of a triangle and compares them. If all edges are equal, display Equilateral
Triangle; if only two edges are equal, display Isosceles Triangle and if
none of the edges are equal, display Scalene Triangle.
*/

// ******** SOLUTION ******** 
#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter the edges of a triangle: ";
    cin >> a >> b >> c;

    if (a == b && a==c) {
        cout << "Equilateral Triangle";
    }

    else if (a == b || a == c || b == c) {
        cout << "Isosceles Triangle";
    }

    else {
        cout << "Scalene Triangle";

    }

    return 0;
}