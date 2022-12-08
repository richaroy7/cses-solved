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
        string s;
        cin>>s;
        ll mc=(s.length()>0?1:0);
        s+="x";
        for(ll i=0;i<s.length();i++)
        {
            char c=s[i];
            ll j=i;
            ll cc=1;
            while(j<(s.length()-1) && s[j+1]==c)
            {
                cc++;
                mc=max(cc,mc);
                j++;
                
            }
            i=j;
        }
        
        cout<<mc<<endl;
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