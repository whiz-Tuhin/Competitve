/*
ID : tuhinkh1
PROG : friday
LANG : C++
*/

#include <iostream>
#include <string>
#include <fstream>

#define endl '\n'

using namespace std;

int freq[7] = {0};

int checkLeapYear(int year){
  int flag =0;
  if(year%100 == 0){
      return (year%400 == 0);
  }
  else
    return year%4 == 0;

}

int numberOfDaysInMonth(int month,int year){
      int d[ ] = {31,28,31,30,31,30,31,31,30,31,30,31};
      if (month == 2){
        if(checkLeapYear(year))
          return (d[month-1] + 1);
        else
          return d[month-1];
      }
      else
        return d[month-1];
}

int main( ){

  ifstream fin("friday.in");
  ofstream fout("friday.out");

  int N,i =0;
  fin>>N;
  int day = 2;

  for(int year = 1900;year <= 1900 + N -1;year++){
    for(int month = 1;month <= 12;month++){
        for(int days = 1;days <= numberOfDaysInMonth(month,year);days++){
            if(days == 13){
              freq[day]++;
            }
            day = (day + 1)%7;
        }
    }
  }

  for(i = 0;i < 7;++i){
    if(i==6)
      fout<<freq[i]<<'\n';
    else
      fout<<freq[i]<<" ";

  }
  return 0;
}
