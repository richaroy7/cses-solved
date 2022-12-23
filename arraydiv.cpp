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
        ll k;
        cin>>k;
        ll a[n];
        ll mxans=0;
        ll mians=0;
        rep(i,0,n)
        {
            cin>>a[i];
            mians=max(mians,a[i]);
            mxans+=a[i];
        }
        ll hi=mxans;
        ll lo=mians;
        ll ans;
        while(lo<=hi)
        {
            ll mid=(lo+hi)/2;
            
            ll divs=0; ll tsum=0;
            for(ll i=0;i<n;i++)
            {
               if(a[i]>mid)
               break;
               else if(tsum+a[i]>mid)
               {
                   //one grp alr done , iss el se new grp;
                   divs++;
                   tsum=0;
                   
               }
               
               tsum+=a[i];
            }
        
             divs++;
             if(divs>k)
             lo=mid+1;
             else if(divs>k)
             hi=mid-1;
             else
             {
                 ans=mid;
                 hi=mid-1;
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