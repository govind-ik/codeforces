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
        int a,b,n;
        cin>>a>>b>>n;
        vr(int,v(n));
        for(int &i:v)
        {
            cin>>i;
        }
        int time=0;
        sort(all(v));
        //int z=min({v[0]+b,a});
        time=b-1;
        fo(i,0,n)
        {
            int u=min({(v[i]+1),a});
            time+=(u-1);
        }
        cout<<time+1<<el;


        

        
    }
}

    

    
        
    
    

    

