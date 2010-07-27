#include <iostream>
using namespace std;
typedef unsigned long long ULLONG;
bool test_prime(ULLONG nr);

int main()
{
  const int until=10001;
  int count=0;
  ULLONG maybeprime=2;
  while(count<until)
    {
      if(test_prime(maybeprime)) {
	count++;
	cout << maybeprime << " is the " << count << ". prime number" << endl;
      }
      maybeprime++;
    }

}

bool test_prime(ULLONG nr)
{
  if(nr<2) return false;
  for(ULLONG i=2; i<(nr/2+1); i++)
    {
      if(nr%i==0)
	{
	  //	  cout << nr << " is not a prime number!" << endl;
	  return false;
	}
    }
  //  cout << nr << " is a prime number!" << endl;
  return true;
}
