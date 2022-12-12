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
        ll n,m,k;
        cin>>n>>m>>k;
        ll a[n];
        ll b[m];
        rep(i,0,n)
        cin>>a[i];
        rep(i,0,m)
        cin>>b[i];
        sort(a,a+n);
        sort(b,b+m);
        ll i=0,j=0;
        ll ans=0;
        while(i<n && j<m)
        {
            if(abs(a[i]-b[j])<=k)
            {
                ans++;
                i++;
                j++;
            }
            else if((b[j]<a[i]))
            {
                j++;
            }
            else
            {
                i++;
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