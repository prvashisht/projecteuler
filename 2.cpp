#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;

ull get_even_sum(ull n)
{
    ull a = 0, b = 1, c, i, ans = 0;
    if( n == 0)
        return a;
    while (1) {
        c = a + b;
        a = b;
        b = c;
        if (b > n)
            break;
        if (!(c%2))
            ans += c;
    }
    return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    while (t--) {
        ull n;
        cin >> n;
        cout << get_even_sum(n) << endl;
    }
    return 0;
}
