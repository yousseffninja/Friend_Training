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
    int count = 0;
    char point = 'a';
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        count += min(abs(point - s[i]),26 - abs(point - s[i]));
        point = s[i];
    }
    cout << count;
}
