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
        ll n;ll k;
        cin>>n;
        multiset<ll>st;
        ll ans=0;
        rep(i,0,n)
        {
            cin>>k;
            auto it=st.upper_bound(k);
            if(it==st.end())
            {
                ans++;
                st.insert(k);
            }
            else
            {
                st.erase(it);
                st.insert(k);
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