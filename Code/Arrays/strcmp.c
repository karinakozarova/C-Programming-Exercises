#include <stdio.h>
#include <string.h>

int main() {
	char word[200], word2[200];

	fgets(word, 200, stdin);
	fgets(word2, 200, stdin);
	
	//printf("%s\n", word);
	//printf("%s\n", word2);
		
	int min_len = strlen(word2);
	int diff = 1;
	if (strlen(word) < strlen(word2)) {
		min_len = strlen(word);
		diff = -1;
	}

	int compare = 0;
	for (int i = 0; i < min_len; i++) {
		if (word[i] > word2[i]) {
			compare = -1;
			break;	
		}
		else if (word[i] < word2[i]) {
			compare = 1;
			break;
		}
	}
	
	if (compare == 0) {
		if (diff < 0) {
			compare = 1;
		}
		else if (diff > 0) {
			compare = -1;
		}
	}
	

	printf("%d\n", compare);
		
	return 0;
}
