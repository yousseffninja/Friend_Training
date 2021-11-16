#include<bits/stdc++.h>

using namespace std;
#define F first
#define S second
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(x) x.begin(), x.end()

void IO(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main(){
    IO();
    int k, r;
    cin >> k >> r;
    int sum = 1, count = 0;
    bool flag = true;
    while(flag){
        count++;
        sum = k * count;
        if(sum % 10 == 0 || sum % 10 == r){
            flag = false;
        }
    }
    cout << count << '\n';
}
