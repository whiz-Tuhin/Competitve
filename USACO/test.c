#include <iostream>
// #include <>
#include <stdlib.h>


using namespace std;

int check_reflection_90(int A[10][10],int B[10][10],int N){
	int i = 0,j = 0,flag = 1;

	for(i = 0;i < N;i++){
		for (j = 0; j < N; j++)
		{
			if(A[N-1-j][N-1-i] != B[i][j]){
				flag = 0;
				break;
			}

		}
	}

	if(flag == 0){
		//printf("not matched with reflection + rotation(90)");
		return -1;
	}

	else{
		return 5;
	}
}

int check_reflection(int A[10][10],int B[10][10],int N){

    int i = 0,j = 0,var = 0,flag =1;
		int temp[10][10];


		for(i = 0;i < N;i++){
			for(j = 0;j < N;j++){
				temp[i][j] = A[i][j];
			}
		}

		// printf("the matrix when first enters the function\n");
		//
		//
		// for(i = 0;i < N;i++){
		// 			for (j = 0;j < N;j++) {
		//
		// 					printf("%d ",A[i][j]);
		// 			}
		// 			printf("\n");
		// }

    for (i = 0; i < N; i++)
    {
    	for (j = 0; j < N; j++)
    	{
    	 	if(A[i][N-1-j] != B[i][j])

    	 	{
    	 		flag = 0;
    	 		break;
    	 	}
    	}
    }

    if(flag == 0){
    	// printf("not a reflection");

    	int result = check_reflection_90(temp,B,N);
    	return result;
    }

    else{
    	return 4;
    }
}


int check_index(int A[10][10],int B[10][10],int N){

	int temp[10][10];
	int i = 0, j = 0;
    int flag = 1;
    static int count = 0;

	for(i = 0;i < N;i++){
		for(j = 0;j < N;j++){
			temp[i][j] = 0;
		}
	}


	// printf("the matrix when enters the func\n");
	//
	// for(i = 0;i < N;i++){
	// 	for(j = 0;j < N;j++){
	// 		printf("%d ",A[i][j]);
	// 	}
	// 	printf("\n");
	// }


    //allocate_memory(A,B,N);

    for(i = 0;i < N;i++){
        for(j = 0;j < N;j++){
				 if( A[i][j] != B[i][j]) {          //rotation of the matrix 90
				        flag = 0;
				        break;
                }
        }
    }

    // printf("%d ",flag);

    //printf("%d",flag);

    if(flag == 1 && count==0){
    	return 6;
    }

    if(flag==1 && (count>0 && count<4)){
    	return count;
    }

    else{

    	for(i = 0;i < N;i++){
    		for(j = 0;j < N;j++){
    			temp[i][j] = A[N-1-j][i];
    		}
    	}

    	count++;
    	// printf("%d",count);

    	if(count <= 4){
    		int result = check_index(temp,B,N);
    		return result;
    	}

    	else{
        	int val = check_reflection(A,B,N);
        	return val;
    	}

    }

}

int main( ){

    int N,i = 0,j = 0;
    cin>>N;


    int input_mat[10][10] ,output_mat[10][10];

    //printf("enter the input matrix\n");

    for(i = 0;i < N;i++){
        for(j = 0;j < N;j++){
            cin>>input_mat[i][j];
            // cin>>("%c",&ch);
        }
    }

    //printf("enter the output matrix\n");

    for(i = 0;i < N;i++){
        for(j = 0;j < N;j++){
            cin>>output_mat[i][j];
            // cin>>("%c",&ch);
        }
    }


     int result = check_index(input_mat,output_mat,N);

		 if(result == -1){
			 printf("%d\n",7);
		 }

		 else
     	printf("%d\n",result);

    return 0;
}
