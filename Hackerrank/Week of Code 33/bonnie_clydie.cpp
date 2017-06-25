#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <list>
#include <set>

using namespace std;


int b_start,c_start,target;

bool check_path_clydia(int current,vector<bool> &visited,vector<set<int> > &graph){
        bool result = false;
        visited[current] = true;

        // vector<int>::iterator index = find(graph[current].bxegin(),graph[current].end(),target);
        if(graph[current].find(target) != graph[current].end()){
              return true;
        }
        else{
                //set<int>::iterator it;

                for(auto it : graph[current]){
                      if(!visited[it]){
                            result = result || check_path_clydia(it,visited,graph);
                            cout<<"result c = "<<result<<endl;
                      }
                }
        }

        visited[current] = false;
        return result;
}

bool check_path_bonnie(int current,vector<bool> &visited,vector<set<int> > &graph){

      bool result = false;
      visited[current] = true;

      // vector<int>::iterator index = find(graph[current].begin(),graph[current].end(),target);
      if(graph[current].find(target) != graph[current].end()){
              if(check_path_clydia(c_start,visited,graph)){
                  return true;
              }
      }
      else{
           // set<int>::iterator it;

            for(auto it : graph[current]){
                        if(!visited[it]){
                              result = result || check_path_bonnie(it,visited,graph);
                              cout<<"result b = "<<result<<endl;
                        }
            }
      }

      visited[current] = false;
      return result;
}

int main(){


      ios_base::sync_with_stdio(false);

      int n,m,q;
      cin>>n>>m>>q;

      vector<set<int> > graph(n,set<int>());

      //making a graph ready
      for(int i = 0;i < m;i++){
            int u,v;
            cin>>u>>v;

            u = u - 1;
            v = v - 1;

            graph[u].insert(v);
            graph[v].insert(u);
      }

      while(q-- > 0){
            int u,v,w;

            cin>>u>>v>>w;

            b_start = u-1;
            c_start = v-1;
            target = w-1;

            vector<bool> visited(n,0);  // initialise v
            if(check_path_bonnie(b_start,visited,graph)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
      }

      return 0;
}
