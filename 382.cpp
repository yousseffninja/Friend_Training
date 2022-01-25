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
    string str, in;
    cin >> str >> in;
    int index = str.find('|');
    string str1 = str.substr(0, index);
    string str2 = str.substr(index + 1, sz(str));
    for(auto ch : in){
        if(sz(str1) <= sz(str2))    str1 += ch;
        else str2 += ch;
    }
    if(sz(str1) != sz(str2)){
        cout << "Impossible";
        return 0;
    }
    cout << str1 << '|' << str2;
}
