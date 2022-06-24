// https://codeforces.com/problemset/problem/424/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int n;
    cin>>n;
    char ham[n];
    int stand =0, sit =0;
    int ans=0;
    for(int i=0; i<n; i++){
        cin>>ham[i];
        if(ham[i] == 'x'){
            if(sit==n/2) {
                ans++;
                ham[i] = 'X';
            }
            else sit++;
        }
        else if(ham[i]=='X'){
            if(stand == n/2){
                ans++;
                ham[i] = 'x';
            }
            else stand++;
        }
    }
    cout<<ans<<"\n";
    for(int i=0; i<n; i++){
        cout<<ham[i];
    }
}