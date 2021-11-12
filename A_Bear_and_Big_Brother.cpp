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
    int a, b, count = 0;
    cin >> a >> b;
    while(a <= b){
        a *= 3;
        b *= 2;
        count++;
    }
    cout << count;
}
