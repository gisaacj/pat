#include<stdio.h>
int main(){
	char *num[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int s=0,i=0,j=0,n[100];
	while((n[i]=getchar())!='\n'){
		n[i]-='0';
		s+=n[i];
		i++;
	}
	while(s!=0){
		n[j]=s%10;
		s/=10;
		j++;
	}
	for(i=j-1;i>0;i--)
	printf("%s ",num[n[i]]);
	printf("%s",num[n[0]]);
} 
