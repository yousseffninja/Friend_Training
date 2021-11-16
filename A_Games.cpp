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
    int n, count = 0;
    cin >> n;
    int arr1[n];
    int arr2[n];
    for(int i = 0; i < n; i++)  cin >> arr1[i] >> arr2[i];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr1[i] == arr2[j])  count++;
        }
    }
    cout << count;
}
