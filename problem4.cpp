#include<bits/stdc++.h>
#define ll long long int
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define trace(x) cerr<<#x<<" : "<<x<<endl;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,b;
    cin>>t>>b;
    while(t--)
    {
        string ans;
        for(int i=1;i<=10;i++)
        {
            char ch;
            cout<<i<<endl;
            cout.flush();
            cin>>ch;
            ans+=ch;
        }
        cout<<ans<<endl;
        cout.flush();
        char e;
        cin>>e;
        if(e=='N' || e=='n')
            break;
    }
    return 0;
}
