string Solution::convertToTitle(int A) {

            string s;
            while(A > 0){
                    int rem = A%26;

                    if(rem!=0){
                        s.push_back((char)(64+rem));
                        A = A/26;

                    }
                    if(rem == 0){
                        s.push_back((char)(90));

                        A = A/26 - 1;

                    }
            }

            reverse(s.begin(),s.end());
            return s;
}
