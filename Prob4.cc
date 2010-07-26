#include <iostream>
#include <cmath>
using namespace std;
int blah(int foo);

int main()
{
  long tmpprod;
  long maxpalim=1;
  int digits=1, digits_half=1;

  for(int i=100; i<1000; i++)
    {
      for(int j=100; j<1000; j++)
	{
	  tmpprod=i*j;
	  digits=log10(tmpprod);
	  digits_half=digits/2;
	  //	cout << "DEBUG: " << "tmpprod" << tmpprod << "digits " << digits << "digits_half " << digits_half << endl;
	  if(digits%2==0)
	    {
	      if((tmpprod/blah(digits_half+1))%10 == (tmpprod/blah(digits_half-1))%10 && 
		 tmpprod/blah(digits_half+2)%10 == tmpprod/blah(digits_half-2)%10)
		{
		  cout << tmpprod  << "ist ein Palindrom" << endl;
		  if(tmpprod > maxpalim) maxpalim=tmpprod;
		}
	    }

	  if(digits%2!=0)
	    {
	      if(tmpprod/blah(digits_half+1)%10 == tmpprod/blah(digits_half-0)%10 && 
		 tmpprod/blah(digits_half+2)%10 == tmpprod/blah(digits_half-1)%10 &&
		 tmpprod/blah(digits_half+3)%10 == tmpprod/blah(digits_half-2)%10 )
		{
		  cout << tmpprod  << " ist ein Palindrom" << endl;
		  if(tmpprod > maxpalim) maxpalim=tmpprod;
		}
	    }


	}
    }
  cout << endl << endl << endl ;
  cout << "Maximum Palim " << maxpalim;
}

int blah(int foo)
{
  return pow(10,foo);
}
