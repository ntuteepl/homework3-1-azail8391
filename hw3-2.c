#include <stdio.h>
#include <stdlib.h>

 main() {
 int s1,d1,s2,d2,s3,d3;
    scanf("%d%d%d%d%d%d", &s1,&d1,&s2,&d2,&s3,&d3);
    int car=1;
    if (d1>s2||d1>s3){
            car+=1;

        if (d1>s3){

            car+=1;
            printf("%d",car);
        }
        else {

            printf("%d",car);

        }



    }
    else if (d1>s2&&d1>s3) {
         car+=2;




            printf("%d",car);




    }



    else {
          if (s3>s2){
            if (s3>d2){

                car+=1;
                     printf("%d",car);}
                else{
                       printf("%d",car);


                }





            }
            else {
                if (d2>s3){

                   car+=1;
                     printf("%d",car);
                }
                else {

                    printf("%d",car);


                }


            }


    }




 }

