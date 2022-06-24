//https://codeforces.com/contest/798/problem/B

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int n;
    cin>>n;
    vector<string> s(n);
    for(int t = 0; t<n; t++) cin>>s[t];

    int siz = s[0].length();
    string subs = "";

    int steps = 1e9 + 1;

    string a = s[0];
    
    for(int p = 0; p<n; p++){
        if((s[p]+s[p]).find(a) == string::npos) steps = -1;
    }

    if(steps != -1){
        for(int i = 0; i<siz; i++){
                string stem = (s[0]+s[0]).substr(i, siz);
                int cnt = i;
                int k = 1;
                for(k = 1; k<n; k++){
                    size_t found = (s[k]+s[k]).find(stem);
                    if(found == string::npos) break;
                    else cnt += found;
                }

                if(k == n) steps = min(steps, cnt);
                else if(k!=n) break;
        }
    }
    cout<<steps;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

// int main()
// {
//     fastIO;
//     int n;
//     cin>>n;
//     vector<string> s(n);
//     for(int t = 0; t<n; t++) cin>>s[t];

//     int siz = s[0].length();
//     string subs = "";

//     int steps = 1e9 + 1;

//     string a = s[0];

//     for(int p = 0; p<n; p++){
//         if((s[p]+s[p]).find(a) == string::npos) steps = -1;
//     }

//     if(steps != -1){
//         for(int i = 0; i<siz; i++){
//                 string stem = (s[0]+s[0]).substr(i, siz);
//                 int cnt = i;
//                 int k = 1;
//                 for(k = 1; k<n; k++){
//                     size_t found = (s[k]+s[k]).find(stem);
//                     if(found == string::npos) break;
//                     else cnt += found;
//                 }

//                 if(k == n ){
//                     steps = min(steps, cnt);
//                 }
//                 else if(k!=n) break;
//         }
//     }
//     cout<<steps;
// }