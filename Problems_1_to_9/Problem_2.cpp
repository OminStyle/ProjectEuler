/*Problem 2
The Fibonacci sequence up to the number inputted.
http://projecteuler.net/problem=2*/

#include <iostream>
using namespace std;

void find_next_fib(int &a,int &b,int &c );

int main()
{
  int limit;
	cout << "The Fibonacci sequence up to: ";
	cin >> limit;
  	int a = 1;
	int b = 2;
	int c = 3;
	do {
  	find_next_fib( a, b, c );
  	if( c < limit )
  		cout << c << endl;
	} while( c < limit );
		return 0;
}

void find_next_fib( int &a, int &b, int &c  )
{
	c = a + b;
	a = b;
	b = c;
}


