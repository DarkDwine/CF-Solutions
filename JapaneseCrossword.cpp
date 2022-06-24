// https://codeforces.com/contest/721/problem/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> b;
    int grp=0;
    
    for(int i=0; i<n; i++){
        int cnt=0;
        int chek = 0;
        while(s[i] == 'B' && i<n){
            cnt++;
            chek = 1;
            i++;
        }
        if(chek){
            grp++;
            b.push_back(cnt);
        }    
    }
    cout<<grp<<"\n";
    
    for(auto x : b){
        cout<<x<<' ';
    }
}