// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 3
// =============================================================================
//
// TASK: Array Statistics Calculator
//
// Write a C++ program that reads a collection of numbers from the user
// and computes key statistical values using separate functions.
//
// -----------------------------------------------------------------------------
// EXPECTED INPUT / OUTPUT EXAMPLE
// -----------------------------------------------------------------------------
//
//   How many numbers? 5
//   Enter number 1: 4
//   Enter number 2: 7
//   Enter number 3: 2
//   Enter number 4: 9
//   Enter number 5: 1
//
//   Results:
//   Sum:     23
//   Average: 4.6
//   Maximum: 9
//   Minimum: 1
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - You MUST implement each calculation in its own function (see scaffold).
// - You may NOT use any standard library functions like accumulate(), max(),
//   or min(). Implement the logic yourself using loops.
// - N must be a positive integer. If the user enters 0 or a negative number,
//   print an error message and stop.
//

//
// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
using namespace std;

int getSum(int number[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += number[i];
  }
  return sum;
}

double getAvg(int number[], int size)
{
  int sum = getSum(number, size);
  return sum / (double)size;
}

int getMax(int number[], int size)
{
  int max = number[0];

  for (int i = 0; i < size; i++)
  {
    if (number[i] > max)
    {
      max = number[i];
    }
  }

  return max;
}
int getMin(int number[], int size)
{
  int min = number[0];

  for (int i = 0; i < size; i++)
  {
    if (number[i] < min)
    {
      min = number[i];
    }
  }

  return min;
}

int main()
{

  int arraySize;
  cout << "How many numbers? ";
  cin >> arraySize;
  int number[arraySize];

  if (arraySize <= 0)
  {
    cout << "Error: Number must be mor than 0." << endl;
    return 1;
  }
  else
  {
    for (int i = 0; i < arraySize; i++)
    {
      cout << "Enter number " << i + 1 << endl;
      cin >> number[i];
    }
  }
  cout << "Results: " << endl;
  cout << "Sum: " << getSum(number, arraySize) << endl;
  cout << "Average: " << getAvg(number, arraySize) << endl;
  cout << "Maximum: " << getMax(number, arraySize) << endl;
  cout << "Minimum: " << getMin(number, arraySize) << endl;
  return 0;
}