#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  const unsigned int maxnr=100;
  //  unsigned long int sum=0L, square_sum=0L;
  long int sum=0L, square_sum=0L;

  for(int i = 0; i<=maxnr; i++)
    {
      sum += i;
      square_sum += i*i;
    }
  cout << "(Sum)^2 of all numbers from 1 to " << maxnr << ": " << sum*sum << endl;
  cout << "Sum(nr^2) of all numbers from 1 to " << maxnr << ": " << square_sum << endl;
  cout << "Difference: " << abs(sum*sum - square_sum) << endl;
  return 0;

}
