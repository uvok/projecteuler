#include <iostream>

using namespace std;

int main()
{
  int maxnum=500;
  int a=3, b=2, c=1;
  for(a=3; a<maxnum; a++)
    for(b=2; b<a; b++)
      for(c=1; c<b; c++)
	if(c*c+b*b==a*a || c*c+a*a==b*b || a*a+b*b==c*c) 
	  if(a+b+c==1000){ cout << "a: " << a << " b: " << b << " c: " << c << endl; 
	    cout << "a*b*c" << a*b*c<< endl;}

}
