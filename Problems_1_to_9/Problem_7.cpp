*/
Problem 7
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
http://projecteuler.net/problem=7
*/

#include <iostream>
using namespace std;

int main()
{
    int limit = 10001;
  int count = 1;
	int num = 3;
	
	//run until the limitTH prime
	while( count < limit)
	{
    	//count the primes
    	for( int b = 2; b < num; b++ )
    	{
        	if( num%b == 0 )
            	break;
        	if( b == num - 1 )
        	{
            	count++;               	
        	}
    	}
    	num++;
	}
	cout<< num-1;
	return 0;
}
