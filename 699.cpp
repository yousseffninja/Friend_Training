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
    int n, mini = INT_MAX, index;
    scanf("%d", &n);
    char dir[n];
    int dis[n];
    bool flag = false;
    rep(i, 0, n)
        scanf(" %c", &dir[i]);
    rep(i, 0, n)
        scanf("%d", &dis[i]);
    rep(i, 0, n){
        if(dir[i] == 'L' and flag == 0)
            continue;
        else if(dir[i] == 'R' and (flag == 1 or flag == 0)){
            flag = 1;
            index = i;
        }
        else
            mini = min(mini, dis[i] - dis[index]);
    }
    if(mini == INT_MAX)
        printf("-1");
    else
        printf("%d", mini / 2);
}
