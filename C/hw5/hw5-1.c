#include<stdlib.h>
#include<stdio.h>

int f(int);
int main(){
	int a;
	scanf("%d",&a);
	printf("%d\n",f(a));
	return 0;
}

int f(int c){
	int *farr=malloc((c+3)&sizeof(int));
	if(*(farr+c)==0&&c!=0)
		f(c-1);
	if(c>=3)
		*(farr+c)=*(farr+c-1)]+*(farr+c-2)+*(farr+c-3);
	else *(farr+c)=c;
	return *(farr+c);
}
