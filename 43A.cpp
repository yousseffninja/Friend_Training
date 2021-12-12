#include<bits/stdc++.h>

using namespace std;
#define F first
#define S second
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define rep(i, a, n) for(int i = a; i < n; i++)

void IO(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int GCD(int n, int k){
    if(k == 0)  
        return n;
    return (k, n % k);
}

int LCM(int n, int k){
    return (n * k)/GCD(n, k);
}

int main() {
    IO();
    int n, count1 = 1, count2 = 0;
    cin >> n;
    string str, str2, temp;
    cin >> str;
    n--;
    while(n--){
        cin >> temp;
        if(str == temp) count1++;
        else{ 
            count2++;
            str2 = temp;
        }
    }
    if(count1 >= count2)
        cout << str;
    else    cout << str2;
}
