#include <iostream>
using namespace std;

#define MAXNR 4000000

int main()
{
  unsigned long long sum=0;
  unsigned long fib=0, fib_pre=1, fib_pre_pre=0;
  while(fib<MAXNR)
    {
      fib=fib_pre+fib_pre_pre;

      fib_pre_pre=fib_pre;

      fib_pre = fib;
      if(fib<MAXNR && fib%2 == 0) {
	cout << fib << "\t" << ends;
	sum+=fib;
      }
    }

  cout << endl << endl;
  cout << "The sum of all these even fibonacci numbers is " << sum << ends;
  cout << endl << endl;
}

// Durchspielen
/*
  f fpp  fp 
  0 0    0
  0 0    0



 */
