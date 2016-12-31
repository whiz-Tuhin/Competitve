#include <iostream>
#include <vector>
#include <map>
#include <cstdlib>
#include <cmath>

using namespace std;

int main( ){

  int n,k;
  cin>>n>>k;

  vector<int>t(n);
  for(int i = 0;i < n;i++){
               cin>>t[i];
  }

  int page_index = 1,topic_count = 0,rem,count = 0;
  for(int i = 0;i < n;i++){
               topic_count = 0;
               if(t[i] - k > 0){
                  rem = t[i];
                  while(rem > t[i]){
                       topic_count = topic_count + k;
                       if(page_index <= topic_count){
                                  count++;
                       }
                       page_index++;
                       rem = t[i] - topic_count;
                  }
               }
  }


  return 0;
}
