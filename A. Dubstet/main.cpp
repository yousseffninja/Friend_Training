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
    bool flag = 1;
    cin >> str;

    rep(i, 0, sz(str)){
        if(str[i] == 'W' and str[i + 1] == 'U' and str[i + 2] == 'B'){
            i += 2;
            if(!flag)
                cout << " ";
            continue;
        }
        else{
            flag = 0;
            cout << str[i];
        }
    }
}
