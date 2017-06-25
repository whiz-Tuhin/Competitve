int Solution::gcd(int A, int B) {

              if(A == 0){
                    return B;
              }
              if(B == 0){
                    return A;
              }

              while(A != B){
                    if(A > B){
                        A = A-B;
                    }
                    if(B > A){
                        B = B-A;
                    }
                    if(A == B){
                        break;
                    }
              }

              return A;
}
