//You got the question wrong you could easily do by taking iterating on the input string

#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>

using namespace std;


int main( ){

//   int count = 0;
//   string str;
//
//   getline(cin,str);
//   int l = str.length();
//   char t[l];
//   //cout<<"l = "<<l<<endl;
//   for(int i = 0;i < l;i++){
//                if(str.at(i) != ' '){
//                          t[count] = str.at(i);
//                          count++;
//                }
//   }
//   cout<<"Count = "<<count<<endl;
//   int row = floor(sqrt(count));
//   int col = ceil(sqrt(count));
//   cout<<row<<" "<<col<<endl;
//
//
//   int min = 10000;
//   while(row>= floor(sqrt(count)) && row <= col && col <= ceil(sqrt(count))){
//                         int temp = row*col;
//                         if(temp < min && temp >= count){
//                                 min = temp;
//                         }
//                         row++;
//                         col++;
//
//   }
//
//   row--;
//   col--;
//   cout<<"row = "<<row<<"col = "<<col<<"area = "<<min<<endl;
//
//   char encrypt[row][col];
//   int k = 0;
//   for(int i = 0;i < row;i++){
//                for(int j = 0;j < col;j++){
//                                   if(k < count){
//                                       encrypt[i][j] = t[k];
//
//                                       if(encrypt[i][j] != '\0')
//                                           cout<<encrypt[i][j]<<" ";
//                                       ++k;
//                                   }
//                }
//                cout<<endl;
// }
//
//
//   for(int j = 0;j < col;j++){
//         for(int i = 0;i < row;i++){
//                      cout<<encrypt[i][j];
//         }
//         cout<<" ";
//

  string str;
  getline(cin,str);
  int l = str.length();

  int row = floor(sqrt(l));
  int col = ceil(sqrt(l));
  if(row*col <= l){
        row = col;
  }

  cout<<"row = "<<row<<"col = "<<col<<endl;

  for(int i = 0;i < col;i++){
                for(int j = 0;j < row;j++){
                      int temp = i + j*col;
                      if(temp < l){
                            cout<<str[temp];
                      }
                }
                cout<<' ';
  }



  return 0;
}
