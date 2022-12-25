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
        deque<ll>d;
        rep(i,1,n+1)
        d.push_back(i);
        
        while(d.size()>0)
        {
            if(d.size()==1)
            {
                cout<<d.front()<<endl;
                break;
            }
            ll el=d.front();
            d.pop_front();
            d.push_back(el);
            cout<<d.front()<<" ";
            d.pop_front();
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