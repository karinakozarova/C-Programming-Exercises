#include <stdio.h>

int last_index_of(int[], int, int);

int main() {
  int element_count, elements[20];
  int search_for;

  scanf("%d", &element_count);
  for (int i = 0; i < element_count; i++) {
    scanf("%d", &elements[i]);
  }
  scanf("%d", &search_for);

  printf("%d\n", last_index_of(elements, search_for, element_count));

  return 0;
}

int last_index_of(int haystack[100], int needle, int n) {
  int max_index = -1;

  for (int i = 0; i < n; i++) {
    if (haystack[i] == needle) {
      max_index = i;
    }
  }

  return max_index;

  // for (int i = n - 1; i >= 0; i--) {
  //   if (haystack[i] == needle) {
  //     return i;
  //   }
  // }
  // return -1;
}
