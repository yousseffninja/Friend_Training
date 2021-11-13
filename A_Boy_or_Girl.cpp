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
    string str;
    set<char> s;
    cin >> str;
    int n = str.length();
    for(int i = 0; i < n; i++)  s.insert(str[i]);
    if(s.size() % 2 == 0)   cout << "CHAT WITH HER!";
    else    cout << "IGNORE HIM!";
}
