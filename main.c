#include <stdio.h>
#include <stdlib.h>

int main() 
{
	
    int z = 58;
    int x;
    printf("Digite numero de 1 ate 100\n");
    while(x!=z){
	printf(" Tente adivinhar o numero\n");
    scanf("%d", &x);
    
		if(x>z){
			printf("Foi muito alto\n");
		}else if(x<z){
			printf("Foi muito baixo\n");
			
		}else {
		
			printf("Parabens acertou \n");
		}
		x++;
	
	
		
	                }

	

    
    
    return 0;
}
