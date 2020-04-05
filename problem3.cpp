#include<bits/stdc++.h>
#define ll long long int
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define trace(x) cerr<<#x<<" : "<<x<<endl;
using namespace std;
int main()
{
    int t,e=1;
    cin>>t;
    while(e<=t)
    {
        int n,l=0,c1=-1,c2=0,j1=-1,j2=0;
        string ans;
        cin>>n;
        vector< pair <int,int> > v,v1;
        for(int i=0;i<n;i++)
        {
            int p,q;
            cin>>p>>q;
            v.push_back(make_pair(p,q));
            v1.push_back(make_pair(p,q));
        }
        map<pair<int,int>,vector<char> > m;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            int p=v[i].first;
            int q=v[i].second;
            if(c1<p && c2<=p && c1<q && c2<=q)
            {
                c1=p;
                c2=q;
                m[make_pair(v[i].first,v[i].second)].push_back('C');
            }
            else if(j1<p && j2<=p && j1<q && j2<=q)
            {
                j1=p;
                j2=q;
                m[make_pair(v[i].first,v[i].second)].push_back('J');
            }
            else
            {
                ans="IMPOSSIBLE";
                l=1;
            }
        }
        if(l==0){
        for(int i=0;i<n;i++)
        {
            char c=m[make_pair(v1[i].first,v1[i].second)][0];
            m[make_pair(v1[i].first,v1[i].second)].erase(m[make_pair(v1[i].first,v1[i].second)].begin());
            ans+=c;
        }
        cout<<"Case "<<"#"<<e++<<": "<<ans<<endl;}
        else
        {
            cout<<"Case "<<"#"<<e++<<": "<<ans<<endl;
        }
    }
}

