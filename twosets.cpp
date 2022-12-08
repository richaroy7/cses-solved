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
        ll ts=((n)*(n+1))/2;
        if(ts&1)
        {
            no 
            return;
        }
        else
        {
            yes 
            ts/=2;
            vector<ll>v1;
            ll i=n;
            while(ts>=i)
            {
                ts-=i;
                v1.push_back(i);
                i--;
            }
            if(ts!=0)
            {
                v1.push_back(ts);
                
            }
            
            cout<<v1.size()<<endl;
            for(ll i=0;i<v1.size();i++)
            cout<<v1[i]<<" ";
            cout<<endl;
            cout<<(n-v1.size())<<endl;
            for(ll j=1;j<=i;j++)
            {
                if(j!=ts)
                cout<<j<<" ";
            }
            cout<<endl;
        }
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