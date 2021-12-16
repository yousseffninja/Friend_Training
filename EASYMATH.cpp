#include<bits/stdc++.h>

int s[5];

using namespace std;
#define F first
#define S second
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define rep(i, a, n) for(size_t i = a; i < n; i++)
#define sz(str) str.size()

void IO(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int GCD(int n, int k){
    if(k == 0)  
        return n;
    return (k, n % k);
}

int LCM(int n, int k){
    return (n * k)/GCD(n, k);
}

ll solve(ll sign,ll i,ll ltc,ll num){
    if(i == 5){
        return sign * (num / ltc);
    }
    return solve(-1 * sign, i + 1, LCM(ltc, s[i]), num) +
            solve(sign, i + 1, ltc, num);
}

int main(){
    IO();

    int TC;
    cin >> TC;
    while(TC--){
        int n, m, a, d;

        rep(i, 0, 5)
            s[i] = a + i * d;

        ll res = solve(1, 0, 1, m) - solve(1, 0, 1, n-1);
    }
}
