vector<int> Solution::allFactors(int A) {

            vector<int> final;
            for(int i = 1;i <= (int)sqrt(A);i++){
                        if(A%i == 0){
                                final.push_back(i);
                                if(i != sqrt(A))
                                    final.push_back((A/i));

                        }

            }


            sort(final.begin(),final.end());
            return final;
}
