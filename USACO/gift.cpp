/*
ID : tuhinkh1
PROG : gift1
LANG : C++
*/

#include <iostream>
#include <string>
#include <fstream>
//#include <maps>

using namespace std;

typedef struct person{
  string name;
  int init_amt,no_ppl;
  int give_track;
  int recieve_track;
  string who_all[10];
}PERSON;


PERSON people[10];

int findIndexByName(int np,string names[ ],string A){
    int i = 0;

    for(i = 0;i < np;i++){
          if((people[i].name).compare(A) == 0)
              break;

    }

    return i;
}

void keepTrackOfMoney(int np,string names[10])
{
  int i = 0,j = 0,toGive = 0;
  for(i = 0;i < np;i++)
  {
      if(people[i].no_ppl!=0)
          toGive = (int)((people[i].init_amt) / (people[i].no_ppl));
      else
          toGive = 0;

      people[i].give_track = ((people[i].no_ppl)*(toGive));

      for(j = 0;j < people[i].no_ppl;j++)
      {
          int index = findIndexByName(np,names,people[i].who_all[j]);
          people[index].recieve_track += toGive;
      }
  }

}

int main( ){

  ifstream fin("gift1.in");
  ofstream fout("gift1.out");

  int np,i = 0,j = 0;

  fin>>(np);
  string names[10];

  while(i < np){
        fin>>names[i++];
  }

  for(i = 0;i < np;i++){
        fin>>(people[i].name);

        fin>>(people[i].init_amt)>>(people[i].no_ppl);
        for(j = 0;j < people[i].no_ppl;j++)
                fin>>(people[i].who_all[j]);
  }


  keepTrackOfMoney(np,names);

  for(i = 0;i < np;i++){
      int index = findIndexByName(np,names,names[i]);
      fout<<names[i]<<" "<<(-people[index].give_track + people[index].recieve_track)<<endl;
  }

  return 0;

}
