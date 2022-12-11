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
        string n;
        cin>>n;
        map<char,ll>m;
        rep(i,0,n.length())
        {
            m[n[i]]++;
        }
        deque<char>d;
        ll oc=0;
        for(auto &it : m)
        {
            if(it.second&1)
            {oc++;
             if(oc>1)
            {
                cout<<"NO SOLUTION"<<endl;
                return;
            }
             for(ll i=0;i<it.second;i++)
             d.push_back(it.first);
             it.second=0;
            }
            
        }
        for(auto it:m)
        {
            for(ll i=0;i<it.second;i++)
            {
                if(i&1)
                d.push_back(it.first);
                else
                d.push_front(it.first);
            }
        }
        
        for(auto it:d)
        cout<<(it);
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