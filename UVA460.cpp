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
    int TC, xbr1, ybr1, xtl1, ytl1, xbr2, ybr2, xtl2, ytl2;
    scanf("%d", &TC);
    while(TC--){
        scanf("%d %d %d %d", &xbr1, &ybr1, &xtl1, &ytl1);
        scanf("%d %d %d %d", &xbr2, &ybr2, &xtl2, &ytl2);
        if(max(xbr1, xbr2) < min(xtl1, xtl2) && max(ybr1, ybr2) < min(ytl1, ytl2)) 
            printf("%d %d %d %d\n", max(xbr1, xbr2), max(ybr1, ybr2), min(xtl1, xtl2), min(ytl1, ytl2));
        else 
            puts("No Overlap");
        if(TC)
            puts("");
    }
}
