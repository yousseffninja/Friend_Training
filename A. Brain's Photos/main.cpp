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
    int n, m;
    bool flag = 1;
    cin >> n >> m;
    char arr[n][m];

    rep(i, 0, n)
        rep(j, 0, m){
            cin >> arr[i][j];
            if(arr[i][j] != 'B' and arr[i][j] != 'W' and arr[i][j] != 'G') 
                flag = 0;
        }
    
    if(flag)
        cout << "#Black&White";
    else    
        cout << "#Color";
}