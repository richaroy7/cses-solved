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
         ll a,b;
        multiset<pair<pair<ll,ll>,ll>>st;
        rep(i,0,n)
        {
           cin>>a>>b;
           st.insert({{a,b},i});
           
        }
        
        multiset<pair<ll,ll>>v;
        vector<ll>room_no(n);
        //v.push_back(0);
        ll room=0;
        for(auto i: st)
        {
           
            ll curr_st=i.first.first;
            // for(ll j=0;j<v.size();j++)
            // {
            //     if(curr_st>v[j])
            //     {
            //         v[j]=max(v[j],i.first.second);
            //         got_room=true;
            //         room_no[i.second]=(j+1);
            //         break;
            //     }
            // }
            if(v.size()>0)
            {
            auto it=v.begin();
            if(curr_st>it->first)
            {
                
                room_no[i.second]=it->second;
                v.erase(it);
                v.insert({i.first.second,room_no[i.second]});
            }
            
            else
            {
                room++;
                v.insert({i.first.second,room});
                room_no[i.second]=(room);
            }
            }
            else
            {
                 room++;
                v.insert({i.first.second,room});
                room_no[i.second]=(room);
            }
        }
        cout<<room<<endl;
        for(ll i=0;i<room_no.size();i++)
        cout<<room_no[i]<<" ";
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