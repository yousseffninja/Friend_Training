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
    int n, count1 = 0, count2 = 0;
    bool flag = true;
    cin >> n;
    vi arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    int l = 0, r = n - 1;
    while(n--){
        int temp = 0;
        if(arr[r] > arr[l]){
            temp = arr[r];
            r--;
        }
        else{
            temp = arr[l];
            l++;
        }
        if(flag)    count1 += temp;
        else    count2 += temp;
        flag = !flag;
    }
    cout << count1 << " " << count2;
}
