#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <functional>
#include <climits>

using namespace std;

int main(){
      ios_base::sync_with_stdio(false);

      int n;
      cin>>n;

      vector<int> arr(n);

      cout<<"Enter the elememts"<<endl;
      
      for (int i = 0; i < n; i++){
            cin>>arr[i];
      }

      int start = 0,int end = size-1;;

      vector<int> queue;
      int front = 0,rear = -1;;
      int min_index = INT_MAX;
      while(end < arr.size()){


                //loop will push the elements into the queue
                int i = start;
                while(i <= end){
                          if(arr[i] < arr[i+1]){
                                  queue.push_back(arr[i]);
                                  queue.push_back(arr[i+1]);
                                  rear += 2;

                                  if(i < min_index){
                                      min_index = i;
                                  }
                          }
                          else{
                              i++;
                          }
                }

                start++;
                end++;

                if(start > min_index){
                      for(int i = 0;i < queue.size();i++){
                            queue[i] = queue[i+1]
                      }

                }

      }


      return 0;
}
