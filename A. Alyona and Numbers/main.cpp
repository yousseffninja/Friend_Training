#include<bits/stdc++.h>

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
#define zeros(x) memset(x,0,sizeof(x))

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

int main(){
    ull a, b, x[5], y[5];
    zeros(x);
    zeros(y);
    cin >> a >> b;
    for(int i = 1; i <= a; i++)
        x[i % 5]++;
    for(int i = 1; i <= b; i++)
        y[i % 5]++;
    cout << x[0] * y[0] + x[1] * y[4] + x[2] * y[3] + x[3] * y[2] + x[4] * y[1];
}