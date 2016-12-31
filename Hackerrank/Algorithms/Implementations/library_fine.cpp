#include <iostream>

using namespace std;

int main( ){

  int Da,Ma,Ya;
  int De,Me,Ye;

  cin>>Da>>Ma>>Ya;
  cin>>De>>Me>>Ye;

  int tot = 0;

  if(Da <= De && Ma <= Me && Ya <= Ye){
          cout<<0;
          exit(0);
  }

  if(Ya - Ye == 0 && Ma - Me == 0){
        if(Da - De == 0){
            cout<<0;
        }
        else{
            tot = 15*(Da - De);
            cout<<tot;
        }
  }
  else if(Ya - Ye == 0 && Ma - Me > 0){
        tot = 500*(Ma - Me);
        cout<<tot;
  }
  else{
    if(Ya - Ye <= 0)
          cout<<0;
    else
          cout<<10000;

  }

  return 0;
}
