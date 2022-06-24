#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        long long hc, dc;
        cin>>hc>>dc;
        long long hm, dm;
        cin>>hm>>dm;
        long long k, w, a;
        cin>>k>>w>>a;
        int dchar, dmons;
        dmons = ceil(hm/dc);
        dchar = ceil(hc/dm);
        if(dchar>=dmons) cout<<"YES\n";
        else if(k>0){
            int z = dmons - dchar;
            int chk = 1;
            int dc1 = dc;
            int hc1 = hc;
            int dc2 = dc;
            int hc2 = hc;
            int k1 = k;
            int k2 = k;
            int k3 = k;
            while(chk && k){
                dc = dc + w;
                k--;
                if(ceil(hm/dc) <= dchar) chk = 0;
            }

            while(chk && k1){
                hc = hc + a;
                k1--;
                if(ceil(hc/dm) >= dmons) chk = 0;
            }

            while(chk && k2){
                dc1 = dc1 + w;
                k2--;
                if(k2>0){
                    hc1 = hc1 + a;
                    k2--;
                }
                if(ceil(hm/dc1)<= ceil(hc1/dm)) chk = 0;
            }

            while(chk && k3){
                hc2 = hc2 + a;
                k3--;
                if(k3>0){
                    dc2 = dc2 + w;
                    k3--;
                }
                if(ceil(hm/dc2)<= ceil(hc2/dm)) chk = 0;
            }

            if(chk == 1) cout<<"NO\n";
            if(chk == 0) cout<<"YES\n";

            // while(z){
            //     if(k){
            //         if(w>a){
            //             dc = dc + w;
            //             dmons = ceil(hm/dc);
            //             k--;
            //         }
            //         else if(a>w){
            //             hc = hc + a;
            //             dchar = ceil(hc/dm);
            //             k--;
            //         }
            //         else{
            //             if(dc >= dm){
            //                 hc = hc + a;
            //                 k--;
            //             }
            //             else{
            //                 dc = dc + w;
            //                 k--;
            //             }

            //         }
            //         int p = dmons - dchar;
            //         if(p<z) z = p;
            //         if(z<=0){
            //             cout<<"YES\n";
            //             break;
            //         }
            //     }
            //     else{
            //         cout<<"NO\n";
            //         break;
            //     }
            // }
        }
        else cout<<"NO\n";
    }
}