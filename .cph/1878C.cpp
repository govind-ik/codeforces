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
        int n,k,c;
        cin>>n>>k>>c;
        int q=0;
        int x=1;
        q=(k*(k+1))/2;
        //cout<<q;
        //int y;
       vr(int ,v);
    //    fo(i,0,k)
    //    {
    //     v.pb(n-i);
    //    }
    //    int y=0;
    //    for(int &i:v)
    //    {
    //     y=y+i;
    //    }
       //out<<y;
       int d=(n*(n+1))/2;
        int h=((n-k)*(n-k+1))/2;
        int y=d-h;
        //cout<<y;
        if(q>c or y<c)
        {
            pno;
        }
        else{
            pyes;

        }
        

        
    }
}

    

    
        
    
    

    

