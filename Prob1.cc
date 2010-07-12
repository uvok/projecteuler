#include <iostream>
using namespace std;

int main()
{
  double sum=0;
  const int mul1=3;
  const int mul2=5;
  const int maxnr=1000;

  for (int nr=0; nr<maxnr; nr++)
    if(nr % mul1 == 0 || nr % mul2 == 0)
      sum += nr;

  cout << "The sum of all numbers that are multiplies of " << mul1 << " and " << mul2 << " is " << sum << endl;
  return 0;
}
