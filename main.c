#include <stdio.h>
#include <stdlib.h>

int main()
{
    int insert;

    printf("---------------------------------\n");
    printf("   vending machine for drinks\n");
    printf("  Made by Matteo Pirchner-Gratz\n");
    printf("---------------------------------\n\n");

    printf("!!IMPORTANT!!\n");
    printf("This machine only takes 1 euro coins! Thank You!\n\n");

    printf("Please insert your coin (in numbers): ");
    scanf("%i", &insert);

    if(insert == 1){
        printf("\nThanks for your purchase!\n");
        printf("Please take your drink out of the opening down below!\n\n");
    }
    else{
        printf("\nWrong coin!\n\n");
    }

    return 0;
}
