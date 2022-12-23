 #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define mod 1000000007
    #define rep(i,a,n) for(long long i=a;i<n;i++)
    #define rrep(i,n,k) for(int i=n;i>=k;i--)
    #define yes cout<<"YES"<<endl;
    #define no cout<<"NO"<<endl;
    void toh(ll n, ll frm, ll to,ll help,vector<pair<ll,ll>>&ans)
{
    if (n == 0) {
        return;
    }
    toh(n - 1, frm, help, to,ans);
    ans.push_back({frm,to});
    toh(n - 1, help, to, frm,ans);
}
    void solve()
    {
        ll n;
        cin>>n;
         vector<pair<ll,ll>>ans;
        toh(n,1,3,2,ans);
        cout<<ans.size()<<endl;
        for(auto i: ans)
        cout<<i.first<<" "<<i.second<<endl;
       
        
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