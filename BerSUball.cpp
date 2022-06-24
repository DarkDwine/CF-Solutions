// https://codeforces.com/problemset/problem/489/B

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int n;
    cin>>n;
    int boy[n];
    for(int i = 0; i<n; i++){
        cin>>boy[i];
    }
    sort(boy, boy+n);
    int m;
    cin>>m;
    int girl[m];
    for(int i = 0; i<m; i++){
        cin>>girl[i];
    }
    sort(girl, girl + m);
    int cnt = 0;
    int i = 0, j = 0;
    while(i<n && j<m){
        int diff = abs(boy[i] - girl[j]);
        if(diff <= 1){
            cnt++, i++, j++;
        }
        else if(girl[j] - boy[i] > 1) i++;
        else j++;
    }

    cout<<cnt;
}