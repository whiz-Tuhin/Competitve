vector<int> Solution::plusOne(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return va(lues as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int i = A.size()-1;

    if(A[i] + 1 > 9 && A.size() > 1){
            while(A[i] + 1 > 9 && i>0){
                int temp = 0;
                int temp2 = 0;
                if(i == A.size() - 1){
                     temp = (A[i]+1)%10;
                      temp2 = (A[i]+1)/10;
                }
                else{
                    temp = A[i]%10;
                    temp2 = A[i]/10;
                }

                    A[i] = temp;
                    A[i-1] += temp2;

                    i--;
            }

    }
    else{
            A[i] = A[i]+1;
    }

    if(A[0] == 10){
            vector<int> B(A.size()+1);

            for(int i = 0;i < B.size();i++){
                    if(i == 0)
                        B[i] = 1;
                    else
                        B[i] = 0;
            }

            return B;
    }

    i = 0;
    int count_z = 0;
    while(A[i] == 0){
        count_z++;
        i++;
    }

    vector<int> B(A.size() - count_z);

    for(int i = count_z; i < A.size();i++){
            B[i - count_z]  = A[i];
    }


    return B;
}
