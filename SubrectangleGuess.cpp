// https://codeforces.com/contest/1695/problem/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        long long arr[n][m];
        long long maxi = -1 * (1e9 + 1);
        int p = 0, q= 0;
        for(int i = 0; i< n; i++){
            for(int j =0; j<m; j++){
                cin>>arr[i][j];
                maxi = max(maxi, arr[i][j]);
                if(maxi == arr[i][j]){
                    p = i;
                    q = j;
                }
            }
        }
        p++, q++;
        int h = 0, w = 0;
        if(n%2 == 1){
            h = n/2 + 1;
            if(h!=p) h += abs(h-p); 
        }

        else {
            int te = min(p, n-p+1)-1;
            h = n - te;
        }
        
        if(m%2 == 1){
            w = m/2 + 1;
            if(w!=q) w += abs(w-q); 
        }

        else {
            int te = min(q, m-q+1)-1;
            w = m - te;
        }

        cout<<h*w<<'\n';
    }
}