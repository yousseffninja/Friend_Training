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
int main(){
    IO();
    ll n, x, count = 0;
    cin >> n >> x;
    while(n--){
        char op;
        ll s;
        cin >> op >> s;
        if(op == '+')   x += s;
        else{
            if(s > x)   count++;
            else    x -= s;
        }
    }
    cout << x << " " << count;
}
