#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

typedef unsigned lon lon int lon;

lon min (lon a,lon b){
    return a<b?a:b;
}
lon max (lon a,lon b){
    return a>b?a:b;
}
int main(){
    lon n;
    lon k;
    scanf("%ld %ld",&n,&k);
    lon rq;
    lon cq;
    scanf("%ld %ld",&rq,&cq);
    lon total=0;
    lon i,j;
    lon l=0,r=n+1,u=0,d=n+1;
    lon ul=min(rq,cq),ur=min(rq,n-cq+1),dl=min(cq,n-rq+1),dr=min(n-rq+1,n-cq+1);
    //printf("%d %d %d %d %d %d %d %d \n",l,r,u,d,ul,ur,dl,dr);
    for(lon a0 = 0; a0 < k; a0++){
        lon ro;
        lon co;
        scanf("%ld %ld",&ro,&co);
        if (ro==rq){
            if (co>cq){
                r=min(r,co);
            }
            else
                l=max(l,co);
        }
        else if (co==cq){
            if (ro>rq){
                d=min(d,ro);
            }
            else
                u=max(u,ro);
        }
        else if ((ro-rq)==(co-cq)){
            if (ro<rq){
                ul=min(min(rq-ro,cq-co),ul);
            }
            else{
                dr=min(dr,min(ro-rq,co-cq));
            }
        }
        else if ((ro+co)==(rq+cq)){
            if (ro<rq){
                dl=min(dl,min(rq-ro,co-cq));
            }
            else{
                ur=min(ur,min(ro-rq,cq-co));
            }
        }
        //printf("%d %d %d %d %d %d %d %d \n",l,r,u,d,ul,ur,dl,dr);
    }
    //printf("%d %d %d %d %d %d %d %d \n",l,r,u,d,ul,ur,dl,dr);
    total=r-l+d-u+ul+ur+dl+dr-8;
    printf("%ld",total);
    return 0;
}
