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
    string str1, str2;
    while(cin >> str1){
        cin >>str2;
        reverse(all(str1));
        reverse(all(str2));
        int arr[600];
        memset(arr, 0, sizeof(arr));
        for(int i = 0; i < str1.length(); i++)
            for(int j = 0; j < str2.length(); j++)
                arr[i + j] += (str1[i] - '0') * (str2[j] - '0');
        for(int i = 0; i < 599; i++){
            arr[i + 1] += arr[i] / 10;
            arr[i] %= 10;
        }
        int suii = 599;
        while(suii > 0 and arr[suii] == 0) suii--;
        for(; suii >= 0; suii--)
            cout << arr[suii];
        cout << endl;
    }
}
