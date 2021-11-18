#include<bits/stdc++.h>
 
using namespace std;
#define F first
#define S secound
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(x) x.begin(), x.end()
 
void IO(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
 
string convertToString(char* a, int size){
    string s = a;
    return s;
}
 
int main(){
    IO();
    int n;
    string s;
    cin >> n >> s;
    string result = "";
    if(n % 2 != 0){
        for(int i = n - 2; i >= 1; i -=2){
            result += s[i];
        }
        for(int i = 0; i < n; i+=2){
            result += s[i];
        }
    }
    else{
        for(int i = n - 2; i >= 0; i -=2){
            result += s[i];
        }
        for(int i = 1; i < n; i+=2){
            result += s[i];
        }
    }
    cout << result << '\n';
}
