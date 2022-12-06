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
        ll ans=0;
        ll a[n];
        rep(i,0,n)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll i=0,j=n-1;
        while(i<=j)
        {
            if((a[i]+a[j])<=x)
            {
                ans++;
                i++;
                j--;
            }
            else
            {
                ans++;
                j--;
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