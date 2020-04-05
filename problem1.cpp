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
        int n,sum=0,rows=0,cols=0;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(i==j)sum+=a[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            set<int> temp;
            for(int j=0;j<n;j++)
            {
                temp.insert(a[i][j]);
            }
            if(temp.size()!=n)
                rows++;
        }
        for(int i=0;i<n;i++)
        {
            set<int> temp;
            for(int j=0;j<n;j++)
            {
                temp.insert(a[j][i]);
            }
            if(temp.size()!=n)
                cols++;
        }
      cout<<"Case "<<"#"<<e++<<": "<<sum<<" "<<rows<<" "<<cols<<endl;
    }
}
