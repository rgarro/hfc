#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
	printf("The value of INT_MAX is %i\n",INT_MAX);
	printf("The value of INT_MIN if %i\n",INT_MIN);
	printf("An int takes %%z bytes",sizeof(int));
	
	printf("the value of FLT_MAX is %f\n",FLT_MAX);
	printf("the value of FLT_MIN is %.50f\n",FLT_MIN);
	printf("An float takes %%z bytes",sizeof(float));
	
	return 0;
}
