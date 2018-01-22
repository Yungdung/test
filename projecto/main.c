#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{
    char pass[30];
    int i,len,U=0,l=0,dol=0,num=0;

    printf("Enter a Password with at least 6 characters, one uppercase letter, one lowercase letter, one number and a dollar sign\nPassword: ");
    scanf("%s", pass);

    if(strlen(pass)>=6){
        len=1;
    }

    for(i=1; i<=30; i++){
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
