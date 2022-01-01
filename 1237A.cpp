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
    int n, x, count = 0;
    cin >> n;
    while(n--){
        cin >> x;
        if(x % 2 == 0)
            cout << x / 2 << '\n';
        else{
            if(a < 0){
                if(cout > 0){
                    count--;
                    cout << (x / 2) - 1 << '\n';
                }
                else{
                    count++;
                    cout << x / 2 << '\n';
                }
            }
            else{
                if(x == 0){
                    count++;
                    cout << (x / 2) + 1 << '\n';
                }
                else{
                    count--;
                    cout << x / 2 << '\n';
                }
            }
        }
    }
}
