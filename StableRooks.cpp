// https://codeforces.com/problemset/problem/1621/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int z;
        if(n%2 == 0){
            z=n/2;
        }
        else {
            z = n/2 + 1;
        }
        if(k>z) cout<<"-1\n";
        else {
            int p=0;
            for(int i=n; i>0; i--){
                for(int j=1; j<=n; j++){
                    if(j == (n-2*p) && i == j){
                        cout<<"R";
                        ++p;
                        if(p==k){
                            p--;
                        }
                    }
                    else cout<<".";
                }
                cout<<"\n";
            }
        }
    }

}