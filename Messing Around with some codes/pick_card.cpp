#include<stdio.h>


void swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

int permute(int ar[],int l,int r){
	int i,j,s=0,flag=0;
	static int count=0;
	if(l==r){
		if(ar[0]==0)
			s+=1;
		else
			flag=1;
		for(j=1;j<=r && flag!=1;j++){
			if(ar[j]>s){
				flag=1;
				break;
			}
			if(ar[j]==0)
				s+=1;
			else
				s+=ar[j];
		}
		if(flag==0)
			count++;
		//printf("%d\n",count );

		return count;
		
	}
	else{
		for(i=l;i<=r;i++){
			swap((ar+l),(ar+i));
			permute(ar,l+1,r);
			swap((ar+l),(ar+i));
		}
	}
}

int main(){
	int t,n,i,j,count,*c=&count;
	printf("Enter test cases\n");
	scanf("%d",&t);
	for(i=0;i<t;i++){
		printf("Enter number\n");
		scanf("%d",&n);
		int ar[n];
		printf("Enter array\n");
		for(j=0;j<n;j++)
			scanf("%d",&ar[j]);
		// printf("%d",
		permute(ar,0,n-1);
	}
 return 0;	
}
