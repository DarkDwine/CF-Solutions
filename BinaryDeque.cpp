// https://codeforces.com/contest/1692/problem/E

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

void solve(int a[], int n, int s){
    int ans = n+1;
    int curr = 0;
    for(int i = 0, j = 0; i<n; i++){
        while(j<n && curr + a[j] <= s){
            curr+= a[j];
            j++;
        }
        if(curr == s){
            ans = min(ans, n - (j - i));
        }
        curr -= a[i];
    }
    if(ans>n) ans = -1;
    cout<<ans<<'\n';
}

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n, s;
        cin>>n>>s;
        int a[n];
        int sum =0;

        for(int i = 0; i<n; i++){
            cin>>a[i];
            sum += a[i];
        }
        
        if(sum<s){
            cout<<-1<<'\n';
            continue;
        }
        if(s == sum){
            cout<<0<<'\n';
            continue;
        }
        if(s<sum){
            solve(a, n, s);
            continue;
        }
    }
}