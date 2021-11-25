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
    int x;
    while(cin >> x and x != 0){
        int sqr = sqrt(x);
        if(sqr * sqr == x){
            if(x % 2 == 0)  
                cout << "no" << endl;
            else
                cout << "yes" << endl;
        }
        else{
            if(x % 2 == 0)  
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }
}