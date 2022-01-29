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
    int n, k;
    double sum = 0.0, x0, y0, x, y;
    scanf("%d %d %lf %lf", &n, &k, &x0, &y0);

    while(--n){
        scanf("%lf %lf", &x, &y);
        sum += sqrt(pow(y - y0, 2) + pow(x - x0, 2));
        x0 = x;
        y0 = y;
    }
    printf("%0.9lf", sum * k / 50);
}
