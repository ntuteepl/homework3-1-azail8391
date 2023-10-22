#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 main()    {
    int s1, d1, s2, d2, s3, d3;
    int c, n = 0;
    scanf("%d%d%d%d%d%d", &s1, &d1,&s2, &d2, &s3, &d3);

   for(int i = 1; i < 25 ; i++){
         if(i == d1){
            n += 1;

         
            }
        if(i == d2){
            n += 1;
           }
        if(i == d3){
         
         n += 1;
        }

        if(i == s1){
            if(n == 0){
                c += 1;
            }
            else{
              n -= 1;
            }
        }
        if(i == s2){
            if(n == 0){
               c += 1;
            }
            else{
               n -= 1;
            }
        }
        if(i == s3){
            
         
            if(n == 0){
                c += 1;
              }
              else{
               
             n -= 1;
             }
         }
      }

    printf("%d\n", c);

 
 }
