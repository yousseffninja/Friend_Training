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

int main() {
    IO();
    ll l, r;
    cin >> l >> r;

    if(r - l < 2)
        cout << -1;
    else{
        if(l % 2 == 0)
            cout << l << " " << l + 1 << " " << l + 2;
        else if(r - l >= 3 && l % 2 != 0)
            cout << l + 1 << " " << l + 2 << " " << l + 3;
        else
            cout << -1;
    }
}