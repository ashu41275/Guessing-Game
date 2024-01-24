#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number,guess,nguess=0;
    srand(time(0));
    number=rand() % 100+ 1;
    //printf("The number is %d\n",number);
    do{
        printf("Guess no between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("Right Answer by taking attempts %d\n",nguess);
            }
            nguess++;
    }while(guess!=number);
    return 0; 
}