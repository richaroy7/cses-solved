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
        vector<ll>dp(n+1);
        dp[0]=0;
        for(ll i=1;i<=n;i++)
        {
            //so we try takin out every digit one at a time from n and our ans=min of those like min from the all the cases like takin out 1st digit or 2nd and so one
            ll mi=1e6+1;
            ll temp=i;
            while(temp>0)
            {
                ll di=(temp%10);
                temp/=10;
                if(di!=0)
                mi=min(mi,(1+dp[i-di]));
                
                
            }
            dp[i]=mi;
            
        }
        cout<<dp[n]<<endl;
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