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
    string str;
    getline(cin, str);
    set<char> s;
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'a' and str[i] <= 'z') s.insert(str[i]);
    }
    cout << s.size();
}