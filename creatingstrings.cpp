 #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define mod 1000000007
    #define rep(i,a,n) for(long long i=a;i<n;i++)
    #define rrep(i,n,k) for(int i=n;i>=k;i--)
    #define yes cout<<"YES"<<endl;
    #define no cout<<"NO"<<endl;
    void per(string s, string ans,set<string>&a)
    {
        if(s.length()==0)
        {
           a.insert(ans);
            return;
        }
        for(ll i=0;i<s.length();i++)
        {
            char f=s[i];
            string rest=s.substr(0,i)+s.substr(i+1);
            per(rest,ans+f,a);
        }
    }
    void solve()
    {
        string s;
        cin>>s;
        string ans="";
        set<string>a;
        per(s,ans,a);
        
        cout<<a.size()<<endl;
        for(auto i:a)
        cout<<i<<endl;
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