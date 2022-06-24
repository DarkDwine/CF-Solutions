// https://codeforces.com/contest/721/problem/B

#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0 && cin.tie(0) && cout.tie(0));

string ans;
int cnt;
int morro, lesso;
void sort(string s[], int n)
{
    for(int i=0; i<n; i++){
        if(s[i].length() < ans.length()){
            lesso++;
        }
        else if(s[i].length() == ans.length()){
            cnt++;
        }
        else if(s[i].length() > ans.length()){
            morro++;
        }
    }
}

int main()
{
    fastIO;
    int n, k;
    cin>>n>>k;
    string s[n];
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    
    cin>>ans;
    sort(s, n);

    int bestcase = 0;
    int worstcase = 0;

    bestcase = (lesso/k)*5 + lesso + 1;
    worstcase = ((n-morro-1)/k)*5 + n - morro;

    cout<<bestcase<<' '<<worstcase;
}









// void sort(string s[], int n)
// {
//     for (int i=1 ;i<n; i++)
//     {
//         string temp = s[i];
 
//         // Insert s[j] at its correct position
//         int j = i - 1;
//         while (j >= 0 && temp.length() < s[j].length())
//         {
//             s[j+1] = s[j];
//             j--;
//         }
//         s[j+1] = temp;
//     }
// }