int Solution::reverse(int x) {

    if(x < INT_MIN || x > INT_MAX){
            return 0;
    }

    bool flag = 0;

	if (x < 0) {
		x = 0 - x;
		flag = 1;
	}

	long long  res = 0;
	long long  p = x;

	while (p > 0) {
		int mod = p % 10;
		p = p / 10;
		res = res * 10 + mod;
	}


    if(res > INT_MAX || res < INT_MIN){
        return 0;
    }
	if (flag) {
		res = 0 - res;
	}

	return res;

}
