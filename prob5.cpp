// Finds out the "smallest number that can be divided by each of the numbers from 1 to maxnr without any remainder."
// #projecteuler

#include <iostream>
using namespace std;
int find_primes(const int max);
bool test_prime(int nr);

int main()
{
  const int maxnr=10;
  unsigned long int product=1;
  int tmp=1;
  //  int i=maxnr+1;

  /*  while(i>2)  {
    i--;
    if(product % i == 0) continue;
    product *= i;
    cout << product << endl;
    }*/


  for(int i=2; i<=maxnr; i++)
  {
    if(!(test_prime(i)))
      continue;
  while(tmp<=maxnr)
    {
      tmp*=i;
    }
  tmp/=i;
  product*=tmp;
  tmp=1;
  }

  cout << "The smallest number which is evenly divisible by all numbers is: " << product << endl;
}

bool test_prime(int nr)
{
  if(nr<2) return false;
  for(int i=2; i<(nr/2+1); i++)
    {
      if(nr%i==0)
        {
	  cout << nr << " is not a prime number!" << endl;
          return false;
        }
    }
  cout << nr << " is a prime number!" << endl;
  return true;
}
