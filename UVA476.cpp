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
#define zeros(x) memset(x,0,sizeof(x))

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

int main(){
    IO();
    char ch;
    int count = 1;
    vector<double> xtl;
    vector<double> ytl;
    vector<double> xbr;
    vector<double> ybr;
    double a, b, c, d, x, y;

    while(cin >> ch && ch == 'r'){
        cin >> a >> b >> c >> d;
        xtl.pb(a);
        ytl.pb(b);
        xbr.pb(c);
        ybr.pb(d);
    }
    
    while(cin >> x >> y && x != 9999.9 && y != 9999.9){
        bool flag = true;
        rep(i, 0, sz(xtl)){
            if(x > xtl[i] and x < xbr[i] and y > ybr[i] and y < ytl[i]){
                cout << "Point " << count << " is contained in figure " << i + 1 << endl;
                flag = false;
            }
        }
        if(flag)
            cout << "Point " << count << " is not contained in any figure\n";
        count++;
    }
}
