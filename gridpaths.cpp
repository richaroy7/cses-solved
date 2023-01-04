 #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define mod 1000000007
    #define rep(i,a,n) for(long long i=a;i<n;i++)
    #define rrep(i,n,k) for(int i=n;i>=k;i--)
    #define yes cout<<"YES"<<endl;
    #define no cout<<"NO"<<endl;
    ll binpow(ll x, ll y, ll p)
{
   ll res = 1;     
   x = x % p; 
   if (x == 0) return 0; 
    while (y > 0)
    {
        if (y & 1)
        res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
 
    void solve()
    {
       ll n;
       cin>>n;
       char a[n+1][n+1];
       for(ll i=1;i<=n;i++)
       {
           for(ll j=1;j<=n;j++)
           cin>>a[i][j];
       }

       if(a[1][1]=='*'|| a[n][n]=='*')
       {
        cout<<0<<endl;
        return;
       }
       ll dp[n+1][n+1];
       for(ll i=n;i>=1;i--)
       {
           for(ll j=n;j>=1;j--)
           {
               if(i==n && j==n && a[i][j]!='*')
               dp[i][j]=1;
               
               else
               {
                   if(a[i][j]=='*')
                   dp[i][j]=0;
                   else{
                   ll p1=0,p2=0;
                   if(j+1<=n)
                   p1=dp[i][j+1];
                   if(i+1<=n)
                   p2=dp[i+1][j];
                   dp[i][j]=(p1 +p2)%mod;
                   }
               }
           }
       }
       cout<<dp[1][1]<<endl;
        
    }
    int main() {
     
       ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
        ll test=1;
        //cin>>test;
        while(test--)
        {
         solve();
        }
        return 0;
    }