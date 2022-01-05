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
    char in[4][4];
    for(auto & i : in)
        for(char & j : i)
            cin >> j;
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int black = 0;
            if(in[i][j] == '#')
                black++;
            if(in[i][j+1] == '#')
                black++;
            if(in[i+1][j] == '#')
                black++;
            if(in[i+1][j+1] == '#')
                black++;
            if(black != 2) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}
