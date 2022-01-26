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
    string str;
    cin >> str;
    int n = sz(str);

    if(str[0] - '0' != 9 && str[0] - '0' > 4)
        cout << 9 - (str[0] - '0');
    else
        cout << str[0];

    rep(i, 1, n){
        if((str[i] - '0') > 4)
            cout << 9 - (str[i] - '0');
        else
            cout << str[i];
    }
}