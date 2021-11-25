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
int main(){
    IO();
    int n, m;
    int birds[102];
    cin >> n;
    for(int i = 1; i <= n; i++)  cin >> birds[i];
    cin >> m;
    while(m--){
        int x, y;
        cin >> x >> y;
        birds[x - 1] += y - 1;
        birds[x + 1] += birds[x] - y;
        birds[x] = 0;
    }
    for(int i = 1; i <= n; i++) cout << birds[i] << endl;
}