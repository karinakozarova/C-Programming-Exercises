#include <stdio.h>

void sum(int*, int, int*);
void avrg(float*, int, float*);
int str_cmp(char*, char*);

int main() {

	int array[] = {2, 4, 6, 8};
	int sumArr;	
	
	sum(array, 4, &sumArr);	

	printf("%d\n", sumArr);

	float farr[] = {1.5, 2.2, 1.8, 2.5, 1.3};
	float favrg;

	avrg(farr, 5, &favrg);

	printf("%f\n", favrg);

	char s1[] = "Gosho";
	char s2[] = "Gorge";

	printf("%d\n", str_cmp(s1, s2));

	return 0;
}

int str_cmp(char *str1, char *str2) {
	for(int i = 0; i < strlen(str1); i++) {
		if (str1[i] < str2[i]) {
			return -1;
		}
		else if(str1[i] > str2[i]) {
			return 1;
		}
	}

	return 0;

}

void avrg(float *arr, int size, float *avrg) {
	float sum = 0;
	
	for(int i = 0; i < size; i++) {
		sum += arr[i];
	}

	*avrg = sum / size;
}

void sum(int *arr, int size, int *sum) {
	*sum = 0;
	for(int i = 0; i < size; i++) {
		*sum = *sum + arr[i];
	}	
}






