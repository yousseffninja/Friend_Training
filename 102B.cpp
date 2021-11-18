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
 
int main(){
    IO();
    string str;
    cin >> str;
    int operations = 0;
    while(str.length() != 1){
        int sum = 0;
        for(auto c : str){
            sum += c - '0';
        }
        str = to_string(sum);
        operations++;
    }
    cout << operations << '\n';
}
