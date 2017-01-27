#include "prime_lib.h"

#include <UnitTest++/UnitTest++.h>
#include <stdexcept>
#include <vector>

using namespace std;

TEST(IS_PRIME)
{
    CHECK_EQUAL(true,is_prime(7));
    CHECK_EQUAL(false,is_prime(8));
    CHECK_EQUAL(false,is_prime(2*83));
}

TEST(IS_PRIME_ERRORS)
{
  // [YOUR CODE HERE]
}

// Write unit tests for generate_primes
// [YOUR CODE HERE]
TEST(GENERATE_PRIMES)
{
    vector<int> test_vector = {2,3,5};
    CHECK_EQUAL(test_vector, generate_primes(6));
}

TEST(GENERATE_PRIME_ERRORS)
{
  // [YOUR CODE HERE]
}

// Write unit tests for check_is_prime
// [YOUR CODE HERE]
TEST(CHECK_IS_PRIME)
{
    vector<int> test1 = {2,3,5,7,11,13,17,19,23,29,31};
    CHECK_EQUAL(false, check_is_prime(test1, 4));
    CHECK_EQUAL(true, check_is_prime(test1, 13));
    CHECK_EQUAL(true, check_is_prime(test1, 59));
}
TEST(CHECK_IS_PRIME_ERRORS)
{
  // [YOUR CODE HERE]
}
