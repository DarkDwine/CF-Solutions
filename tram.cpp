// https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int n;
    cin>>n;
    int cnt=0, chk=0;
    while(n--){
        int a, b;
        cin>>a>>b;          //a==exiting; b==entering
        cnt+=b-a;
        chk=max(chk, cnt);
    }
    cout<<chk;
}