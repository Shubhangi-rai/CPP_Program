//  Program to check if a triangle is scalene, isosceles or equilateral.
#include<iostream>
using namespace std;
int main()
{
 int a, b, c;
 cout << "Input three sides of triangle: \n ";
 cin >> a >> b >> c;
 if (a == b && b == c)
 {
 cout << "This is an equilateral triangle. \n ";
 }
 else if (a == b || a == c || b == c)
 {
 cout << "This is an isosceles triangle. \n ";
 }
 else
 {
 cout << "This is a scalene triangle. \n ";
 }
 return 0;
}