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
        map<ll,ll>m;
        deque<ll>d;
        ll x;ll ans=0;
        rep(i,0,n)
        {
            cin>>x;
            if(m[x]>0)
            {
                ll sss=d.size();
                ans=max(ans,sss);
                if(d.size()>0)
                {
                    while(d.front()!=x)
                    {
                        ll y=d.front();
                        m[y]=0;
                        d.pop_front();
                    }
                    if(d.front()==x)
                    {
                        d.pop_front();
                        m[x]=0;
                    }
                }
            }
            d.push_back(x);
            m[x]=1;
            ll sss=d.size();
                ans=max(ans,sss);
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