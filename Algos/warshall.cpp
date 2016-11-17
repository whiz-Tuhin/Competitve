/*
  PROG: Warshall's Transitive Closure
  COMPLEXITY : O(n^3)
*/

#include <iostream>
#include <string>
#include <fstream>

#define endl '\n'

using namespace std;


void warshalls(int n,int cost[][10]){

        for(int i = 0;i < n;i++){
                     for(int j = 0;j < n;j++){
                                  for(int k = 0;k < n;k++){

                                                cost[i][j] = cost[i][j] || (cost[i][k] & cost[k][j]);
                                  }
                     }
        }


        cout<<"The Transitive Closure Matrix is "<<'\n';

        for(int i = 0;i < n;i++){
                    for(int j = 0;j < n;j++){
                                 cout<<cost[i][j]<<" ";
                    }
            cout<<'\n';
        }

}


int main( ){

        int n;
        cout<<"enter the number of vertices in the graph :";
        cin>>n;

        int cost[10][10];
        cout<<"enter the adjacency matrix for the graph : "<<'\n';

        cout<<"******* enter 0 destination is not reachable from the host ********"<<'\n';

        for(int i = 0;i < n;i++){
                     for(int j = 0;j < n;j++){

                                  cin>>cost[i][j];   //assume that the cost for self loop is 0

                     }
        }


        warshalls(n,cost);

  return 0;

}
