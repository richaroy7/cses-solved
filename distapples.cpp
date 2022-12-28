 #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define mod 1000000007
    #define rep(i,a,n) for(long long i=a;i<n;i++)
    #define rrep(i,n,k) for(int i=n;i>=k;i--)
    #define yes cout<<"YES"<<endl;
    #define no cout<<"NO"<<endl;
ll modexpo(ll b, ll ex)
{
    if(ex==0)
    return 1;
    ll res=modexpo(b,ex/2);
    res=(res*res)%mod;
    if(ex&1)
    return (res*b)%mod;
    else
    return res;
}
 
    void solve()
    {
       
        ll n,a;
        cin>>n>>a;
        vector<ll>fact(n+a);//bcs need till a+n-1
        fact[0]=1;
        for(ll i=1;i<n+a+1;i++)
        fact[i]=(i*fact[i-1])%mod;
        //(a+n-1)C(n-1)
        //fact(a+n-1)/fact(n-1)*fact(a)%mod
        
        //(1/fact(x))%mod==pow(fact(x),mod-2)%mod
        cout<<(((fact[a+n-1]*modexpo(fact[n-1],mod-2))%mod)*modexpo(fact[a],mod-2))%mod;
        
       
        
        
    
        
        
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