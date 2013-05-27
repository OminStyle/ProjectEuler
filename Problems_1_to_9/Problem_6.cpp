/*problem 6
The sum of the squares of the first ten natural numbers is,
12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
http://projecteuler.net/problem=6*/

#include <iostream>
using namespace std;

int main()
{
	int limit = 100;
	int SumOfSq = 0;
	int sum = 0;
	int SqOfSum = 0;
	int dif = 0;
	for( int a = 1; a <= limit; a++ )
	{
		SumOfSq = SumOfSq + a * a;
		sum = sum + a;
	}
	SqOfSum = sum * sum;
	dif = SqOfSum - SumOfSq;
	cout << dif;

	return 0;  
}
