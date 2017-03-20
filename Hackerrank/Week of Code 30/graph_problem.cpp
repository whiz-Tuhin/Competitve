//NOTE := link to question https://www.hackerrank.com/contests/w30/challenges/a-graph-problem


#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int v;

void multiply(int A[][51],int B[][51],int C[][51],int v){

    for(int i = 0;i < v;i++){
                 for(int j = 0;j < v;j++){
                              C[i][j] = 0;
                              for(int k = 0;k < v;k++){
                                           C[i][j] += A[i][k]*B[k][j];
                              }
                 }
    }
}

int trace(int graph[][51],int v){

        int sum  = 0;
        for(int i = 0;i < v;i++){
              sum += graph[i][i];
        }

        return sum;
}

int gettriangle_count(int graph[][51],int v){

        int sq[v][51];
        int cube[v][51];

        for(int i = 0;i < v;i++){
                     for(int j = 0;j < v;j++){
                                  sq[i][j] = cube[i][j] = 0;
                     }
        }

        multiply(graph,graph,sq,v);

        multiply(graph,sq,cube,v);

        int tr = trace(cube,v);
        tr /= 6;

        return tr;
}
int main(){
  cin>>v;
  int graph[v][51];
  for(int i = 0;i < v;i++){
               for(int j = 0;j < v;j++){
                            cin>>graph[i][j];
               }
  }

  int res = gettriangle_count(graph,v);
  //cout<<res<<endl;

  cout<<v<<endl;
  for(int i = 0;i < v;i++){
              cout<<i+1<<" ";
  }
  return 0;
}
