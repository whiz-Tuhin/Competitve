#include <iostream>
#include <fstream>
#include <string>

#define endl '\n'
#define infinity 9999;

using namespace std;

void dijkshtras(int n,int cost[ ][10],int start){

      int visited[n],minvertices[n],distance[n];

      for(int i = 0;i < n;i++){
                    for(int j = 0;j < n;j++){
                              if(cost[i][j] == 0){
                                      cost[i][j] = infinity;
                              }
                    }
      }

      for(int i = 0;i < n;i++){
                  distance[i] = cost[start][i];   //initialize the distance vector with the distances of all vertices from source
                  visited[i] = 0;                 //none of the vertices are visited
                  minvertices[i] = start;         // the vector for intermediate vertices initialized to source
      }


      distance[start] = 0;    // distance of source from self = 0
      visited[start] = 1;     // visiting the start node
      int pass = 1;           // as one vertex has already been visited
      int mindist = 0,currentnode;



      while(pass < n-1){

              mindist = infinity;

              for(int i = 0;i < n;i++){
                        if(distance[i] < mindist && visited[i]!=1){
                                mindist = distance[i];
                                currentnode = i;            //current node with minimum distance from the source
                        }
              }



              //as the current  node is now being visited
              visited[currentnode] = 1;
              for(int i = 0;i < n;i++){
                      //none of the nodes being checked should be visited before
                      if(visited[i] != 1){
                          //checking for the distance of i from startnode thru currentnode
                          if(mindist + cost[currentnode][i] < distance[i]){
                                  distance[i] = mindist + cost[currentnode][i];
                                  minvertices[i] = currentnode;
                          }
                      }
              }

            pass++;
      }


      cout<<"The single source shortest path from Source : "<<start<<'\n';



      int sum = 0;
      for(int i = 0;i < n;i++){
              cout<<"Path from "<<minvertices[start]<<" to "<<i<<" with cost "<<distance[i]<<'\n';
              sum = sum +  distance[i];
      }



      cout<<"The minimum total cost for the path is "<<sum<<'\n';
}

int main( ){

      int n;
      cout<<"enter the number of vertices :";
      cin>>n;
      int cost[10][10];


      cout<<"enter the cost matrix :"<<'\n';
      for(int i = 0;i < n;i++){
                   for(int j = 0;j < n;j++){
                             cin>>cost[i][j];
                   }
      }


      int start;
      cout<<"enter the starting vertex :";
      cin>>start;


      dijkshtras(n,cost,start);

  return 0;
}
