// This is the fast way of computing the number of set bits in a number
// in O(log(n)) time complexity
//the method mainly suggests that when you subtract 1 from a number it toggles its rightmost bit
// and (&)ing the number - 1 with the original number we unset the rightmost bit and if we do it in a looop the juice is that the number of iterations is eequal to the number of set bits.


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int brain_kernighan(int n){

      int count = 0;
      while(n){
          n = n&(n-1);
          count++;
      }

      return count;
}

int O_of_1(int n){
      int res = __builtin_popcount(n);
      return res;
}

int main(){
      ios_base::sync_with_stdio(false);
      int n;
      cin>>n;

      int res = brain_kernighan(n);
      int res2 = O_of_1(n);
      cout<<"total set bits = "<<res<<endl;
      cout<<"total set bits = "<<res2<<endl;

      return 0;

}
