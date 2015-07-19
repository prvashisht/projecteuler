#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n_sum (ll n)
{
    return n * (n + 1) / 2;
}

int main ()
{
    ll test_case = 0;
    cin >> test_case;
    while (test_case--) {
        long long ans = 0, n, t1, t2, t3;
        cin >> n;
        n--;
        t1 = t2 = t3 = n;
        while (t1 % 3)
            t1--;
        while (t2 % 5)
            t2--;
        while (t3 % 15)
            t3--;
        //cout << t1 << " " << t2 << " " << t3 << " " << endl;
        cout << 3*n_sum(t1/3) + 5*n_sum(t2/5) - 15*n_sum(t3/15) << endl;
    }
    return 0;
}
