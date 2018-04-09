#include<stdio.h>
#include<stdlib.h>
#include<time.h>

    int main(void) {

        srand(time(NULL));

        int what = rand();

        int putin;
        int draw = 0;
        int win = 0;

        while(1) {
            printf( "1 = 'Rock', 주먹입니다. \n");
            printf( "2 = 'Scissor', 가위입니다. \n");
            printf("3 = 'paper', 보입니다. \n");
        }

   if(putin == what)
         {
          if(what == 1) {
              printf("바위 내셨는데 비기셨네 에헼ㅋㅋㅋㅋ");
              draw++;
          }

          else if(what == 2) {
              printf("가위 내셨는데 비기셨네 에헼ㅋㅋㅋㅋ");
              draw++;
          }

          else {
              printf("보 내셨는데 비기셨네 에헼ㅋㅋㅋㅋ");
              draw++;
          }

             }

             else if(putin > what)
             {
                 if(putin == 1 && what == 2) {
                     printf("주먹으로 가위 이기셨넹");
                     win++;
                 }

                 else(putin == 2 && what == 3 ) {
                     printF("가위로 보 이기셨넹");
                     win++;
                }

                else {
                printf("보로 바위 이기셨넹");
                win++;
                }
             }


             else {
                if(putin == 1 && what == 3) {
                        printf("너는 바위, 난 보. 내가 이겼지롱");
                        break;
                 }

                 else if(putin == 2 && what == 1) {
                     printf("너는 가위, 나는 주먹. 내가 이겼지롱");
                     break;
                 }

              else {
                     printf("너는 보자기, 나는 가위. 내가 이겼지롱");
                     break;
                 }
                 printf("\n\n");
        }
      printf("\n\n");
      printf("게임의 결과 : %d승, %d무", win, draw);
      return 0;  
        
    }
   
    



