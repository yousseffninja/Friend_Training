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
    int n;
    cin >> n;
    int arr[n];
    rep(i, 0, n)
        cin >> arr[i];
    if(n == 2){
        cout << abs(arr[0] - arr[1]) << ' ' << abs(arr[0] - arr[1]) << endl;
        cout << abs(arr[0] - arr[1]) << ' ' << abs(arr[0] - arr[1]) << endl;
    }
    else{
        rep(i, 0, n){
            ll maxu = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n - 1]));

            ll minu;
            if(i == 0)
                minu = abs(arr[0] - arr[1]);
            else if(i == n - 1)
                minu = abs(arr[n - 1] - arr[n - 2]);
            else
                minu = min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1] ));
            
            cout << minu << ' ' << maxu << endl;
        }
    }
}
