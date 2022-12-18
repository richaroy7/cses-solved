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
        ll a[n];
        rep(i,0,n)
        cin>>a[i];
        
        stack<ll>st;
        ll ans[n];
        rep(i,0,n)
        ans[i]=-1;
        for(ll i=n-1;i>=0;i--)
        {
            ll key=a[i];
            if(!st.empty())
            {
                if(key<a[st.top()])
                {
                    while(st.empty()!=true && key<a[st.top()])
                    {
                        ans[st.top()]=i;
                        st.pop();
                    }
                }
                st.push(i);
                
            }
            else
            st.push(i);
        }
        rep(i,0,n)
        cout<<(ans[i]+1)<<" ";
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