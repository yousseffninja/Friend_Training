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
    int n, x,count = 1;
    cin >> n >> x;
    n--;
    while(n--){
        int y;
        cin >> y;
        if(x == y){}
        else{
            x = y;
            count++;
        }
    }
    cout << count;
}