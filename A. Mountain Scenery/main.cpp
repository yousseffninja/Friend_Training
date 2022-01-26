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
    int n, k;
    cin >> n >> k;
    int arr[2 * n + 1];
    int s = sizeof(arr);

    for(int & i : arr)
        cin >> i;
    
    cout << arr[0] << ' ';
    rep(i, 1, 2*n) {
        if(arr[i] - 1 > arr[i-1] and arr[i] - 1 > arr[i+1] && k > 0)
            arr[i]--, k--;
        cout << arr[i] << ' ';
    }
    cout << arr[2 * n];
}