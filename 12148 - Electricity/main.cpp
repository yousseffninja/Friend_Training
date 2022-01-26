#include<bits/stdc++.h>

int s[5];

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

bool leapYear(int Y){
    if(Y % 4 == 0 and (Y % 100 != 0
    || Y % 400 == 0))
        return 1;
    return 0;
}


bool test(int D, int M, int Y, int d, int m, int y){
    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(--d == 0){
        if(--m == 0){
            --y;
            m = 12;
        }
        d = arr[--m];
        if(m == 2 and leapYear(y))
            d = 29;
    }
    return D == d and M == m and y == Y;
}

int main(){
    IO();
    int n, D , M, Y, C, d = 0, m = 0, y = 0, c = 0;
    while(cin >> n, n){
        int sum = 0, count = 0;
        while(n--){
            cin >> D >> M >> Y >> C;
            if(test(d, m, y, D, M, Y)){
                sum += C - c; count++;
            }
            d = D; m = M; y = Y; c = C;
        }
        cout << count << " " << sum << endl;
    }
}