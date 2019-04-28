#include <iostream>
using namespace std;
/*
class pqueue
{
public:
    int index;
    int weight;
    bool check;
};

int main()
{
    int n,e,u=0;
    cout<<"Number of Vertex:";
    cin>>n;
    pqueue Q[n];
    int D[n];
    
    //d is the distance from the source, initialy set to infinity
    
    int arr[n][n];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            arr[i][j]=0;
        }
    }
    
    cout<<"Number of edges: ";
    cin>>e;
    for (int k=1; k<=e; k++)
    {
        int a,b,dis;
        cout<<"First vertex with edge: ";
        cin>>a;
        cout<<"Second vertex with edge: ";
        cin>>b;
        cout<<"Length of edge: ";
        cin>>dis;
        arr[a][b]=dis;
        arr[b][a]=dis;
    }
    
    cout<<"\n\n";
    
    for (int i=1;i<=n;i++)
    {
        D[i]=INT_MAX;
    }
    
    D[1]=0;
    
    for (int i=1;i<=n;i++)
    {
        Q[i].index=i;
        Q[i].weight=D[i];
        Q[i].check=false;
    }
    
    int count=0;
    while(count != n)
    {
        for (int k=1; k<=n; k++)
        {
            if(Q[k].check == true)
            {
                count++;
            }
        }
        
        //min function
        int num = 0;
        while(Q[num].check!=false)
        {
            num++;
        }
        
        int weight = Q[num].weight;
        
        for (int i=0; i<n; i++)
        {
            if (Q[i].weight<weight && Q[i].check == false)
            {
                u=i;
            }
        }
        Q[u].check = true;
        //min function ends
        
        for (int v=1; v<=n; v++)
        {
            if(arr[v][u]!=0)
            {
                if (D[v] > D[u]+arr[u][v])
                {
                    D[v]=D[u]+arr[u][v];
                    Q[v].weight = D[v];
                }
            }
        }
    }
    
    for (int i=1; i<=n; i++)
    {
        cout<<"The minimum distance for vertex "<<i<<" is";
        cout<<D[i]<<"\n";
    }
    
    return 0;
}
*/
