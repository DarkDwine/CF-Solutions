// https://codeforces.com/contest/1658/problem/D1

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int l, r;
        cin>>l>>r;
        int cnt[18][2];
        memset(cnt, 0, sizeof cnt);
        int x;
        for(int i = 0; i<r-l+1; i++){
            cin>>x;
            for(int j = 0; j<18; j++){
                cnt[j][x&1]++;
                x>>=1;
            }
        }

        int ans = 0;
        for(int i = 0; i<18; i++){
            ans |= ((cnt[i][0] < cnt[i][1]) * (1<<i));
        }

        cout<<ans<<'\n';
    }
}


// #include <bits/stdc++.h>
 
// using namespace std;
 
// #ifdef LOCAL
// #include "algo/debug.h"
// #else
// #define debug(...) 42
// #endif
 
// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//   int tt;
//   cin >> tt;
//   while (tt--) {
//     int l, r;
//     cin >> l >> r;
//     vector<int> cc(30);
//     for (int i = 0; i < r - l + 1; i++) {
//       int x;
//       cin >> x;
//       for (int j = 0; j < 30; j++) {
//         cc[j] += (x >> j) & 1;
//       }
//     }
//     int ans = 0;
//     for (int i = 0; i < 30; i++) {
//       if (cc[i] > (r - l + 1) - cc[i]) {
//         ans += (1 << i);
//       }
//     }
//     cout << ans << '\n';
//   }
//   return 0;
// }