#include<bits/stdc++.h>

using namespace std;
#define F first
#define S second
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define rep(i, a, n) for(size_t i = a; i < n; i++)
#define sz(str) str.size()

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
    int n, s = 0, t = 0;
    string str;
    cin >> n >> str;
    
    for(int i = 0; i < n; i++){
        if(str[i] != '.'){
            s = i;
            break;
        }
    }
    for(int i = n - 1; i >= 0; --i){
        if(str[i] != '.'){
            t = i;
            break;
        }
    }

    if(str[s] == 'R' and str[t] == 'R'){
        s++;
        t += 2;
        cout << s << ' ' << t;
    }

    else if(str[s] == 'L' and str[t] == 'L'){
        t++;
        cout << t << ' ' << s;
    }
    
    else{
        for(int i = s; i < n; i++){
            if(str[i] == 'L'){
                t = i;
                s++;
                cout << s << ' ' << t;
                return 0;
            }
        }
    }
}
