// https://codeforces.com/contest/1621/problem/B

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    const int A = 1e9 + 1;

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int l, r, c, minl=A, maxr =0, costl=A, costr=A, maxint=0, costmax=A, ans=A;
        for(int i=0; i<n; i++){
            
            cin>>l>>r>>c;

            if(minl>l){
                minl = l, costl=A;
            }
            if(minl == l){
                costl=min(costl, c);
            }

            if(maxr<r){
                maxr = r, costr=A;
            }
            if(maxr == r){
                costr=min(costr, c);
            }

            if(maxint< r-l+1){
                maxint = r-l+1, costmax=A;
            }
            if(maxint == r-l+1){
                costmax=min(costmax, c);
            }

            ans = costl + costr;

            if(maxint == maxr-minl+1){
                ans = min(ans, costmax);
            }

            cout<<ans<<"\n";
        }
    }

}