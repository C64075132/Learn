#include<stdio.h>
#include<stdlib.h>

unsigned long fnum(int a);
unsigned long fact(unsigned long a);
int main(int argc,char* argv[]){
	switch(atoi(argv[1])){
		case 1:	 printf("fnum=%lu\n",fnum(atoi(argv[2])));
			break;
		case 2:	 printf("fact=%lu\n",fact(atoi(argv[2])));
			break;
		default: puts("end");	
	}
	return 0;

}

unsigned long fact(unsigned long a){
	if(a<=1) return 1;
	else	return a*fact(a-1);
}

unsigned long fnum(int a){
	if(a==0||a==1) return a;
	else return fnum(a-1)+fnum(a-2);
}
