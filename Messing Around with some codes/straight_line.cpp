#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void solve(float x0,float y0,int a,int b,int c)
{
    int i = 0,j = 0,temp;
    //base case if origin passes through the line
    if(c == 0 || x0==0 || y0==0)
        printf("%d %d",0,0);
    x0  = (int)x0;
    y0  = (int)y0;
    int min = (sqrt(x0*x0 + y0*y0));
   //check for all possible input lines
   else if(x0 < 0)
   { 
   	 i = 0;
   	 j = y0; 
   }nano 
   else
   {

   }
    
    printf("%d %d\n",i,j);
}

int main( )
{
    int test,a,b,c,k = 0;nanoclear 
    float x,y;
    scanf("%d",&test);
    while(k < test)
    {
        scanf("%d%d%d",&a,&b,&c);
        printf("%d %d %d\n",a,b,c);
        //the base condition is
        x = (float)c/a;
        y = (float)c/b;
        printf("%f %f",x,y);
        solve(x,y,a,b,c);
    }

    return 0;
}
