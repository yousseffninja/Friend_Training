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
    int n;
    string str;
    cin >> n;
    char arr[n][n];
    rep(i, 0, n)
        cin >> arr[i];
    if(arr[0][0] == arr[0][1]){
        cout << "NO";
        return 0;
    }
    rep(i, 0, n){
        rep(j, 0, n){
            if(i == j or i + j == n - 1){
                if(arr[i][j] != arr[0][0]){
                    cout << "NO";
                    return 0;
                }
            }
            else if(arr[i][j] != arr[0][1]){
                    cout << "NO";
                    return 0;
                }
        }
    }
    cout << "YES";
}
