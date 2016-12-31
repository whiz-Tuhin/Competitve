#include <iostream>
#include <math.h>
#include <cstdlib>
#include <cstring>


using namespace std;

// unsigned long long int sum_digits(int n){
//   unsigned long long int sum = 0;
//   while(n!=0){
//         int rem = n%10;
//         sum += rem;
//         n = n/10;
//   }
//   //cout<<"Sum = "<<sum<<endl;
//   return sum;
// }


int digit_count(int n){
        int count = 0;
        while(n!=0){
              int rem = n%10;
              count++;
              n = n/10;
        }
        return count;
}
void generate_kaprekar_numbers(int p,int q){
      unsigned long long int sum_l = 0,sum_r = 0;
      for(int r = p;r < q;r++){
                   sum_l = 0;
                   sum_r = 0;

                   unsigned long long int sqr = r*r;

                   int d = digit_count(r);
                  // cout<<"The no_digits in r is = "<<d<<endl;
                   int d_2 = digit_count(sqr);
                   //cout<<"d = "<<d<<"d_2 = "<<d_2<<endl;
                   //cout<<"The no_digits in r^2 is = "<<d_2<<endl;
                   unsigned long long int* arr = (unsigned long long int*)malloc(sizeof(unsigned long long int)*(d_2));
                   memset(arr,0,sizeof(arr)*(d_2));
                   int i = d_2 - 1;
                   while(sqr!=0 && i >= 0){
                                      arr[i] = sqr%10;
                                      sqr = sqr/10;
                                      i--;
                    }

                  if(d_2%2 == 0){
                    // for(int i = 0;i < d_2;i++){
                    //              cout<<arr[i];
                    // }
                    // cout<<endl;
                    for(int i = 0;i < d;i++){
                            sum_l = sum_l + pow(10,d-i-1)*arr[i];
                    }
                    //cout<<sum_l<<" ";
                    for(int i = d;i < d_2;i++){
                            sum_r = sum_r + pow(10,d_2-i-1)*arr[i];
                    }
                    //cout<<sum_r;

                    if(sum_r + sum_l == r){
                              cout<<r<<" ";
                    }

                    //unsigned long long int f = sum_digits(r);
                  }
                 if(d%2 == 1){
                   for(int i = 0;i <= d-1;i++){
                           sum_l = sum_l + pow(10,d-i-1)*arr[i];
                   }
                   //cout<<sum_l<<" ";
                   for(int i = d;i < d_2;i++){
                           sum_r = sum_r + pow(10,d_2-i-1)*arr[i];
                   }
                   //cout<<sum_r;

                   if(sum_r + sum_l == r){
                             cout<<r<<" ";
                   }
                 }


                  free(arr);

      }
}

int main( ){

  int p,q;
  cin>>p;
  cin>>q;

  generate_kaprekar_numbers(p,q);
  return 0;
}
