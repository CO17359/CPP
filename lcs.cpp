#include <iostream>
using namespace std;
/*
int main()
{
    cout<<"Enter the two strings: ";
    string str1,str2;
    cin>>str1>>str2;
    
    size_t a = str1.length();
    size_t b = str2.length();
    
    int m = int(a);
    int n = int(b);

    int c[m+1][n+1];
    
    for (int i=0; i<=m; i++)
    {
        c[i][0] = 0;
    }
    for (int j=0; j<=n; j++)
    {
        c[0][j] = 0;
    }
    for (int k=1; k<=m; k++)
    {
        for (int t=1; t<=n; t++)
        {
            if (str1[k]==str2[t])
            {
                c[k][t] = c[k-1][t-1]+1;
            }
            else
            {
                if(c[k-1][t]>=c[k][t-1])
                {
                    c[k][t] = c[k-1][t];
                }
                else
                {
                    c[k][t]=c[k][t-1];
                    
                }
            
            }
        }
    }
    
    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
    return 0;
}
*/
