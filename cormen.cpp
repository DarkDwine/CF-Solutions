// https://codeforces.com/problemset/problem/732/B

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int n, k;
    cin>>n>>k;
    int a[n];
    int b[n];
    for(int i = 0; i<n; i++) cin>>a[i];
    int beg = a[0];
    b[0] = a[0];
    int walks = 0;
    int diff = k-beg;
    for(int i = 1; i<n; i++){
        if(a[i]>=diff){
            diff = k - a[i];
            b[i] = a[i];
        }
        else{
            walks += diff - a[i];
            b[i] = diff;
            diff = k - diff;
        }
    }

    cout<<walks<<'\n';
    for( int j = 0; j< n; j++) cout<<b[j]<<' ';

}