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

int main(){
    int n, x, f1, f2;
    scanf("%d %d", &n, &x);
    
    while(n--){
        scanf("%d %d", &f1, &f2);
        if(f1 == x or f1 == 7 - x or f2 == x or f2 == 7 - x or 7 - f1 == x or 7 - f1 == 7 - x or 7 - f2 == x or 7 - f2 == 7 - x){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}