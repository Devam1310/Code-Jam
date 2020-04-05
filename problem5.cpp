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
        int n,k;
        cin>>n>>k;
        if(n==2)
        {
            if(k==2)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{1,2},{2,1}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==4)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{2,1},{1,2}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else
            {
                cout<<"Case "<<"#"<<e++<<": "<<"IMPOSSIBLE"<<endl;
            }
        }
        else if(n==3)
        {
            if(k==3)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{1,2,3},{3,1,2},{2,3,1}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==6)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{2,1,3},{3,2,1},{1,3,2}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==9)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{3,2,1},{1,3,2},{2,1,3}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else
            {
                cout<<"Case "<<"#"<<e++<<": "<<"IMPOSSIBLE"<<endl;
            }
        }
        else if(n==4)
        {
            if(k==4)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{1,2,3,4},{4,1,2,3},{3,4,1,2},{2,3,4,1}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==6)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{1,2,3,4},{2,1,4,3},{3,4,2,1},{4,3,1,2}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==7)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{1,3,4,2},{2,1,3,4},{3,4,2,1},{4,2,1,3}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==8)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{2,1,4,3},{4,2,3,1},{1,3,2,4},{3,4,1,2}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==9)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{1,3,4,2},{4,1,2,3},{2,4,3,1},{3,2,1,4}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==10)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{2,4,3,1},{4,3,1,2},{3,1,2,4},{1,2,4,3}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==11)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{2,3,4,1},{4,2,1,3},{1,4,3,2},{3,1,2,4}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==12)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{3,1,2,4},{4,3,1,2},{2,4,3,1},{1,2,4,3}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==13)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{4,2,3,1},{3,4,1,2},{1,3,2,4},{2,1,4,3}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==14)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{4,2,3,1},{2,3,1,4},{3,1,4,2},{1,4,2,3}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==16)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{4,3,2,1},{1,4,3,2},{2,1,4,3},{3,2,1,4}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else
            {
                cout<<"Case "<<"#"<<e++<<": "<<"IMPOSSIBLE"<<endl;
            }
        }
        else if(n==5)
        {
            if(k==5)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{1,2,3,4,5},{5,1,2,3,4},{4,5,1,2,3},{3,4,5,1,2},{2,3,4,5,1}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==7)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{2,5,3,4,1},{4,1,5,2,3},{5,2,1,3,4},{3,4,2,1,5},{1,3,4,5,2}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==8)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{1,2,4,3,5},{3,1,2,5,4},{5,3,1,4,2},{4,5,3,2,1},{2,4,5,1,3}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==9)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{1,2,3,4,5},{4,1,2,5,3},{5,4,1,3,2},{3,5,4,2,1},{2,3,5,1,4}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==10)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{2,1,3,4,5},{5,2,1,3,4},{4,5,2,1,3},{3,4,5,2,1},{1,3,4,5,2}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==11)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{1,3,2,5,4},{5,1,3,4,2},{4,5,1,2,3},{2,4,5,3,1},{3,2,4,1,5}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==12)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{1,4,2,5,3},{5,1,4,3,2},{3,5,1,2,4},{2,3,5,4,1},{4,2,3,1,5}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==13)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{2,3,1,4,5},{4,2,3,5,1},{5,4,2,1,3},{1,5,4,3,2},{3,1,5,2,4}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==14)
            {
                int a[n][n]={{2,3,1,5,4},{5,2,3,4,1},{4,5,2,1,3},{1,4,5,3,2},{3,1,4,2,5}};
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==15)
            {
                int a[n][n]={{3,1,2,4,5},{5,3,1,2,4},{4,5,3,1,2},{2,4,5,3,1},{1,2,4,5,3}};
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==16)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{3,5,1,2,4},{2,3,5,4,1},{4,2,3,1,5},{1,4,2,5,3},{5,1,4,3,2}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==17)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{4,3,1,2,5},{2,4,3,5,1},{5,2,4,1,3},{1,5,2,3,4},{3,1,5,4,2}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==18)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{3,4,1,5,2},{5,3,4,2,1},{2,5,3,1,4},{1,2,5,4,3},{4,1,2,3,5}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==19)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{4,5,3,2,1},{2,4,5,1,3},{1,2,4,3,5},{3,1,2,5,4},{5,3,1,4,2}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==20)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{4,3,2,1,5},{5,4,3,2,1},{1,5,4,3,2},{2,1,5,4,3},{3,2,1,5,4}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==21)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{5,4,1,2,3},{2,5,4,3,1},{3,2,5,1,4},{1,3,2,4,5},{4,1,3,5,2}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==22)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{5,4,2,3,1},{3,5,4,1,2},{1,3,5,2,4},{2,1,3,4,5},{4,2,1,5,3}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==23)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{5,2,4,1,3},{4,5,1,3,2},{3,4,5,2,1},{1,3,2,4,5},{2,1,3,5,4}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else if(k==25)
            {
                cout<<"Case "<<"#"<<e++<<": "<<"POSSIBLE"<<endl;
                int a[n][n]={{5,4,2,1,3},{3,5,4,2,1},{1,3,5,4,2},{2,1,3,5,4},{4,2,1,3,5}};
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        cout<<a[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
            else
            {
                cout<<"Case "<<"#"<<e++<<": "<<"IMPOSSIBLE"<<endl;
            }
        }
    }
}
