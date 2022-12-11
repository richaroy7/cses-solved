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
        ll n,m;
        cin>>n>>m;
        // vector<ll>v(n);
        multiset<ll>v;ll x;
        rep(i,0,n)
        {
            
            cin>>x;
            v.insert(x);
        }
        ll val;
        // map<ll,ll>id;
        rep(i,0,m)
        {
            
            cin>>val;
          
            // vector<int>:: iterator it;
            auto it=v.upper_bound(val);
            if(it!=v.begin())
            {it--;
             cout<<(*it)<<endl;
            v.erase(it);
            }
            else
            cout<<-1<<endl;
            
            
        }
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