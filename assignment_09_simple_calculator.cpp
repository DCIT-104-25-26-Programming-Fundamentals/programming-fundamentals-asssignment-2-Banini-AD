// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 9
// =============================================================================
//
// TASK: Console-Based Simple Calculator
//
// Build a calculator program that runs in the console and performs basic
// arithmetic operations based on the user's input.
//
// -----------------------------------------------------------------------------
// OPERATIONS YOUR CALCULATOR MUST SUPPORT
// -----------------------------------------------------------------------------
//
//   1. Addition          ( + )    e.g.  10 + 3  =  13
//   2. Subtraction       ( - )    e.g.  10 - 3  =  7
//   3. Multiplication    ( * )    e.g.  10 * 3  =  30
//   4. Division          ( / )    e.g.  10 / 3  =  3.33
//   5. Modulus           ( % )    e.g.  10 % 3  =  1  (remainder)
//   6. Exponentiation    ( ^ )    e.g.  2 ^ 8   =  256
//   7. Quit
//
// -----------------------------------------------------------------------------
// HOW THE MENU SHOULD LOOK
// -----------------------------------------------------------------------------
//
//   ============================
//        SIMPLE CALCULATOR
//   ============================
//   1. Addition
//   2. Subtraction
//   3. Multiplication
//   4. Division
//   5. Modulus
//   6. Exponentiation
//   7. Quit
//   Select an operation (1-7):
//
// -----------------------------------------------------------------------------
// EXPECTED INTERACTION EXAMPLE
// -----------------------------------------------------------------------------
//
//   Select an operation (1-7): 4
//   Enter first number : 10
//   Enter second number: 3
//   Result: 10 / 3 = 3.33
//
//   Select an operation (1-7): 4
//   Enter first number : 5
//   Enter second number: 0
//   Error: Cannot divide by zero.
//
//   Select an operation (1-7): 7
//   Goodbye!
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - Each arithmetic operation MUST be written as its own function.
// - Use a loop so the calculator keeps running until the user selects Quit.
// - Division by zero must be caught and handled with a clear error message
//   (do NOT let the program crash).
// - Use fixed and setprecision(2) to display results to 2 decimal places.
// - Handle invalid menu choices gracefully.
// - For exponentiation use a loop or the pow() function from <cmath>.
//

// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void add()
{
  int a;
  int b;
  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;
  double result = a + b;
  cout << "Result: " << result << endl;
}

void subtract()
{
  int a;
  int b;
  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;

  double result = a - b;
  cout << "Result: " << result << endl;
}

void multiply()
{
  int a;
  int b;
  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;

  double result = a * b;
  cout << "Result: " << result << endl;
}

void divide()
{
  int a;
  int b;
  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;
  if (b == 0)
  {
    cout << "Error: Cannot divide by zero." << endl;
  }

  double result = a / (double)b;
  cout << "Result: " << fixed << setprecision(2) << result << endl;
}

void calculateModulus()
{
  int a;
  int b;
  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;
  if (b == 0)
  {
    cout << "Error: Cannot calculate modulus with zero." << endl;
  }

  double result = fmod(a, b);
  cout << "Result: " << result << endl;
}

void exponentiate()
{
  int a;
  int b;
  cout << "Enter base: ";
  cin >> a;
  cout << "Enter exponent: ";
  cin >> b;
  double result = pow(a, b);
  cout << "Result: " << fixed << setprecision(2) << result << endl;
}

void quitProgram()
{
  cout << "Goodbye!" << endl;
}

int main()
{
  int selectedNumber;
  bool running = true;

  cout << "================================" << endl;
  cout << "       SIMPLE CALCULATOR        " << endl;
  cout << "================================" << endl;
  while (running)
  {
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulus" << endl;
    cout << "6. Exponentiation" << endl;
    cout << "7. Quit" << endl;
    cout << "Enter your choice (1-7): ";
    cin >> selectedNumber;

    if (selectedNumber < 1 || selectedNumber > 7)
    {
      cout << "Error: Please enter a valid choice (1-7)." << endl;
    }
    else if (selectedNumber == 1)
    {
      add();
    }
    else if (selectedNumber == 2)
    {
      subtract();
    }
    else if (selectedNumber == 3)
    {
      multiply();
    }
    else if (selectedNumber == 4)
    {
      divide();
    }
    else if (selectedNumber == 5)
    {
      calculateModulus();
    }
    else if (selectedNumber == 6)
    {
      exponentiate();
    }
    else if (selectedNumber == 7)
    {
      quitProgram();
      running = false;
    }
  }
  return 0;
}