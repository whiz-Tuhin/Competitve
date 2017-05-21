#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//NOTE - assumption is that starting point in grid is 1,1

int recursive_approach(int m,int n){
      if(m == 1 || n == 1){
            return 1;
      }

      return recursive_approach(m-1,n) + recursive_approach(m,n-1);

}

int dynamic_approach(int m,int n){
      vector<vector<int> > count(m,vector<int>(n,0));

      for(int i = 0;i < m;i++){    //from (0,0) there is only one path to reach every other column's first index
              count[i][0] = 1;
      }
      for(int i = 0;i < n;i++){ //same thing being done for the column
              count[0][i] = 1;
      }


      //here comes the dynamic part
      // the recurrence realtion is made by the fact that we can move only down or right
      for(int i = 1;i < m;i++){
              for(int j = 1;j < n;j++){
                        count[i][j] = count[i-1][j] + count[i][j-1];
              }
      }

      return count[m-1][n-1];
}

int main(){
      int m,n;
      cin>>m>>n;

      int count = recursive_approach(m,n);
      int count_d = dynamic_approach(m,n);


      cout<<"Recursion = "<<count<<endl;
      cout<<"DP = "<<count_d<<endl;
      return 0;
}
