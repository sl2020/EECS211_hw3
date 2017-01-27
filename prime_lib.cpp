#include "prime_lib.h"

#include <stdexcept>
#include <vector>
#include <bits/valarray_before.h>

using namespace std;

bool is_prime(int p) {
    int i;
    bool is_Prime = true;

    for (i = 2; i < p; ++i) {
        if (p % i == 0) {
            is_Prime = false;
            break;
        }
    }
    return is_Prime;
}

bool check_is_prime(const std::vector<int> &primes, int p) {
    bool result = true;

    for (int prime : primes) {
        if (p == prime) {
            break;
        } else if (p % prime == 0) {
            result = false;
        }

    }
    return result;
}

vector<int> generate_primes(int n)
{
    vector<int> primes;
    vector<bool> sieve;

    for (int h = 0; h <=n; ++h)
    {
        sieve.push_back(true);
    }

    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            for (int ii = 2; ii < n / i; ++ii) {
                sieve[i * ii] = false;
            }
        }
    }
    for (int j = 0; j < sieve.size(); ++j) {
        if (sieve[j]) {
            primes.push_back(j + 2);
        }
    }
    return primes;
}

