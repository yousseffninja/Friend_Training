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
    int n, count = 0, police = 0;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(x == -1){
            if(police == 0) count++;
            else police--;
        }
        else{
            police += x;
        }
    }
    cout << count;
}
