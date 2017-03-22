#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int i=0,j=0,k=0,flag=0;
	char a[1000],c[1000];
	int b[1000],d[500];
	while((a[i++]=getchar())!='\n');
	for(i=0;i<strlen(a);i++){
		switch(a[i]){
			case ' ':memset(c,' ',sizeof(c));k=0;break;
			default :
				c[k]=a[i];
				k++;
				c[k]='\0';
				if(a[i+1]==' '||a[i+1]=='\0'){
				b[j]=atoi(c);
				j++;}	
			}
	}
	for(i=0;i<j/2-1;i+=2){
		
		if(b[i+1]==0)
		printf("0");
	printf("%d %d ",b[i]*b[i+1],b[i+1]-1);
	}
	if(b[i]*b[i+1]==0&&i==2)
	return 0;
	printf("%d 0",b[i]*b[i+1]);
}
