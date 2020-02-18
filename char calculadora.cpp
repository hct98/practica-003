#include<stdio.h>
#include<stdlib.h>
int main(){
	float a,b,c;
	char opt;
	printf("a:suma\nb:Resta\nc:Mult\nd:div");
	printf("\nseleccione un comando:");
	opt=getchar();
	printf("introduce el primer valor:");
	scanf("%f",&a);
	printf("introduce el segundo valor:");
	scanf("%f",&b);
	switch(opt){
		case 'A':
	    case 'a':
		    c=a+b;
		    break;
		case 'B':
		case 'b':
		   c=a-b;
		   break;
		case 'C':
	    case 'c':
	    	c=a*b;
	    	break;
	   case 'D':
	   	case 'd':
	   		while(b==0){
	   			printf("error,el valor debe ser diferente a 0");
	   			printf("\nIntroduce el segundo valor:");
	   			scanf("%f",&b);
	   			 
	   		}
	   		c=a/b;
	   		break;
	   		default:
	   			printf("error,opcion invalida");
	   			opt='R';	
	}
	if(opt!='R'){
		printf("el resultado es:%.3f",c);
	}
	
	
	
}
