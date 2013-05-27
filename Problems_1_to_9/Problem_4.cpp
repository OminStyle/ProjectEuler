/*Problem 4
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 x 99.
Find the largest palindrome made from the product of two 3-digit numbers.
http://projecteuler.net/problem=4*/

#include <iostream>
using namespace std;

int check( int, int );

int main( )
{
	int digit = 999;
	int num = 1;

	for( int a = digit; a > 0; a-- )
	{
		for( int b = digit; b > 0; b--)
		{
			//cout << a << " " << b << endl;
			int test = check( a, b );
			if( num < test )
			{
				num = test;
			}
		}
	}
	cout << num;
	return 0;  
}

int check( int a, int b )
{
	int product = a * b;
	int n1 = product%1000000 / 100000;
	int n2 = product%100000 / 10000;
	int n3 = product%10000 / 1000;
	int n4 = product%1000 / 100;
	int n5 = product%100 / 10;
	int n6 = product%10;

	if( n1 == n6 && n2 == n5 && n3 == n4 )
		return product;
	else
		return 1;
}
