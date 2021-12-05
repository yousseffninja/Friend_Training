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

    int TC;
    cin >> TC;
    while(TC--){
        int n, m, a, d, count = 0;
        cin >> n >> m >> a >> d;
        for(int i = n; i <= m; i++)
            if(i % a != 0 and i % (a + d) != 0 and i % (a + 2 * d) != 0 and i % (a + 3 * d) != 0 and i % (a + 4 * d) != 0)
                count ++;
        cout << count << endl;
    }
}
