#include<bits/stdc++.h>

using namespace std;
#define F first
#define S second
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define rep(i, a, n) for(int i = a; i < n; i++)

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
    int n, p, q, x;
    cin >> n >> p;

    bool res[n];
    memset(res, 0, sizeof(res));

    rep(i,0,p){
        cin >> x;
        if(res[x - 1] == 1) continue;
        res[x - 1] = 1;
    }

    cin >> q;

    rep(i,0,q){
        cin >> x;
        if(res[x - 1] == 1) continue;
        res[x - 1] = 1;
    }

    rep(i, 0, n)
        if(res[i] == 0){
            cout << "Oh, my keyboard!";
            return 0;
        }
    cout << "I become the guy.";
}
