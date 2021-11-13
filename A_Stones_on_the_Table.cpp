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
    int a,c = 0;
    string b;
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        if (b[i] == b[i + 1]) {
            c++;
        }
    }
    cout << c;
}
