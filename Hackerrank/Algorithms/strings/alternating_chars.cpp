#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <math.h>
#include <vector>

using namespace std;

int main( ){

  int t;
  cin>>t;

  while(t > 0){

        string s;
        //string temp;
        cin>>s;

        int del = 0;


        for(int i = 0;i < s.length()-1;i++){
                    if(s[i] == s[i+1]){
                          del++;
                    }
        }

        cout<<del<<endl;
        t--;

  }



  return 0;
}
