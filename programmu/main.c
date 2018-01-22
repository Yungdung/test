#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A' : printf("You got an A, Good!");
                    break;
        case 'B' : printf("You got a B, Try harder next time");
                    break;
        case 'C' : printf("You got a C, You should've studied harder");
                    break;
        case 'D' : printf("You got a D, :(");
                    break;
        case 'F' : printf(":c");
                    break;
        default: printf("That isn't a grade.");
    }

    return 0;
}
