// https://codeforces.com/problemset/problem/996/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int n;
    cin>>n;
    int cnt=0;
    cnt+=n/100;
    n=n%100;
    cnt+= n/20;
    n=n%20;
    cnt+=n/10;
    n=n%10;
    cnt+=n/5;
    n=n%5;
    cnt+=n;
    cout<<cnt;
}