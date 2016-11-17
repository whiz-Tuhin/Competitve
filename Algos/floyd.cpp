/*
  PROG: Floyd's All Pair Shortest Path
  COMPLEXITY : O(n^3)
*/

#include <iostream>
#include <string>
#include <fstream>

#define endl '\n'

using namespace std;


void floyd(int n,int cost[][10]){

        for(int i = 0;i < n;i++){
                     for(int j = 0;j < n;j++){
                                  for(int k = 0;k < n;k++){
                                                if(cost[i][k] + cost[k][j] < cost[i][j])
                                                             cost[i][j] = cost[i][k] + cost[k][j];
                                  }
                     }
        }


        cout<<"The All Pair Shortest Path Algorithm Results in the following Cost Matrix"<<'\n';

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
        cout<<"enter the cost matrix for the graph : "<<'\n';

        cout<<"******* enter 999 if the cost destination is not reachable from the host ********"<<'\n';

        for(int i = 0;i < n;i++){
                     for(int j = 0;j < n;j++){

                                  cin>>cost[i][j];   //assume that the cost for self loop is 0

                     }
        }


        floyd(n,cost);

  return 0;

}
