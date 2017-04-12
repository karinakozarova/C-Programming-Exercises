#include <stdio.h>
#include <string.h>

int main() {
    char str[] = {'h', 'i', '\0', 'h', 'i', '\0'};

    printf("%s\n", str);
    printf("%zu\n", strlen(str));

return 0;
}
