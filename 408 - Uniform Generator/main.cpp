#include<bits/stdc++.h>

using namespace std;
#define F first
#define S second
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>

void IO(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int LCM(int n, int k){
    return (n * k)/GCD(n, k);
}

int GCD(int n, int k){
    if(k == 0)  
        return n;
    return (k, n % k);
}

int main() {
    int x, y;
    
    while (scanf("%d%d", &x, &y) == 2)
        printf("%10d%10d    %s\n\n", x, y, GCD(x, y) == 1 ? "Good Choice" : "Bad Choice");
    
}