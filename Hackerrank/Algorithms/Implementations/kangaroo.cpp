#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int main( ){

  int x1,x2,v1,v2;
  cin>>x1>>v1>>x2>>v2;

  if(x2 > x1 && v2 > v1){
            cout<<"NO"<<endl;;
  }

  else{
        float a = (x1 - x2);
        float b = (v2 - v1);
        float y = a/b;
        //cout.precision(2);
        cout<<"Y = "<<y<<endl;
        //cout<<"Floor y = "<<floor(y)<<" "<<"Ceil y = "<<ceil(y)<<endl;

        if(y < 0){
          cout<<"NO"<<endl;
        }

        else if(floor(y) != ceil(y))
        {

              cout<<"NO"<<endl;
        }
        else{
          cout<<"YES"<<endl;
        }
  }



  return 0;
}
