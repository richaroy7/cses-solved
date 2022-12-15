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
        ll x=1;
        ll n;
        cin>>n;
        ll a[n];
        rep(i,0,n)
        cin>>a[i];
        sort(a,a+n);
        rep(i,0,n)
        {
            if(a[i]<=x)
            x+=a[i];
            else
            break;
        }
        cout<<x<<endl;
        
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