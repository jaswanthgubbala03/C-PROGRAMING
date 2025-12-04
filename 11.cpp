#include <stdio.h>
#include <stdlib.h> 

int main() {
    int A, B;
    if (scanf("%d %d", &A, &B) != 2) 
    {
        return 1; 
    }
    int correct_answer = A + B;
    int vijays_output = A * B;
    int difference = abs(correct_answer - vijays_output);
    printf("%d
", difference);

    return 0;
}

