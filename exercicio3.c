#include <stdio.h>

int main(){
	int maior, x;

	scanf("%d", &x);
	maior = x-1;

	while(x != 0){
		
		if(x > maior){
			maior = x;
		}
		scanf("%d", &x);	
	}   
	printf("Maior = %d\n", maior);

    return 0;
}
