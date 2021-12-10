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
    int n, res = 0;
    cin >> n;
    vi arr(n);
    rep(i, 0, n)
        cin >> arr[i];
    sort(all(arr));
    
    rep(i, 0, n)
        if(arr[i] > arr[0] and arr[i] < arr[n-1])
            res++;
    
    cout << res;
}
