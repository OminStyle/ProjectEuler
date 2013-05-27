/*Problem 10
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/    

#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    long long int limit = 2000000;
    //Assuming that limit is higher than 5
    long long int sum = 5;
    
    for( int n = 5; n < limit; n = n + 2 )
    {
        int highestPrime = sqrt( n );
        for( int t = highestPrime; t > 1; t--)
        {
            if( n%t == 0 )
                break;
            if( t == 2 )
            {
                sum = sum + n;
            }
        }
    }
    cout << sum;
    return 0;
}
