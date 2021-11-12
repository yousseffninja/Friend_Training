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
    int n, h;
    cin >> n >> h;
    int count = 0;
    while(n--){
        int x;
        cin >> x;
        if(x <= h)   count ++;
        else count += 2;
    }
    cout << count;
}
