// https://codeforces.com/contest/1631/problem/A

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
        vector<int> a, b;
        int inp=0;
        for(int i=0; i<n; i++){
            cin>>inp;
            a.push_back(inp);
        }
        for(int i=0; i<n; i++){
            cin>>inp;
            b.push_back(inp);
        }
        int m1 = *max_element(a.begin(), a.end());
        int m2 = *max_element(b.begin(), b.end());

        vector<int>::iterator itr1 = find(a.begin(), a.end(), m1);
        int i = distance(a.begin(), itr1);

        vector<int>::iterator itr2 = find(b.begin(), b.end(), m2);
        int j = distance(b.begin(), itr2);

        int ans = 0;

        if(i == j){
            ans = m1*m2;
        }

        else if(m1 >= m2){
            
            while(m2 > a[j]){
                int temp = m2;
                b[j] = a[j];
                a[j] = temp;

                m2 = *max_element(b.begin(), b.end());
                vector<int>::iterator itrx = find(b.begin(), b.end(), m2);
                j = distance(b.begin(), itrx);
            }
            if(m2<=a[j]){
                ans = m1*m2;
            }
        }
        else if(m2 > m1){
            
            while(m1 > b[i]){
                int temp = m1;
                a[i] = b[i];
                b[i] = temp;

                m1 = *max_element(a.begin(), a.end());
                vector<int>::iterator itry = find(a.begin(), a.end(), m1);
                i = distance(a.begin(), itry);
            }
            if(m1<=b[i]){
                ans = m1*m2;
            }
        }

        cout<<ans<<"\n";
    }
}



        // if(i == j){
        //     ans = m1*m2;
        // }
        // else if(m1 >= m2){
        //     int c1 = b[i];
        //     if(c[n] == c1) ans = m1*c1;
        //     else{
        //         int c2 = *max_element(c.begin(), c.begin() + n);
        //         ans = m1*c2;
        //     }
        // }
        // else if(m2 > m1){
        //     int c3 = a[j];
        //     if(c[n] == c3) ans = m2*c3;
        //     else{
        //         int c4 = *max_element(c.begin(), c.begin() + n);
        //         ans = m1*c4;
        //     }
        // }
        // cout<<ans<<"\n";