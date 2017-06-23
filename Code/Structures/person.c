#include <stdio.h>
struct person{
	int age;
	int gender; //1 - female, 0 - men(bcs women are always true(right)!!!)
	int accepts_LGBT; // 1 - yes, 0 -no
};

void what_are_they(struct person person1,struct person person2);
void should_we_date(struct person person1,struct person person2);
void sexuality(struct person person1,struct person person2);
int parade_or_not(struct person person);
int make_the_num_positive(int num);

int main()
{
	struct person women;
	struct person men;
	//hard coded values for testing
	women.age = 22;
	men.age = 23;
	
	women.gender = 1;
	men.gender = 0;

	women.accepts_LGBT = 1;
	men.accepts_LGBT = 0;

	what_are_they(women, men);
	should_we_date(women,men);
	sexuality(women,men);
	if(parade_or_not(men)==1) printf("Yessss\n");
	else printf("Nooo\n");

	return 0;
}

void what_are_they(struct person person1,struct person person2){
	//should print if they are both men, women, or man and women
	int count_male = 0,count_female = 0;
	
	if(person1.gender==1) count_female++;
	else count_male++;

	if(person2.gender==1) count_female++;
	else count_male++;	

	if(count_male == 2) printf("Both are male\n");
	else if(count_female == 2) printf("Both are female\n");
	else printf("One is female, one is male\n");
}

void should_we_date(struct person person1,struct person person2){
	
	if((person1.age<=18 && person2.age>=18)||(person1.age>=18 && person2.age<=18)){
		//pedophiles
		printf("Warning! Not a safe relationship. One is underage!\n");
	} else if (person1.age<18 && person2.age<18){
		printf("Both are underage.\n");
	} else{
		int age_difference = person1.age - person2.age;
		
		make_the_num_positive(age_difference); //make it possitive
		
		if (age_difference<11){
			printf("This relationship is all right.\n");
		}else{
			printf("Warning, there is a big age difference.\n");
		}

	}
}

void sexuality(struct person person1,struct person person2){
	if(person1.gender == 1){
		
		//person 1 - woman
		if (person2.gender == 1){
			//both are women
			printf("Lesbians\n");
		}else{
			//one men,one women
			printf("Homo\n");
		}
	}else{
		//one is male
		if (person2.gender == 0){
			//both male
			printf("Gays\n");
		}else{
			//one men,one women
			printf("Homo\n");
		}
	}
}

int parade_or_not(struct person person){
	if(person.accepts_LGBT == 1) {
		return 1; // should
	}else return 0; // not really
}

int make_the_num_positive(int num){
	if(num>0);
	else num *= -1;
	return num;
}