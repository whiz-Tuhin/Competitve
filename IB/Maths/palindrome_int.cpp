bool Solution::isPalindrome(int A) {

            string s = to_string(A);

            if(s.length() == 1){
                    return 1;
            }

            int i = 0,j = s.length()-1;

            if(s[i] != s[j]){
                    return 0;
            }

            while(i < j){
                    if(s[i] == s[j]){
                            i++;
                            j--;
                    }
                    else{
                            return 0;
                    }
            }

            return 1;

}
