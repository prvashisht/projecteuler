#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    while (t--) {
        int n, ans = 0;
        cin >> n;
        while (--n) {
            if (!(n%3) || !(n%5))
                ans += n;
        }
        cout << ans << endl;
    }
    return 0;
}
