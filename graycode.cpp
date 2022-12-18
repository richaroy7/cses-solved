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
        vector<string>ans;
        ans.push_back("0");
        ans.push_back("1");
      for(ll i=1;i<n;i++)
      {
          for(ll j=(pow(2,i)-1);j>=0;j--)
          ans.push_back(ans[j]);
          
          for(ll j=0;j<=(pow(2,i)-1);j++)
          ans[j]="0"+ans[j];
          
          for(ll j=(pow(2,i));j<ans.size();j++)
          ans[j]="1"+ans[j];
      }
      
      for(ll i=0;i<ans.size();i++)
      cout<<ans[i]<<endl;
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