// https://codeforces.com/contest/1633/problem/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int div7(int n){
    if(n%7 == 0) return n;
    int p = n%7;
    int a = n;
    a = a/10;
    a = a%10;
    if(((n - p)/10)%10 == a) return n-p;
    if(((n - p + 7)/10)%10 == a) return n-p+7;
}
int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = div7(n);
        cout<<ans<<"\n";
    }
}