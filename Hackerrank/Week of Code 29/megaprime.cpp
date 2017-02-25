//FIXME := code doesnt work for more than 10^7 upper bound

#include <iostream>
#include <string.h>
#include <vector>
#include <math.h>
#include <cstdlib>
#include <cstring>
#include <cstdio>


using namespace std;

typedef long long ll;

ll final_count = 0;

void simple_seive(ll limit,vector<ll> &prime){

  bool is_prime[limit+1];

  memset(is_prime,true,sizeof(is_prime));

  for(ll i = 2;i*i < limit;i++){
              if(is_prime[i] == true){
                        for(ll j = i*2;j < limit;j+=i){
                                      is_prime[j] = false;
                        }
              }
  }

  for(ll i = 2;i < limit;i++){
              if(is_prime[i] == true){
                      prime.push_back(i);

                      ll num = i;
                      int flag = 1;

                      while(num > 0){
                              ll temp = num%10;
                              if(is_prime[temp] == false){
                                      flag = 0;
                                      break;
                              }
                              num /= 10;
                      }

                      if(flag == 1){
                            final_count++;
                      }
              }
  }

}


void segmented_seive(ll n){

   ll limit = floor(sqrt(n))+1;
   vector<ll> prime;

   simple_seive(limit,prime);
   ll low = limit;
   ll high = 2*limit;

   while(low < n){

            bool mark[limit+1];
            memset(mark,true,sizeof(mark));

            for(ll i = 0;i < prime.size();i++){

                    ll low_lim = floor(low/prime[i])*prime[i];
                    if(low_lim < low){
                            low_lim += prime[i];
                    }

                    for(ll j = low_lim;j < high;j+=prime[i]){
                                mark[j - low] = true;
                    }
            }

            for(ll i = low;i < high;i++){
                    if(mark[i - low] == true){

                              ll num = i;
                              int flag = 1;

                              while(num > 0){
                                      ll temp = num%10;
                                      if(mark[temp] == false){
                                                  flag = 0;
                                                  break;
                                      }
                                      num /= 10;
                            }

                              if(flag == 1){
                                  final_count++;
                              }

                    }
            }

            low  = low + limit;
            high = high + limit;
            if (high >= n)
                    high = n;


   }

}


int main(){

  int n1,n;
  cin>>n1>>n;
  //vector<bool> is_prime(n+1);
  segmented_seive(n);

  cout<<final_count<<endl;




  return 0;
}
