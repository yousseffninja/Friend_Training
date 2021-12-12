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
    int n, x, y;
    cin >> n;
    int arr[n];
    rep(i, 0, n){
        cin >> x >> y;
        if(x != y){
            cout << "rated";
            return 0;
        }
        arr[i] = x;
    }
    rep(i, 1 , n){
        if(arr[i] > arr[i - 1]){
            cout << "unrated";
            return 0;
        }
    }
    cout << "maybe";
}
