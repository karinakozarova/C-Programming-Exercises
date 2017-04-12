#include <stdio.h>
#include <string.h>

int main() {

    char arr[6] = {'H', 'i', '\0', 'h', 'i', '\0'}; 

    printf("%s\n", arr);
    printf("%zu\n", strlen(arr));
    return 0;
}
