#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{
    char pass[30];
    int i,len,U=0,l=0,dol=0,num=0;

    printf("Requirements for a valid password:\n");
    printf("1. Contain at least one uppercase letter.\n");
    printf("2. Contain at least one lowercase letter.\n");
    printf("3. Contain at least one $ sign.\n");
    printf("4. Contain at least one number.\n");
    printf("5. Contain at least 6 characters\n");
    printf("6. Contain no more than 30 characters.\n\n");

    printf("Enter Password: ");
    scanf("%s", pass);

    if(strlen(pass)>=6){
        len=1;
    }

    for(i=0; i<=strlen(pass); i++){
        if(isupper(pass[i])){
            U+=1;
        }

        if(islower(pass[i])){
            l+=1;
        }

        if(pass[i]=='$'){
            dol+=1;
        }

        if(isdigit(pass[i])){
            num+=1;
        }
    }

    if(len==1 && U>=1 && l>=1 && dol>=1 && num>=1){
        printf("\n\nThe password you have entered meets the criteria.\n\n");
    }
    else{
        printf("\n\nThe password doesn't meet the criteria please re-enter it.\n\n");
    }
   return 0;

}
