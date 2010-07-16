// Finds the largest prime factor of a number
#include <iostream>
using namespace std;
typedef unsigned long long ULLONG;

bool test_prime(ULLONG nr);

int main()
{
  ULLONG NR=600851475143LL;
  //ULLONG NR=834;
  //  const ULLONG NR=130;
  cout << NR << endl;
  //ULLONG x=NR/2; 

  for (int i = 2; i<2000; i++)
    {
      while(NR % i == 0) { NR /=i; cout << i << " "; }
    }
  cout << "Rest: " << NR << endl;

  cout << "================ Alternative ================" << endl;
  int j = 2;
  NR=600851475143LL;
  while(NR>1) {
    if(NR % j == 0) {
      NR /= j; cout << j << " ";
  }
    else j++;
  }
  cout << "Rest: " << NR << endl;


/*  while(1)
    {
      cout << "Enter a number: ";
      cin >> nr;
      test_prime(nr);
      cin.ignore(1, '\n');
      }*/
  return 0;

}


/*
bool test_prime(ULLONG nr)
{
  if(nr<2) return false;
  for(ULLONG i=2; i<(nr/2+1); i++)
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
*/
