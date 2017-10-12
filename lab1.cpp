//=======================================================
// Name: lab1.cpp
// Author: PatrickDunphy NickPerry
// Course: CPTR245
// Assignment: Lab 1
// Description: Write the test cases and math expressions.
//=======================================================

// catch documentation: https://github.com/philsquared/Catch
// This tells Catch to provide a main() - only do this in one cpp file
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>
#include <string>

using namespace std;

// Factorial
unsigned int factorial( unsigned int number ) {
    return number <= 1 ? number : factorial(number - 1) * number;
}

// Quadratic equation. Plus only.
double quadratic(int a, int b, int c)
{
    if (b^2 < 4*a*c)
        throw invalid_argument("Invalid Inputs");
    if (a == 0)
        throw invalid_argument("'a' can't be zero")
    return ((-b + sqrt(b^2-4*a*c))/(2*a));
}

// Greatest Common Divisor (GCD).
double gcd(int number1, int number2)
{//For the sake of time, we are using code written by an outside source, and will write tests for that.
 //Source is: https://codereview.stackexchange.com/questions/66711/greatest-common-divisor
   double gcd;
   for(double i=1;i<=sqrt(number1^2)&&i<=sqrt(number2^2);i++){
    if(number1%i==0 && number2%i == 0 )
        gcd=i;
   }
   return gcd;
}

// Babylonian Algorithm for square root.
// Absolute C++ Ch3 PP14
double squareRoot(double value);
{
    
}

// Calculate what day of the week corresponds to the date.
// Absolute C++ Ch3 PP12
string dayOfTheWeek(int month, int day, int year);


// Find the student's Frist and Last Name and calculate the CS username
// Username criteria
//  - First 4 characters of Last Name
//  - If last name < 4, fill characters from first name.
//  - First 2 characters of First Name
//  - If first name < 2, fill characters from last name.
void parseStudentName(const string studentName, string& firstName, string& lastName, string& username);


// Tests...
TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( factorial(1) == 1 );
    REQUIRE( factorial(2) == 2 );
    REQUIRE( factorial(3) == 6 );
    REQUIRE( factorial(10) == 3628800 );
}

TEST_CASE( "Quadratics are computed", "[quadratic]") {
    try
    {
       double i = quadratic(1, 1, 1);
    }
    catch (invalid_argument& e)
    {
        cout << "b^2 < 4ac test passed";
    }
    try
    {
       double i = quadratic(0, 1, 1);
    }
    catch (invalid_argument& e)
    {
        cout << "a == 0 test passed";
    }
    REQUIRE( quadratic(1, 4, 4) == -2);
    REQUIRE( quadratic(2, 5, 2) == -.5);
}
/*double gcd(int number1, int number2)
{//For the sake of time, we are using code written by an outside source, and will write tests for that.
 //Source is: https://codereview.stackexchange.com/questions/66711/greatest-common-divisor
   double gcd;
   for(double i=1;i<=number1&&i<=number2;i++){
    if(number1%i==0 && number2%i == 0 )
        gcd=i;
   }
   return gcd;
}
*/
TEST_CASE( "GCD is found between 2 numbers", "[gcd]")
{
    
}
