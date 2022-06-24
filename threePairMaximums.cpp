// https://codeforces.com/problemset/problem/1385/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int x, y, z;
        cout<<"\n";
        cin>>x>>y>>z;
        int a, b, c;
        a=min(x,y);
        b=min(x,z);
        c=min(y,z);
        if(x==y && y==z){
            cout<<"\nYES\n"<<a<<" "<<b<<" "<<c;
        }
        else if(a==b && b==c){
            cout<<"\nNO";
        }
        else if(x==y && b==c){
            cout<<"\nYES\n"<<a<<" "<<b<<" "<<c;
        }
        else if(y==z && a==b){
            cout<<"\nYES\n"<<a<<" "<<b<<" "<<c;
        }
        else if(x==z && a==c){
            cout<<"\nYES\n"<<a<<" "<<b<<" "<<c;
        }
        else{
            cout<<"\nNO";
        }
        
    }
}