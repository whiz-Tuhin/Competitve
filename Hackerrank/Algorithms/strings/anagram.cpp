#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <math.h>

using namespace std;

int main( ){

  int t;
  cin>>t;

  while(t > 0){

    string str;
    cin>>str;
    int first[26] = {0},second[26] = {0};
    int mid = str.length()/2;
    for(int i = 0;i < mid;i++){
                first[str[i] - 'a']++;
                second[str[str.length()-i-1] - 'a']++;
    }
    int count = 0;

  if(str.length()%2 == 1){
        cout<<-1<<endl;
  }
  else{
    for(int i = 0;i < 26;i++){

                 if(first[i] > second[i] && first[i]!=0){
                          count += abs(first[i] - second[i]);
                 }
    }

    cout<<count<<endl;
  }

    t--;
  }



  return 0;
}
