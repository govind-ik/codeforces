#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define vr(a,b) vector<a>b
#define el endl
#define pyes cout<<"YES"<<el
#define pno cout<<"NO"<<el
#define fo(i,a, b) for (int i = a; i < b; i++)
#define all(v) begin(v),end(v)
 
const int MOD = (1e9) + 7;
const int INF = INT_MAX;
const int INM = INT_MIN;
#define fastio ios::sync_with_stdio(false); cin.tie(0);
 
signed main()
{
    fastio;
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--)
    {
        //vr(int ,v);
        int n,k;
        cin>>n>>k;
        map<char,int>m;
        string s;
        cin>>s;
        if(n-k==1)
        {
            pyes;
        }
        else{
            for(char &i:s)
            {
                m[i]++;
            }
            int sum=0;
            for(auto &it:m)
            {
                //cout<<it.first<<el;
                if((it.second%2))
                {
                    sum+=(it.second%2);
                }
            }
          // cout<<sum;
           if(sum>k+1)
           {
            pno;
           }
            else{
                pyes;
            }
        }

        
    }
}

    

    
        
    
    

    
