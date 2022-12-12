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
        map<ll,ll>m;
        map<ll,vector<ll>>mp;
        rep(i,0,n)
        {
            cin>>a[i];
            if(m[x-a[i]]>0)
            {
                cout<<(mp[x-a[i]][0]+1)<<" "<<(i+1)<<endl;
                return;
            }
            else
            {
                m[a[i]]++;
                mp[a[i]].push_back(i);
            }
            
        }
        cout<<"IMPOSSIBLE"<<endl;
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