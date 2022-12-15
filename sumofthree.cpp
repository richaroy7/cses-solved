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
        ll x;
        cin>>x;
        vector<pair<ll,ll>>a(n);
        rep(i,0,n)
        {
            ll x;
            cin>>x;
            a[i]={x,i+1};
        }
        sort(a.begin(),a.end());
        for(ll i=0;i<n-2;i++)
        {
            
            ll l=i+1;
            ll r=n-1;
            while(l<r)
            {
                if((a[i].first+a[l].first+a[r].first)==x)
                {
                    cout<<a[i].second<<" "<<a[l].second<<" "<<a[r].second<<endl;
                    return;
                }
                else if((a[i].first+a[l].first+a[r].first)<x)
                l++;
                else
                r--;
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