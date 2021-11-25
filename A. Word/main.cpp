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
    string str, res = "";
    int up = 0, low = 0;
    cin >> str;
    int n = str.length();
    for(int i = 0; i < n; i++){
        if(islower(str[i])) low++;
        else up++;
    }
    if(low >= up){
        for(int i = 0; i < n; i++)  res += tolower(str[i]);
    }
    else    for(int i = 0; i < n; i++)  res += toupper(str[i]);
    cout << res;
}