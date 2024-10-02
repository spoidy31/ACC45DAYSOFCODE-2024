#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i;
	float a,b,c;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%f %f %f",&a,&b,&c);
	    a*=100;
	    b*=100;
	    c*=100;
	    a/=101;
	    b/=101;
	    c/=101;
	    if(a>50)
	    printf("A\n");
	    else if(b>50)
	    printf("B\n");
	    else if(c>50)
	    printf("C\n");
	    else
	    printf("NOTA\n");
	}
	return 0;
}