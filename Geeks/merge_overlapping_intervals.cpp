#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

typedef struct Interval{
      int start;
      int end;
}Interval;

bool mycompare(Interval a,Interval b){
      return a.start < b.start;
}

bool check_overlap(Interval a,Interval b){
    if(max(a.start,a.end) < min(b.start,b.end)){
        return 0;
    }
    return 1;
}

void print_vector(vector<Interval> &vec){
        for(int i =  0;i < vec.size();i++){
                cout<<vec[i].start<<" "<<vec[i].end;
        }

        cout<<endl;
}

vector<Interval> merge_overlap(vector<Interval> &arr){
        vector<Interval> res;

        cout<<"res size  = "<<res.size()<<endl;
        int n = arr.size();

        vector<int> flag(n,0);
        Interval temp;

        for(int i = 0;i < arr.size()-1;i++){

                  if(!(check_overlap(arr[i],arr[i+1]))){
                        if(flag[i] != 1){
                          res.push_back(arr[i]);
                        }
                  }

                  else{
                        temp.start = arr[i].start;
                        temp.end = arr[i+1].end;
                        res.push_back(temp);
                        flag[i] = 1;
                        flag[i+1] = 1;
                  }
        }

        if(!flag[n-1])
            res.push_back(arr[n-1]);

        return res;
}

int main(){
      int n;
      cin>>n;

      vector<Interval> arr(n);

      for(int i = 0;i < n;i++){
                Interval temp;
                cin>>temp.start>>temp.end;
                arr.push_back(temp);
      }

      vector<Interval> res;

      sort(arr.begin(),arr.end(),mycompare);

      res = merge_overlap(arr);
      for(int i = 0;i < res.size();i++){
                  cout<<res[i].start<<" "<<res[i].end<<endl;
      }

      return 0;
}
