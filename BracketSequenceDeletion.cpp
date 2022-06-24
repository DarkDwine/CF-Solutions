// https://codeforces.com/contest/1657/problem/C

// #include <bits/stdc++.h>
// using namespace std;
// #define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

// signed main()
// {
//     fastIO;
//     int t;
//     cin>>t;
//     while(t--){
//         long long n;
//         cin>>n;
//         string s;
//         cin>>s;
//         int ans = 0;
//         int i = 0;
//         while(i<n-1){
// 		    if(s[i]=='(') i+=2,ans++;
//             else{
//                 int j=i+1;
//                 while(j<n&&s[j]=='(') j++;
//                 if(j==n) break;
//                 i=j+1;
//                 ans++; 
//             }
//         }
//         cout<<ans<<' '<< n-i <<'\n';
//     }
// }

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

signed main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 0;
        int i = 0;
        for(i = 0; i<n-1; ){
            if(s[i] == '(') i = i + 2, ans++;
            else{
                int j = i + 1;
                while(s[j] == '(') j++;
                if(j == n) break;
                i = j + 1;
                ans ++;
            }
        }
        cout<<ans<<' '<< n-i<<'\n';
    }
}