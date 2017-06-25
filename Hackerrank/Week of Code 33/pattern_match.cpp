#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <functional>
#include <vector>

using namespace std;

void getZarr(string str, int Z[]);

int start,target;

string temp;

int search(string text, string pattern)
{
    int count = 0;
    string concat = pattern + "$" + text;
    int l = concat.length();

    int Z[l];
    getZarr(concat, Z);

    for (int i = 0; i < l; ++i)
    {
        if (Z[i] == pattern.length())
            count++;
    }

    return count;
}


void getZarr(string str, int Z[])
{
    int n = str.length();
    int L, R, k;

    L = R = 0;
    for (int i = 1; i < n; ++i)
    {
        if (i > R)
        {
            L = R = i;
            while (R<n && str[R-L] == str[R])
                R++;
            Z[i] = R-L;
            R--;
        }
        else
        {
            k = i-L;
            if (Z[k] < R-i+1)
                 Z[i] = Z[k];

            else
            {
                L = i;
                while (R<n && str[R-L] == str[R])
                    R++;
                Z[i] = R-L;
                R--;
            }
        }
    }
}

void dfs_path_string(int current,vector<bool> &visited,vector<set<int> > &graph,string s){

          visited[current] = true;
          temp.push_back(s[current]);

          if(graph[current].find(target) != graph[current].end()){

                  temp.push_back(s[target]);
                  return;

          } else {

                 for(auto it : graph[current]){
                        if(!visited[it]){
                                dfs_path_string(it,visited,graph,s);
                        }
                 }
          }

          visited[current] = false;
}


int main(){

          ios_base::sync_with_stdio(false);

          int n,q;
          cin>>n>>q;

          string s;
          cin>>s;

          string pat;
          cin>>pat;

          vector<set<int> > graph(n,set<int>());

          for(int i = 0;i < n-1;i++){
                  int u,v;
                  cin>>u>>v;

                  u = u-1;
                  v = v-1;

                  graph[u].insert(v);
                  graph[v].insert(u);
          }

          while(q-- > 0){
                  cin>>start>>target;

                  start = start - 1;
                  target = target - 1;

                  vector<bool> visited(n,false);

                  dfs_path_string(start,visited,graph,s);
                  string t = temp;
                  temp.clear();

                  cout<<"t = "<<t<<endl;
                  // KMP and Z both can be used
                  int count =  search(t,pat);
                  cout<<count<<endl;
          }

    return 0;
}
