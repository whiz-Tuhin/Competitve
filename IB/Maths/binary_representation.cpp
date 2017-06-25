string Solution::findDigitsInBinary(int A) {

                string bin;

                if(A == 0){
                    bin = "0";
                    return bin;
                }

                while(A > 0){
                        int s = A%2;
                        bin.push_back('0' + s);
                        A = A/2;
                }

                reverse(bin.begin(),bin.end());

                return bin;


}
