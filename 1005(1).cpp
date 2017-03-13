#include<stdio.h>
int main(){
	int m,j,n,i=0,flag[100]={0};
	scanf("%d",&j);
	for(m=0;m<j;m++){
	scanf("%d",&n);
	while(n!=1){
		flag[n]+=1;
		n=n%2==1?(n*3+1)/2:n/2;
		i++;
	}
}
	for(i=0;i<100;i++)
	if(flag[i]==1)
	printf("%d ",i);
} 
