// https://codeforces.com/problemset/problem/1033/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int n;
    cin>>n;
    int qx, qy;
    cin>>qx>>qy;
    
    int kx, ky;
    cin>>kx>>ky;
    
    int dx, dy;
    cin>>dx>>dy;

    if(kx<qx && qx<dx) cout<<"NO";
    else if(kx>qx && qx>dx) cout<<"NO";
    else if(ky>qy && qy>dy) cout<<"NO";
    else if(ky<qy && qy<dy) cout<<"NO";
    else cout<<"YES";
}