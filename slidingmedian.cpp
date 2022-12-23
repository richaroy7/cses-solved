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
        ll n,k;
        cin>>n>>k;
        ll a[n];
        vector<ll>b;
        rep(i,0,n)
        {
             cin>>a[i];
             if(i<k)
             b.push_back(a[i]);
        }
        sort(b.begin(),b.end());
        multiset<ll>s1;
        multiset<ll>s2;
        for(ll i=0;i<b.size();i++)
        {
            if(i<=(b.size()/2))
            s1.insert(b[i]);
            else
            s2.insert(b[i]);
        }
        vector<ll>ans;
        
          
          if((s2.size())>(s1.size()))
          {
            //   cout<<s2.size()<<"si"<<endl;
            //   cout<<s1.size()<<"si1"<<endl;
              ll tr;
              auto it3=s2.begin();
              tr=(*it3);
            //   cout<<tr<<"fu"<<endl;
              s2.erase(s2.find(tr));
              s1.insert(tr);
              
          }
          if((s1.size())>(s2.size()+1))
          {
               ll tr;
              auto it3=s1.end();
              it3--;
              tr=(*it3);
            //   cout<<tr<<"fu"<<endl;
              s1.erase(s1.find(tr));
              s2.insert(tr);
          }
        
        // for(auto it: s1)
        // cout<<it<<"     ";
        
      
      ll c=0;
      while(c<(n-k+1))
      {
          auto it1=s1.end();
          it1--;
          ll md=(*it1);
          //cout<<md<<endl;
          ans.push_back(md);
          
          ll ot=a[c];
          ll in= a[c+k];
          if(s1.find(ot)!=s1.end())
          s1.erase(s1.find(ot));
          else
          s2.erase(s2.find(ot));
          
          if(in>md)
          s2.insert(in);
          else
          s1.insert(in);
          
     
          
          if((s2.size())>(s1.size()))
          {
            //   cout<<s2.size()<<"si"<<endl;
            //   cout<<s1.size()<<"si1"<<endl;
              ll tr;
              auto it3=s2.begin();
              tr=(*it3);
            //   cout<<tr<<"fu"<<endl;
              s2.erase(s2.find(tr));
              s1.insert(tr);
              
          }
          if((s1.size())>(s2.size()+1))
          {
               ll tr;
              auto it3=s1.end();
              it3--;
              tr=(*it3);
            //   cout<<tr<<"fu"<<endl;
              s1.erase(s1.find(tr));
              s2.insert(tr);
          }
        //   for(auto x: s1)
        //   cout<<x<<"    ";
        //   cout<<endl;
          
          c++;
      }
        for(auto i : ans)
        cout<<i<<" ";
        cout<<endl;
        
    
        
    }
    int main() {
     
       ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
        ll test=1;
        //>>test;
        while(test--)
        {
         solve();
        }
        return 0;
    }