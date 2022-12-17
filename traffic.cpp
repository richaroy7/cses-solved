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
        ll x,n;
        cin>>x>>n;
        set<ll>st;
        st.insert(0);
        st.insert(x);
        multiset<ll>st1;
        st1.insert(x);
        
        rep(i,0,n)
        {
            ll px;
            cin>>px;
            auto it1 = st.upper_bound(px);
		    auto it2 = it1;
		    --it2;
		    st1.erase(st1.find(*it1 - *it2));
		    st1.insert(px - *it2);
		    st1.insert(*it1 - px);
		    st.insert(px);
		    auto ans = st1.end();
		    --ans;
	    	cout <<*ans<<" ";
            
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