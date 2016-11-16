/*
ID : tuhinkh1
PROG : ride
LANG : C++
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main( ){
    ifstream fin("ride.in");
    ofstream fout("ride.out");


    string coms[2];
    for(int i=0;i<2;i++)
        fin>>coms[i];

    // for(int i=0;i<2;i++){
    //     fout<<coms[i]<<endl;
    //     cout<<coms[i]<<endl;
    // }

   int counter1=1,counter2=1;

   for(int i = 0;i < coms[0].length();i++){
        counter1*= int(coms[0][i]-64);
   }

   for(int i = 0;i < coms[1].length();i++){
        counter2*= int(coms[1][i] - 64);
   }

   //cout<<counter1<<"  "<<counter2<<endl;

   if(counter1%47 == counter2%47){
     fout<<"GO"<<endl;
   }
   else{
     fout<<"STAY"<<endl;
   }

    return 0;
}
