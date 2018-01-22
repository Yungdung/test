
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int i, total=0, average;
    int meatballs[5];

    for(i=1; i<=5; i++){
        printf("How many meatballs did you eat on day %d?", i);
        scanf("%d", &meatballs[i]);
    }

    for(i=1; i<=5; i++){
        total+=meatballs[i];
    }

    average=total/5;

    printf("You ate a total of %d meatballs. You're average is %d per day.", total, average);
}
