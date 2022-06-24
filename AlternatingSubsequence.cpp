// https://codeforces.com/contest/1343/problem/C

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
        cin>>n;
        long long arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        int k = arr[0]/abs(arr[0]);
        long long sum = 0;
        long long numn = (1e9 + 1) * (-1);
        for(int i = 0; i<n; i++){
            
            if(k == -1){
                long long neg = max(numn, arr[i]);
                while(arr[i] <= -1 && i < n){
                    neg = max(neg, arr[i]);
                    i++;
                }
                k = k * -1;
                sum = sum + neg;
            }

            else if(k == 1){
                long long pos = max(numn, arr[i]);
                while(arr[i] >= 1 && i < n){
                    pos = max(pos, arr[i]);
                    i++;
                }
                k = k * -1;
                sum = sum + pos;
            }
            i--;
        }
        cout<<sum<<'\n';
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// 	auto sgn = [&](int x) {
// 		if (x > 0) return 1;
// 		else return -1;
// 	};

// 	int t;
// 	cin >> t;
// 	while (t--) {
// 		int n;
// 		cin >> n;
// 		vector<int> a(n);
// 		for (auto &it : a) cin >> it;
// 		long long sum = 0;
// 		for (int i = 0; i < n; ++i) {
// 			int cur = a[i];
// 			int j = i;
// 			while (j < n && sgn(a[i]) == sgn(a[j])) {
// 				cur = max(cur, a[j]);
// 				++j;
// 			}
// 			sum += cur;
// 			i = j - 1;
// 		}
// 		cout << sum << endl;
// 	}
// 	return 0;
// }