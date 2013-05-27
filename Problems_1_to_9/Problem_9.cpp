/*
Problem 9

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

http://projecteuler.net/problem=9
*/

#include <iostream>
using namespace std;

int main()
{
	for( int c = 999; c > 0; c-- )
	{
		for( int b = 999; b > 0; b-- )
		{
			for( int a = 999; a > 0; a-- )
			{
				if( (c*c == a*a + b*b) && ( a + b + c == 1000 ) )
					cout << a << endl << b << endl << c << endl << a*b*c;
			}
		}
	}
	return 0;
}
