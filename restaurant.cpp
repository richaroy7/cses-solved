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
        vector<pair<ll,ll>>v;
        rep(i,0,n)
        {
            ll a,b;
            cin>>a>>b;
            v.push_back({a,1});
            v.push_back({b,2});
        }
        sort(v.begin(),v.end());
        ll mans=0;
        ll cans=0;
        rep(i,0,2*n)
        {
            if(v[i].second==1)
            {
                cans++;
                mans=max(mans,cans);
            }
            else
            {
                cans--;
            }
        }
        cout<<mans<<endl;
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