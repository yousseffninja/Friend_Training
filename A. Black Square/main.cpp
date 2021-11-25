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
    vi arr(4);
    for(int i = 0; i < 4; i++)  cin >> arr[i];
    string s;
    cin >> s;
    for(char& i : s)    count += arr[(int)(i) - '1'];
    cout << count;
}