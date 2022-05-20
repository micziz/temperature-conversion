#include <stdio.h>

int main(){
    // Get user input
    int input;
    printf("Enter temperature in farenight: ");
    scanf("%d", &input);
    int celsius = (input - 32) * 5 / 9;
    printf("%d degrees farenight is %d degrees celsius\n", input, celsius);
}