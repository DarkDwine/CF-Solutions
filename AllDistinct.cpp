// https://codeforces.com/contest/1692/problem/B

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int, int> a;
        int x[n];
        for(int i = 0; i<n; i++){
            cin>>x[i];
            a[x[i]]++;
        }
        sort(x, x+n);
        int cnt = 0;

        for(int i = 0; i<n; i++){
            cnt+=(a[x[i]]-1);
            i+= a[x[i]]-1;
        }
        n=n-(ceil(cnt/2.0))*2;
        cout<<n<<'\n';
    }
}