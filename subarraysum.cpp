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
        ll n,x;
        cin>>n>>x;
        ll a[n];
        ll ps[n];
        map<ll,bool>m;
        rep(i,0,n)
        {
            cin>>a[i];
            if(i==0)
            ps[i]=a[i];
            else
            ps[i]=ps[i-1]+a[i];
            
            m[ps[i]]=true;
            
        }
        ll ans=0;
        m[0]=true;
        for(auto i:m)
        {
           if(m[(i.first-x)]==true)
           ans++;
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