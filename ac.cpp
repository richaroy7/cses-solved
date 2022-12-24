 #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define mod 1000000007
    #define rep(i,a,n) for(long long i=a;i<n;i++)
    #define rrep(i,n,k) for(int i=n;i>=k;i--)
    #define yes cout<<"YES"<<endl;
    #define no cout<<"NO"<<endl;
    void solve()
    {
        ll n;
        cin>>n;
        ll ans=0;
        ll a[n];
        ll d[n];
        rep(i,0,n)
        {
            cin>>a[i];
            cin>>d[i];
            ans+=d[i];
            
        }
       
       sort(a,a+n);
       ll s=0;
       for(ll i=0;i<n;i++)
       {
           s+=a[i];
           ans-=s;
           
       }
       cout<<ans<<endl;
        
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