#include<bits/stdc++.h>

using namespace std;

bool vis[27];

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

bool check() {
	for( int i = 0 ; i < 26 ; ++i ) 
		if( !vis[i] ) 
			return false ;
	return true ;
}

int main() {
    IO();
    int n;
    string s;
    cin >> n >> s;
    for( int i = 0 ; i < n ; ++i ) 
		if( s[i] >= 'a' && s[i] <= 'z' ) 
		    vis[ s[i] - 'a' ] = true ;
		else if( s[i] >= 'A' && s[i] <= 'Z' ) 
		    vis[ s[i] - 'A' ] = true ;
	
	if(check()) cout << "YES" << endl; 
	else cout << "NO" << endl ;

    
}
