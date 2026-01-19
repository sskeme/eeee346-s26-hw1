#include <iostream> // to use std::cout, std::cin, std::endl, and std::fixed
#include "stats.h" // to call average(), median(), max(), and min()

using namespace std; // to avoid writing std::

int main() {
  int x;
  int y;
  int z;

  // set the precision for cout
  cout.precision(2);

  // get three integers
  /*TODO: write your code*/

  // output Average (show in fixed point)
  // see https://cplusplus.com/reference/ios/fixed/ for more information about std::fixed
  cout << "Average: " << fixed << average(x, y, z) << endl;

  // output Median, Min, and Max
  /*TODO: write your code*/

  return 0;
}
