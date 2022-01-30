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

#define PI   3.141592653589793116

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

vector<ull> arr;

int BSF (int start, int end, int val) {
    while(start <= end) {
        int mid = start + (end - start)/2;
        if(arr[mid] < val)
            start = mid + 1;
        else
            end = mid - 1;

    }
    if(end < 0)
        return - 1;
    return end;
}
int BSL (int start, int end, int val){
    while(start <= end) {
        int mid = start + (end - start)/2;
        if(arr[mid] > val)
            end = mid - 1;
        else
            start = mid + 1;
    }
    if(start == arr.size())
        return -1;
    return start;
}

int main(){
    int n, q, x;
    pair<int, bool> res;
    scanf("%d", &n);
    rep(i, 0, n){
        scanf("%d", &x);
        arr.pb(x);
    }
    scanf("%d", &q);
    while(q--){
        scanf("%d", &x);
        int res1 = BSF(0, arr.size() - 1, x);
        int res2 = BSL(0, arr.size() - 1, x);
        if(res1 == -1)
            printf("X ");
        else
            printf("%d ", arr[res1]);
        if(res2 == -1)
            printf("X\n");
        else
            printf("%d\n", arr[res2]);
    }
}
