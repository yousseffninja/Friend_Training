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
int image[26][26];
int n;

bool DFS(int x, int y){
    if(!image[x][y]) return 0;
    image[x][y] = 0;
    for(int i = -1; i <= 1; i++)
        for(int j = -1; j <=  1; j++)
            if((i != 0 || j != 0) and (x + i >= 0 and x + i < n) and (y + j >= 0 and y + j < n))
                DFS(x + i, y + j);
    return 1;
}

int main() {
    int IMAGENUM = 1;   
    char c;
    while (cin >> n){
        char c;
        rep(i, 0, n)
            rep(j, 0, n){
                cin >> c;
                image[i][j]=(c - '0'); 
        }
        int res = 0;
        rep(i, 0, n)
            rep(j, 0, n)
                res += DFS(i, j);
        printf("Image number %d contains %d war eagles.\n", IMAGENUM++, res);
    }
}
