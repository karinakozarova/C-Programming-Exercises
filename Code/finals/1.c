#include <stdio.h>
#include <stdlib.h> 

int main(){	

	char *character;
	int i = 0;
	int size = 10;
	character = malloc(sizeof(character)*size);
	while(scanf("%c",(character+i))!= EOF){
		i++;
		if(i == size){
			 size *=2 ;
			 character = realloc(character,size);
		 }
		
	}
	
	char printing[i];
	for(; i>=0;i--){
		printf("%c",*(character + i));
	}
free(character);	
}
