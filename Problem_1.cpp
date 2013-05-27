//version 1
int main()
{
	int limit = 1000;
  int sum = 0;
	for( int a = 1; a < limit; a++ )
	{
		if( a%3==0 || a%5==0 )
  		sum = sum + a;
	}
	cout << sum;
}

//version 2
#include <iostream>
using namespace std;

int main()
{
	int n = 13195;
	//as long as n > 3
	int factor = 3;
	int lastFactor = 1;
	while ( n > 1 )
	{
		if( n%factor == 0)
		{
	  	lastFactor = factor;
	  	n = n/factor;
	  	while( n%factor == 0 )
	      	n = n/factor;
  	}
  	factor = factor + 2;
	}
cout << lastFactor;
}

//version 3
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n = 13195;
	//as long as n > 3
	int factor = 3;
	int lastFactor = 1;
	int largestPosFactor = sqrt( n );
	while ( n > 1 && lastFactor < largestPosFactor )
	{
  	if( n%factor == 0)
  	{
      	lastFactor = factor;
      	n = n/factor;
      	while( n%factor == 0 )
          	n = n/factor;
  	}
  	factor = factor + 2;
	}
  cout << lastFactor;
}
