#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

typedef unsigned long long int ulli;

// ulli h(int n){
//           if(n == 1){
//                   return 1;
//           }
//           if(n == 2){
//                   return 2;
//           }
//           if(n == 3){
//                   return 3;
//           }
//
//           else{
//                   return (h(n-1) + 2*h(n-2) + 3*h(n-3));
//           }
// }




int main( ){


        int n,q;
        cin>>n>>q;

        char mat[n+1][n+1];


        for(int i = 1;i <= n;i++){
                     for(int j = 1;j <= n;j++){
                                  ulli k = ((i*i)*(j*j))%7;
                                  //int val = ((k)%7);
                                  if(k == 2 || k == 4 || k == 5){
                                                mat[i][j] = 'X';
                                  }
                                  else{
                                                mat[i][j] = 'Y';
                                  }

                                  //cout<<mat[i][j]<<" ";
                     }
                     //cout<<endl;
        }

        while(q > 0){

          int angle;
          cin>>angle;

          int m = (angle/90)%4;
          int count = 0;

          if(m == 1 || m == 3){
                //cout<<"For 90 deg rotation"<<endl;
                for(int i = 1;i <= n;i++){
                        for(int j = 1;j <= n;j++){
                                     if(mat[i][j] != mat[n-j+1][i]){
                                                    count++;
                                     }
                        }
                }

                cout<<count<<endl;
          }

          if(m == 2){
                //cout<<"For 180 deg rotation"<<endl;
                for(int i = 1;i <= n;i++){
                        for(int j = 1;j <= n;j++){
                                    //cout<<mat[n-i+1][n-j+1]<<" ";
                                    if(mat[i][j] != mat[n-i+1][n-j+1]){
                                                  //cout<<"("<<i<<","<<j<<")"<<" "<<"("<<(n-i+1)<<","<<(n-j+1)<<")"<<endl;
                                                  count++;
                                    }
                        }
                        //cout<<endl;
                }

                cout<<count<<endl;
          }

          // if(m == 3){
          //   //cout<<"For 270 deg rotation"<<endl;
          //   for(int i = 1;i <= n;i++){
          //           for(int j = 1;j <= n;j++){
          //                       if(mat[i][j] != mat[j][n-i+1]){
          //                                     count++;
          //                       }
          //           }
          //   }
          //   cout<<count<<endl;
          //
          // }

          if(m == 0){
              //scout<<"For 360 deg rotation"<<endl;
              cout<<0<<endl;
          }

          q--;
        }









  return 0;
}
