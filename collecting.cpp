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
       ll ans=1;
       vector<ll>v(n);
       rep(i,0,n)
       cin>>v[i];
       map<ll,ll>m;
       rep(i,0,n)
       {
           if(m[v[i]+1]==1)
           {ans++;
           m[v[i]]=1;
           }
           else
           m[v[i]]=1;
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