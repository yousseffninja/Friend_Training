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
    int  Y, W, result;
    cin >> Y >> W ;
    int maximum = max(Y,W);
    if(maximum == 1) cout << "1/1\n";
    else if(maximum == 2)   cout << "5/6\n";
    else if(maximum == 3)   cout << "2/3\n";
    else if(maximum == 4)   cout << "1/2\n";
    else if(maximum == 5)   cout << "1/3\n";
    else if(maximum == 6)   cout << "1/6\n";
}
