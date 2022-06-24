// https://codeforces.com/problemset/problem/961/B

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int n,k;
    cin>>n>>k;
    int a[n];
    int t[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int theorems=0;

    for(int i=0; i<n; i++){
        cin>>t[i];
        if(t[i]){
            theorems +=a[i];
            a[i] = 0;
        }
    }

    int s1=0;

    int sol[n] = {};

    for(int i = 0; i<n; i++){
        s1 = s1 + a[i];
        if(i<k-1) sol[i] = a[i];
        else if(i == k-1) sol[i]=s1;
        else if(i>=k){
            sol[i] = s1 - a[i-k];
            s1 = s1 - a[i-k];
        }
    }

    s1 = *max_element(sol, sol + n);

    cout<<theorems + s1;
}