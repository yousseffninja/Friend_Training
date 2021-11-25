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
    set<int> s;
    for(int i = 0; i < 4; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << 4 - s.size();
}