#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int n,w;
int flag=1;
void ser(int a[][n+1],int u,int v, int visit[]){
    int i,j;
    if (a[u][v]==1){
        visit[u]=1;
        flag++;
        return;
    }
    for (i=1;i<=n;i++){
        if (a[u][i]==1 && visit[i]==0){
            visit[i]=1;
            //printf("%d %d %d\n",u,i,v);
            ser(a,i,v,visit);
        }
    }
    visit[u] = 0;
}
int main() {
    int m;
    int q;
    int i,j;
    scanf("%d %d %d", &n, &m, &q);
    int a[n+1][n+1];
    int visit[n+1];
    for (i=0;i<=n;i++){
        visit[i]=0;
        for (j=0;j<=n;j++)
            a[i][j]=0;
    }
    for(int a0 = 0; a0 < m; a0++){
        int u;
        int v;
        scanf("%d %d", &u, &v);
        a[u][v]=1;
        a[v][u]=1;
    }

    for(int a0 = 0; a0 < q; a0++){
        int u;
        int v;
        flag=1;
        scanf("%d %d %d", &u, &v, &w);
        for (i=0;i<=n;i++)
            visit[i]=0;
        ser(a, u, w ,visit);
        ser(a, w, v, visit);
        if (flag==3){
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}
