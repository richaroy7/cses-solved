#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define rep(i,a,n) for(long long i=a;i<n;i++)
#define rrep(i,n,k) for(int i=n;i>=k;i--)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
vector<vector<ll>>adj(100001);
bool visited[100001];
void DFS(ll v)
{
    visited[v] = true;
    for( auto child:adj[v])
    {
     if(!visited[child])
     DFS(child);
    }   
}
int main()
{
    ll n,m;
    cin>>n>>m;
    rep(i,0,m){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll count = 0;
    for (ll i = 1; i <= n; i++)
    visited[i] = false;
    vector<ll>ans;
    for (int i = 1; i <= n; i++) {
        if (visited[i] == false) {
        count ++;
        ans.push_back(i);
        DFS(i);
        }
    }
    cout<<count-1<<endl;
    for(int i=0;i<count-1;i++)
    cout<<ans[i]<<" "<<ans[i+1]<<endl;
    cout<<endl;
    return 0;
}