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
        int n;
        cin>>n;
        vr(int,v(n));
        for(int &i:v)
        {
            cin>>i;
        }
        vr(int ,v1);
        fo(i,0,n)
        {
            v1.pb(v[i]);
        }
        sort(all(v1));
        vr(int ,v2);
        fo(i,0,n)
        {
            v2.pb(abs(v[i]-v1[i]));
        }
        sort(all(v2));
        int x=0;
    //     fo(i,0,n)
    //     {
    //         if(v2[i]!=0)
    //         {
    //             x=v2[i];
    //             break;
    //         }
    //     }
    //    // cout<<x;
    //    // cout<<0%2<<el;
    //     bool flag=true;
        fo(i,0,n)
        {
            x=__gcd(x,v2[i]);
        }
        cout<<x<<el;
        
        
    }
}

    

    
        
    
    

    

