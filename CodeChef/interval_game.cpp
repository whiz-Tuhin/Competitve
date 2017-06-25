#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int sum = 0;

vector<int> get_max_list(vector<int> &a,int n){
    int max = -1;
    vector<int> final_list;
    cout<<"**"<<endl;
    for(int i = 0;i < a.size() - n + 1;i++){
                int sum = 0;
                vector<int> temp;
                for(int j = i;j < n+i;j++){
                        sum += a[j];
                        temp.push_back(a[j]);
                }
                if(sum > max){
                    max = sum;
                    final_list  = temp;
                }
    }

    return final_list;
}
int main(){

  ios_base::sync_with_stdio(false);

  int t;
  cin>>t;

  while(t-- > 0){
    int n,m,game_points = 0;
    cin>>n>>m;


    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0;i < n;i++)
                cin>>a[i];

    for(int i = 0;i < m;i++)
                cin>>b[i];


    for(int i = 1;i <= m;i++){
                vector<int> temp((100));
                if(i%2 != 0){   //chef plays
                        temp = get_max_list(a,b[i]);

                        for(int i = 0;i < temp.size();i++){
                                     cout<<temp[i]<<" ";
                        }
                        cout<<endl;

                        game_points += sum;
                }
                else{
                        temp = get_max_list(a,b[i]);
                        game_points -= sum;
                }
                a.resize(temp.size());
                a = temp;
                temp.clear();
    }

    cout<<game_points<<endl;
  }

  return 0;
}
