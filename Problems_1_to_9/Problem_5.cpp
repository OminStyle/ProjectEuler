/*
Program 5
	2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
	What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
http://projecteuler.net/problem=5
*/

#include <iostream>
using namespace std;

int main()
{
	int num = 1;
	int limit = 20;
	while(1)
	{
		for( int a = 1; a <= limit; a++ )
		{
			if( num%a != 0 )
				break;
			if( a == limit )
			{
				cout << num;
				return 0;
			}
		}
		num++;
	}
}
