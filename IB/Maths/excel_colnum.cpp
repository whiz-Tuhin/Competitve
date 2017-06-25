// I didnt undestand properly that wby when rem == 0
//     we make the number go to
//
//     num = num/26 - 1; --> why ??


typedef unsigned long long int ulli;

int Solution::titleToNumber(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> alpha(27);
    for(int i = 65;i <= 90;i++){
            alpha[i-64] = i-64;
    }
    ulli col = 0;
    for(int i = 0;i < A.length();i++){
                col = col + pow(26,A.length()-1-i)*(alpha[(int)A[i] - 64]);
    }

    return col;
}
