 #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define mod 1000000007
    #define rep(i,a,n) for(long long i=a;i<n;i++)
    #define rrep(i,n,k) for(int i=n;i>=k;i--)
    #define yes cout<<"YES"<<endl;
    #define no cout<<"NO"<<endl;
    bool cmp1(pair<ll,ll>a,pair<ll,ll>b)
    {
     if(a.second<b.second)
     return true;
     else if(a.second==b.second)
     {
         if(a.first>b.first)
         return true;
         else
         return false;
     }
     else
     return false;
    }
 
    void solve()
    {
       ll n;
       cin>>n;
       vector<pair<ll,ll>>v(n);
       rep(i,0,n)
       {
           ll a,b;
           cin>>a>>b;
           v[i]=make_pair(a,b);
       }
       sort(v.begin(),v.end(),cmp1);
       
    //   rep(i,0,n)
    //   cout<<v[i].first<<" "<<v[i].second;
    //   cout<<endl;
    ll ans=1;
   
    ll ce=v[0].second;
    for(ll i=1;i<n;i++)
    {
        if(v[i].first>=ce)
        {
            ans++;
            ce=v[i].second;
        }
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