#include <stdio.h>

float total = 0.0;
short count = 0;
short tax_percent = 6;

float add_with_tax(float f){
	float tax_rate = 1 + tax_percent / 100.0;
	total = total + (f * tax_rate);
	count = count + 1;
	return total;
}

int main(int argc, char *argv[]){
	float val;
	printf("Price of an Item:");
	while (scanf("%f",&val)==1) {
		printf("Total so far: %.2f\n",add_with_tax(val));
		printf("Price of an Item:");
	}
	printf("\nFinal total: %.2f\n",total);
	printf("\nNumber of Items: %hi\n",count);
	return 0;
}