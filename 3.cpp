#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;

bool isPrime (int num)
{
    if (num <=1)
        return false;
    else if (num == 2)         
        return true;
    else if (num % 2 == 0)
        return false;
    else
    {
        bool prime = true;
        int divisor = 3;
        double num_d = static_cast<double>(num);
        int upperLimit = static_cast<int>(sqrt(num_d) +1);
        
        while (divisor <= upperLimit)
        {
            if (num % divisor == 0)
                prime = false;
            divisor +=2;
        }
        return prime;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while (t--) {
        ull n, tmp;
        cin >> n;
        if (isPrime(n)) {
            cout << n << endl;
            continue;
        }
        tmp = n / 2;
        
        while (tmp > 0) {
            if (tmp % 2 == 0)
                tmp--;
            if (n % tmp == 0 && isPrime(tmp)) {
                cout << tmp << endl;
                break;
            }
            tmp -= 2;
        }
    }
    return 0;
}
