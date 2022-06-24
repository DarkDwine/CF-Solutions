#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int n;
    cin>>n;
    if(n<=3){
        int ans=0;
        ans=n-2+n;
        cout<<ans;
    }
    else{
        int ans = (n-2)*3;
        cout<<ans;
    }
        
}