#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 main()
void printString(char String[], bool TurnLine){
    for(int i; i < strlen(String); i ++){
        printf("%c", String[i]);
    }
    if(TurnLine) printf("\n");
}

{
    int s1, d1, s2, d2, s3, d3;
    int stie, nuu = 0;
    scanf("%d%d%d%d%d%d", &s1, &d1,&s2, &d2, &s3, &d3);

    for(int i = 1; i < 25 ; i++){
        if(i == d1 || i == d2 || i == d3){
            nuu += 1;
        }
        if(i == s1 || i == s2 || i == s3){
            if(nuu == 0){
                stie += 1;
            }else{
               nuu -= 1;
           
            }
         }
   
    
    
    }

    printf("%d\n", count);
}
