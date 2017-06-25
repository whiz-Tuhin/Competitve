//the fuck man i forgot that for an efficient prime number algorithm we have to take it till sqrt(A)
//sqrt has a reason -> the reason is

// if n is not prime it can be factored as n = a*b if a > sqrt(n) and b > sqrt(n) a*b > n -> so we need to go only tilll sqrt n


int Solution::isPrime(int A) {

            if(A == 1 || A == 0){
                    return 0;
            }
            for(int i = 2;i <= sqrt(A);i++){
                        if(A%i == 0){
                                return 0;
                        }
            }

            return 1;
}
