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
        if(n==1)
        {
            cout<<1<<endl;
            return;
        }
        if(n<=3)
        {
            cout<<"NO SOLUTION"<<endl;
            return;
        }
        for(ll i=2;i<=n;i=i+2)
        {
            cout<<i<<" ";
        }
        for(ll i=1;i<=n;i=i+2)
        {
            cout<<i<<" ";
        }
        cout<<endl;
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