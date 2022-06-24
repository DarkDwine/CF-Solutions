#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    long long n, q, k;
    cin>>n>>q>>k;
    long long a[n];
    for( long long i = 0; i < n; i++){
        cin>>a[i];
    }
    while(q--){
        int l, r;
        cin>>l>>r;
        l--, r--;
        int cnt = 0;
        if(l==0) cnt = a[l] - 1;
        else cnt += a[l+1] - 1 - 1;
        l++;
        while(l!= r){
            cnt += a[l+1] - a[l-1] - 1;
        }
        cnt+= k - a[r-1]-1;
        cout<<cnt<<"\n";
    }
}