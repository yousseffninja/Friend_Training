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
int main(){
    IO();
    string str;
    cin >> str;
    vector<char> arr;
    vector<char> op;
    if(str.length() == 1)   cout << str;
    else{
        for(int i = 0; i < str.length(); i++){
            if(isdigit(str[i])) arr.pb(str[i]);
        }
        sort(all(arr));
        cout << arr[0];
        for(int i = 1; i < arr.size(); i++)
            cout << '+' << arr[i];
    }
}