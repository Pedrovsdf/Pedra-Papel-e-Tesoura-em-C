#include <stdio.h>
#include <math.h>

int main(){
int n;
float x;

printf("\n\nDigite um numero :\n\n");
scanf("%d", &n);

if (n%3 == 0 || n%5 == 0){
	x = sqrt(n);
	printf("\n\n%f\n\n", x);
}else{
	x = pow(n,3);
	printf("%f", x);
}

return 0;
}
