 #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define mod 1000000007
    #define rep(i,a,n) for(long long i=a;i<n;i++)
    #define rrep(i,n,k) for(int i=n;i>=k;i--)
    #define yes cout<<"YES"<<endl;
    #define no cout<<"NO"<<endl;
    ll pw(ll a,ll b,ll m)
    {
        ll ans=1;
        while(b>0)
        {
            if(b&1)
            ans=(ans*a)%m;
            
            b/=2;
            a=(a*a)%m;
        }
        
        return ans%m;
    }
    void solve()
    {
        ll a,b,c;
        cin>>a>>b>>c;
        cout<<pw(a,pw(b,c,mod-1),mod)<<endl;
    }
    int main() {
     
       ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
        ll test=1;
        cin>>test;
        while(test--)
        {
         solve();
        }
        return 0;
    }