//Things Learnt from the question
//Whenever told to map a number to a string say 1 -> one 2-> two 3 -> three use a map
//in better terms its called a dictionary <key,meanin          g> every key has a meaning

#include <iostream>
#include <utility>
#include <string>
#include <cstring>
#include <vector>
#include <map>

using namespace std;

int main( ){

      map<int,string>mymap;
      map<int,string>mymap2;

      string hour[12] = {"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve"};
      string minutes[8] = {"o' clock","one minute past","ten minutes past","half past","twenty minutes to","quarter to","thirteen minutes to","twenty eight minutes past"};

      for(int i = 0;i < 12;i++){
                   mymap[i+1] = hour[i];
      }

      mymap2[0] = minutes[0];
      mymap2[1] = minutes[1];
      mymap2[10] = minutes[2];
      mymap2[30] = minutes[3];
      mymap2[40] = minutes[4];
      mymap2[45] = minutes[5];
      mymap2[47] = minutes[6];
      mymap2[28] = minutes[7];

      int h,m;
      cin>>h;
      cin>>m;

      map<int,string>::iterator it;
      map<int,string>::iterator it2;
      it = mymap.find(h-1)->second;
      it2 = mymap.find(m)->second;
      cout<<it<<" "<<it2;


      return 0;
}
