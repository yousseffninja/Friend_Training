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
    int n, b, d, count = 0, waste = 0;
    cin >> n >> b >> d;
    vi arr(n);
    for(int i = 0; i < n; i++)  cin >> arr[i];
    for(int& x : arr){
        if(x > b) continue;
        waste += x;
        if(waste > d){
            count++;
            waste = 0;
        }
    }
    cout << count ;
}
