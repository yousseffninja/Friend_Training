#include<bits/stdc++.h>

using namespace std;
#define F first
#define S second
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>

void IO(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    IO();
    //freopen("diamond.in", "r", stdin);
    //freopen("diamond.out", "w", stdout);
    int n, count = 0;
    cin >> n;
    while(n--){
        int a, b , c;
        cin >> a >> b >>c;
        if(a + b + c > 1)   count++;
    }
    cout << count;
}