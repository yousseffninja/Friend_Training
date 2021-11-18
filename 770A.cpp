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
    int x, y;
    cin >> x >> y;
    int j = 0;
    for(int i = 0; i < x; i++){
        if(j == y)  j = 0;
        cout << ((char)('a' + j));
        j++;
    }
}
