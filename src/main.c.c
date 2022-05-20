#include <stdio.h>

int main(){
    // Get user input
    int input;
    printf("Enter temperature in celciius: ");
    scanf("%d", &input);
    int farenight = input * 9 / 5 + 32;
    printf("%d degrees celsius is %d degrees farenight\n", input, farenight);
}