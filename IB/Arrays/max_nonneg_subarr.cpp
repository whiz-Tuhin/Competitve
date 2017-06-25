vector<int> Solution::maxset(vector<int> &A) {

       vector<int> maxarr;
       vector<int> newarr;
       long long  sum = 0,maxsum = 0;
       for(int i = 0;i < A.size();i++){
                if(A[i] >= 0){
                        sum += A[i];
                        newarr.push_back(A[i]);
                        // cout<<"**"<<endl;
                } else{
                        sum = 0;
                        newarr.clear();
                }
                if((maxsum < sum) || (maxsum == sum && newarr.size() > maxarr.size())){
                            maxsum = sum;
                            maxarr = newarr;
                }
       }
       return maxarr;
}
