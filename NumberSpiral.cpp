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
        ll y,x;
        cin>>x>>y;
        if(x>y)
        {
            if(x&1)
            {
                cout<<((x*x)-((2*x-1)-y))<<endl;
            }
            else
            {
                cout<<((x*x)-(y-1))<<endl;
            }
        }
        else
        {
             if(y&1)
             {
                cout<<((y*y)-(x-1))<<endl; 
             }
             else
             {
                 cout<<((y*y)-((2*y-1)-x))<<endl;
             }
        }
    }
    int main() {
     
       ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
        ll test=1;
        cin>>test;
        while(test--)
        {
         solve();
        }
        return 0;
    }