#include <stdio.h>

void main () {
	int number;
	int printing = 0;
  int	random_number = 5;
    for (; ;) {
	    	    scanf("%d",&number);
	    	    printing = 0;
		    	if( number == random_number ){
		    		break;
		    	}else if (number<random_number){
		    				printing = 1;
		    	} else {
		    				printing = 2;
		    	}
		    	if (printing==1){
		    		printf("Smaller");
		    	} else{
		    	printf("Bigger");
		    	}
    }
    printf("Winner");
    printing++;
}


