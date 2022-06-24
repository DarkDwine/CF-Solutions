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
        long long B, x, y;
        cin>>n>>B>>x>>y;
        long long sum = 0;
        long long tmp = 0;
        
            for(int i=0; i<n; i++){
                if(tmp+x<=B) tmp = tmp+x;
                else tmp = tmp - y;
                sum+=tmp;
            }
        
        cout<<sum<<'\n';
    }
}