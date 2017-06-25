bool Solution::isPower(int A) {

            if(A == 1){
                    return 1;
            }
            for(int p = 2;p < A;p++){
                        float temp = (log2(A))/(log2(p));

                        if((temp - (int)temp) == 0){
                                return 1;
                        }
            }

            return 0;
}
