// https://codeforces.com/problemset/problem/4/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    // int w;
    // cin>>w;
    // if(w>3){
    //     if(w%2==0){
    //         cout<<"YES";
    //     }
    //     else{
    //     cout<<"NO";
    //     }
    // }
    // else{
    //     cout<<"NO";
    // }
    int a = 5, b = 8;
    auto l = [&](int x){
        a+=x;
        b+=x;
    };
    l(5);
    cout<<a<<b;
}