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
    string s , str;
    cin >> s >> str;
    int j = 0;
    for(int i = 0; i < str.length(); i++){
        if(j == str.length())   break;
        if(str[i] == s[j])  j++;
    }
    cout << j + 1;
}