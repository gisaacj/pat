#include<stdio.h>
int main(){
	int i=0,j=0,k=2,m,n,num[10001];
	num[1]=2;num[2]=3;
	for(i=5;i<104730;i+=2){
		for(j=2;j<i;j++){
			if(i%j==0)
				break;
			else if(i!=j+1)
				continue;
			else{
				k++;
				num[k]=i;
			}
		}
	}
	scanf("%d %d",&m,&n);
	for(i=m;i<n;i++)
		printf("%d%c",num[i],(i-m)%10==9?'\n':' ');
			printf("%d",num[i]);
}
