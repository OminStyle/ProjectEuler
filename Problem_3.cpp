/*Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
http://projecteuler.net/problem=3*/

#include <iostream>
using namespace std;

int main( )
{
	long long int limit = 600851475143;
	long long int goal = 600851475143;
	for( int a = 3; a <= limit; a++ )
		//a will be the prime numbers
	{
		if( goal == 1 )
			break;
		for( int b = 2; b < a; b++ )
			//testing a for prime numbers
		{
			if( goal == 1 )
				break;
			if( a%b == 0 )
				break;
			if( b == a-1 )
				while ( goal%a == 0 )
				{
					//Divide the goal with the prime number until there are remainders
					cout << a << endl;
					goal = goal / a;
				}
		}
	}

	return 0;  
}
