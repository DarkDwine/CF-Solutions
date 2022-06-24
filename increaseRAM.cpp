// https://codeforces.com/problemset/problem/1629/A

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int sum = k;
        vector<int> a1;
        vector<int> a2;
        int a;
        for(int j=0; j<n; j++){
            cin>>a;
            a1.push_back(a);
        }

        for(int j=0; j<n; j++){
            cin>>a;
            a2.push_back(a);
        }

        vector<pair<int, int>> arr;

        for(int i = 0; i<n; i++){
            arr.push_back(make_pair( a1[i], a2[i]));
        }
        sort(arr.begin(), arr.end());
        for(int l=0; l<n; l++){
            if(sum < arr[l].first){
                break;
            }
            else if(sum >= arr[l].first){
                sum += arr[l].second;
            }
        }
        cout<<sum<<"\n";
    }
}
