#include <stdio.h>

#define BUFFER_SIZE 20

int main(){
    char buffer[BUFFER_SIZE];
    printf("Enter name: ");
    scanf("%s", buffer);
    printf("Hello, %s ", buffer);
    return 0;
}
