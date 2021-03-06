
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int max(int a, int b)
{   return (a > b)? a : b; }

int LCSubStr(char *X, char *Y, int m, int n)
{
    int LCSuff[m+1][n+1];
    int result = 0;

    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;

            else if (X[i-1] == Y[j-1])
            {
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else LCSuff[i][j] = 0;
        }
    }
    return result;
}

int main()
{
    int n;
    int q;

    cin>>n>>q;

    char arr[n][100000];

    for(int i = 0;i < n;i++){
                cin>>arr[i];
    }

    while(q > 0){

      int i1,i2;
      cin>>i1>>i2;

      int m = strlen(arr[i1]);
      int n = strlen(arr[i2]);

      cout<< LCSubStr(arr[i1], arr[i2], m, n)<<endl;

      q--;
    }
    return 0;
}
