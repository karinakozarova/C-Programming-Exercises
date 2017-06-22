#include <stdio.h> 
#include <stdlib.h>

int weekday(int day, int month, int year){
	//monday - 1, tuesday - 2,etc...
	if(day<0 || day>31) return -1; //wrong input
	else if(month<0 || month>12) return -1; //wrong input
	else if(year<0) return -1; //wrong input
	else return (day += month < 3 ? year-- : year - 2, 23*month/9 + day + 4 + year/4- year/100 + year/400)%7;
}

void print_weekday_name(int day, int month,int year){
	int result = weekday(day,month,year);
	
	if(result == 1){
	 	printf("Monday");
	}else if(result == 2){
		 printf("Tuesday");
	}else if(result == 3){
		 printf("Wednesday");
	}else if(result == 4){
		 printf("Thursday");
	}else if(result == 4){
		 printf("Friday");
	}else if(result == 6){
		 printf("Saturday");
	}else if(result == 7){
		 printf("Sunday");
	}else printf("Error");
}

void training_days(){
	//reads dates until EOF and counts how much for each day
	int day,month, year;
	int result;
	int Mon = 0, Tues= 0, Wed = 0, Thurs = 0, Fri = 0, Sat = 0, Sun = 0;
	while(scanf("%d:%d:%d",&day,&month,&year)!= EOF){
		result = 0;
		result = weekday(day,month,year);
		if(result+1 == 1){
	 		Mon += 1;
		}else if(result+1 == 2){
			 Tues += 1;
		}else if(result+1 == 3){
			 Wed += 1;
		}else if(result+1 == 4){
			 Thurs += 1;
		}else if(result+1 == 4){
			 Fri += 1;
		}else if(result+1 == 6){
			 Sat += 1;
		}else if(result+1 == 7){
			 Sun += 1;
		}else{
			printf("Error!!! This date was not added\n");
		}
	}
	
	//print how many trainings per month
	printf("Mon: %d\nTues: %d\nWed: %d\nThur: %d\nFri: %d\nSat: %d\nSun: %d\n",Mon,Tues,Wed,Thurs,Fri,Sat,Sun);
	
	
}

int main(){
	printf("Enter the dates you will be training in the dd:mm:yy format\n");
	training_days();
	return 0;
}
