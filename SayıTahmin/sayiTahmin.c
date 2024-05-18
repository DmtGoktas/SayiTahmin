/*
 
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char **argv)
{
	int random, try = 0;
	int num;
	int min = 0 , maks = 100;
	srand(time(NULL));
	random = rand() % 100;
	
	//printf("Sayi giriniz");
	//scanf("%d",&random);
	
	do{
		printf("bir sayi giriniz: ");
		scanf("%d", &num);
		
		if(num < random)
		{
			if(num < min)
			{
				printf("\nLutfen %d den yuksek ",min);
			}
			else
			{
			printf("\ntahmininiz dusuk.");
			printf("%d(dahil) ile %d arasinda ",num+1 , maks);
			}
			min = num+1;
		}
		else if(num > random)
		{	
			//~ if(num < num-1)
			//~ {
				//~ printf("Lutfen %d den dusuk ",maks);
			//~ }
			//~ else
			//~ {
				printf("\ntahmininiz yuksek.");
				printf("%d ile %d (dahil) arasinda ", min, num - 1);
			//~ }
			maks = num -1;
	    }		    
		try++;
		
	}while(num != random);
	
	puts("\nTahmininiz dogru.");
	printf("%d defa denediniz",try);
	return 0;
}

