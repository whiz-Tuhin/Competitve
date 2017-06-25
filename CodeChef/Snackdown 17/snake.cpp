#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    long long int t;
    long long check_flag,x11,y11,x12,y12,x21,y21,x22,y22;
    cin >> t;
    while(t--)
    {
        check_flag = 1;
    	cin >> x11 >> y11 >> x12 >> y12;
    	cin >> x21 >> y21 >> x22 >> y22;
    	if(y11==y12)
        {
    		if(y21==y22)
    		{
    			if(x12>x11)
    			{
    		    	if(x21>x12 && x22>x12)
                    	check_flag=1;
                	else if(x21<x11 && x22<x11)
                    	check_flag=1;
                	else
                    	check_flag=0;
    			}
    			else
    			{
    				if(x21>x11 && x22>x11)
                    	check_flag=1;
                	else if(x21<x12 && x22<x12)
                    	check_flag=1;
                	else
                    	check_flag=0;
    			}
    		}
    		else
            {
                if(x11==x21 && y11==y21)
                    check_flag=0;
                else if(x12==x21 && y12==y21)
                    check_flag=0;
                else if(x11==x22 && y11==y22)
                    check_flag=0;
                else if(x12==x22 && y12==y22)
                    check_flag=0;
                else
                    check_flag=1;
            }
    	}
    	else
        {
            if(x21==x22)
    		{
    		    if(y12>y11)
    			{
    		    	if(y21>y12 && y22>y12)
                    	check_flag=1;
                	else if(y21<y11 && y22<y11)
                    	check_flag=1;
                	else
                    	check_flag=0;
    			}
    			else
    			{
    				if(y21>y11 && y22>y11)
                    	check_flag=1;
                	else if(y21<y12 && y22<y12)
                    	check_flag=1;
                	else
                    	check_flag=0;
    			}
    		}
    		else
            {
                if(x11==x21 && y11==y21)
                    check_flag=0;
                else if(x12==x21 && y12==y21)
                    check_flag=0;
                else if(x11==x22 && y11==y22)
                    check_flag=0;
                else if(x12==x22 && y12==y22)
                    check_flag=0;
                else
                    check_flag=1;
            }
        }
        if(check_flag==0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
