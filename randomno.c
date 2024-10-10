#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number
    int rn = (rand() % 100) + 1;

    // Print the random number
    printf("Random number: %d\n", rn);

    int n=1;
    int a;
    int ng=1;
    printf("Guess the random between 1 to 100: ");
    scanf("%d", &a);

    while (1)
    {
        if(a==rn){
            printf("YAY! You won in %d guesses.", ng);
            break;
        } 

        else if(a>rn){
            printf("Lower Number Please!\n");
            ng++;
        }
        else{
            printf("Higher Number Please!\n");
            ng++;
        }
        printf("Try Again: ");  
        scanf("%d",&a);

    }
    

    return 0;
}
