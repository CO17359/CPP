#include <iostream>
using namespace std;

void print_paren(int s_arr[5][5],int i,int j)
{
    if (i==j)
    {
        cout<<"A"<<i;
    }
    else
    {
        cout<<"(";
        print_paren(s_arr,i,s_arr[i][j]);
        print_paren(s_arr,s_arr[i][j]+1,j);
        cout<<")";
    }
}
/*
int main()
{
    int n;
    cout<<"Enter number of matrices: ";
    cin>>n;
    
    int arr[n+1];
    
    for (int i=0; i<n+1; i++)
    {
        cin>>arr[i];
    }
    
    int m[6][6],s_arr[5][5];
    for (int i=1; i<=n; i++)
    {
        m[i][i]=0;
    }
    
    for (int l=2; l<=n; l++)
    {
        for (int h=1; h<=(n-l+1); h++)
        {
            int j = h + l - 1;
            m[h][j] = 999999999;
            for (int k = h; k<=j-1; k++)
            {
                int num = m[h][k] + m[k+1][j] + ( arr[h-1] * arr[k] * arr[j] ) ;
                if (num < m[h][j])
                {
                    m[h][j] = num;
                    s_arr[h][j] = k;
                }
            }
        }
    }
    
    cout<<"Minimum number of multiplication: "<<m[1][n]<<"\n\n";
    cout<<"Parenthesisation is: ";
    print_paren(s_arr,1,n);
    
    
    return 0;
}
*/
