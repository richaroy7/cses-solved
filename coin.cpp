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
        ll a,b;
        cin>>a>>b;
        if(((a*2)==b)||((b*2)==a))
       {
           yes 
           return;
       }
       if((a==b && (a%3==0)))
       {
           yes
           return;
           
       }
       if(a<b)
       swap(a,b);
       if(2*(a-b)<=a &&(a+b)%3==0)
       {
           yes 
           return;
       }
       no
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