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

int main() {
    IO();
    string a, b;
    cin >> a >> b;
    int n = a.length();
    for(int i = 0; i < n; i++){
        char x = a[i], y = b[i];
        if(isupper(x))  x = tolower(x);
        if(isupper(y))  y = tolower(y);
        if(x == y)  continue;
        if(x > y){
            cout << "1";
            return 0;
        }
        if(x < y){
            cout << "-1";
            return 0;
        }
    }
    cout << "0";
}
