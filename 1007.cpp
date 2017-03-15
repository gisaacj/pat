//这段代码运行超时  正确做法应该是判断为素数 
#include<stdio.h>
int main(){
	int i,j,k=2,n,a[10000];
	a[0]=2;a[1]=3;
	scanf("%d",&n);
	for(i=2;i<n+1;i++)
		for(j=2;j<i/2+1;j++)
			if(i%j==0)
			break;
			else if(j>i/2-1){
				a[k]=i;
				k++;
			}
			a[k]=0;
			i=k=0;
	while(a[k+1]){
		if(a[k+1]-a[k]==2)
			i++;
		k++;
}
	printf("%d",i);
	return 0;
}
