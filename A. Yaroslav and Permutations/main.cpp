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
    int n, max = 0;
    cin >> n;
    int arr[n];
    for(int & i : arr)
        cin >> i;

    rep(i, 0, n){
        int repait = 0;
        rep(j, 0, n){
            if(arr[i] == arr[j])
                repait++;
        }
        if(max < repait)
            max = repait;
    }

    if(n >= 2 * max - 1)
        cout << "YES";
    else
    cout << "NO";
}