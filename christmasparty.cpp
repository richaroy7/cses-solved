 #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define mod 1000000007
    #define rep(i,a,n) for(long long i=a;i<n;i++)
    #define rrep(i,n,k) for(int i=n;i>=k;i--)
    #define yes cout<<"YES"<<endl;
    #define no cout<<"NO"<<endl;
ll der(ll n)
{
    ll d[n+1];
    ll i;
    d[0]=0;
    d[1]=0;
    d[2]=1;
     
     for(i=3;i<=n;i++)
     {
        d[i]=((i-1)*(d[i-1]%mod+d[i-2]%mod)%mod);
     }
     return ((d[n])%mod);
}
    void solve()
    {
       long long n;
       cin>>n;
       cout<<der(n)<<endl;
       
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