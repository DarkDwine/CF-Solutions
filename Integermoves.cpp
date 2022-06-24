#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int n;
    cin>>n;
    while(n--){
        int x, y;
        cin>>x>>y;
        if(x == y && y==0){
            cout<<"0\n";
            continue;
        }

        float s = x*x + y*y;

        int a = floor(sqrt(s));
        int b = ceil(sqrt(s));

        if(a==b) cout<<"1\n";
        else cout<<"2\n";
    }
}