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
    int n, m, ans = 0;
    cin >> n >> m;

    for (int i = n + 1; i <= m; i++) {
        for (int j = 2; j <= i / 2; j++) {
            if(i % j == 0){
                ans++;
                break;
            }
        }
        if(ans == 0){
            if(i != m)
                cout << "NO";
            else
                cout << "YES";

            return 0;
        }
        ans = 0;
    }
    cout << "NO";
}
