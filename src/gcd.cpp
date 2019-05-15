#include <cstdlib> // for abs(long long int)
#include <algorithm> // for min()

#include "../headers/gcd.h"

namespace ExactArithmetic
{

long long int gcd(long long int a, long long int b)
/*
 * find Greater Common Divisor using Euclid's Algorithm 
 */
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}



} // End of namespace ExactArithmetic
