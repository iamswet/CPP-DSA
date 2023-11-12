#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Create an array of numbers
  int numbers[] = {1, 2, 3, 4, 5};

  // Find the sum of the numbers in the array
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += numbers[i];
  }

  // Print the sum of the numbers
  cout << "The sum of the numbers is " << sum << endl;

  return 0;
}
