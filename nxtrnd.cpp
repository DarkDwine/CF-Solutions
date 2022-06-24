// https://codeforces.com/problemset/problem/158/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int n, k;
    cin>>n>>k;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int j=0; j<n; j++){
        if(arr[j]>=arr[k-1] && arr[j]>0) cnt++;
    }
    cout<<cnt;
}