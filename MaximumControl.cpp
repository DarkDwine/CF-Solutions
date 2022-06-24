// https://codeforces.com/problemset/problem/958/B1

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int n;
    cin>>n;
    int arr[n+1] = {};
    int a, b;
    for(int i=1; i<n; i++){
        cin>>a>>b;
        arr[a]++;
        arr[b]++;
    }

    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(arr[i]<=1) cnt++;
    }
    cout<<cnt;
}