#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,j,A1,A2,A3,A5,A[5]={0};
	float A4;
	A1=A2=A3=A4=A5=0;
	for(i=0,scanf("%d",&j);i<j;i++){
	scanf("%d",&n);
		switch(n%5){
			case 0:if(n%2==0){A[0]++;A1+=n;}break;
			case 1:A[1]++;A2=A2+((A[1]%2)*2-1)*n;break;
			case 2:A[2]++;A3++;break;
			case 3:A[3]++;A4+=n;break;
			case 4:A[4]++;if(n>A5) A5=n;break;
		}
		if(getchar()=='\n')
			break;
	}
	A4=A4/A[3];
		if(A[0]==0)
			printf("N ");
		else
			printf("%d ",A1);
		if(A[1]==0)
			printf("N ");
		else
			printf("%d ",A2);
		if(A[2]==0)
			printf("N ");
		else
			printf("%d ",A3);
		if(A[3]==0)
			printf("N ");
		else
			printf("%.1f ",A4);
		if(A[4]==0)
			printf("N");
		else
			printf("%d",A5);
} 
