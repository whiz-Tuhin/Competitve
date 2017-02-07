#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_contents(vector<int> v){

  for(int i = 0;i < v.size();i++){
               cout<<v[i]<<" ";
  }

}

int main(){

  ios_base::sync_with_stdio(false);

  int n,k,k1,total_luck = 0;
  cin>>n;

  vector<int> imp;

  cin>>k1;
  int l = 0;
  for(int i = 0;i < n;i++){
            cin>>l>>k;
            total_luck += l;
            if(k == 1){
                //cout<<"**"<<endl;
                imp.push_back(l);
            }

  }

  //cout<<"Tl = "<<total_luck<<endl;

  if(imp.size() >= k1){
          int temp = (imp.size()) - k1;
          //cout<<temp<<endl;
          sort(imp.begin(),imp.end());
          for(int i = 0;i < imp.size();i++){
                       if(i < temp){
                                total_luck = total_luck -  2*imp[i];
                       }
          }

          //cout<<"Tl = "<<total_luck<<endl;
  }

  cout<<total_luck<<endl;


  return 0;
}
