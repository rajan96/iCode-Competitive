#include<bits/stdc++.h>

using namespace std;

#define fin freopen("i1.txt","r",stdin)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define oo(x) do{ for(int zo=1;zo<=5;zo++) cout<<x; cout<<"\n"; }while(0);

int main(){

    ll cnt=0;
    string s;

    ll n;
    cin>>n>>s;
    map<char,ll> mp;

    for(ll i=0;i<n;i++){
        mp[s[i]]=1;
    }

    for(char c='a';c<='z' ; c++)
        if(mp[c]) cnt++;

    if(n>26) cout<<"-1"<<endl;
    else
    cout<<n-cnt<<endl;

    return 0;
}
