#include<stdio.h>
#include <stdlib.h> //คืออะไรไม่รู้ รู้แต่ว่ามันใช้ในการ Random เลขที่เอามาบวกลบกัน
#include <time.h>
#include<windows.h>

#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)

//พวกนี้เป็นการประกาศฟังก์ชั่น

int PlayMode();     //ฟังก์ชั่นใช้เก็บหน้าจอหลักของเกมส์
int HowToPlay();    //ฟังก์ชั่นแสดงวิธีการเล่น
int MainMenu();     //ฟังก์ชั่นเมนูหลัก
int ExitPro();      //ฟังก์ชั่นใช้ในการออกจากโปรแกรม
int Name();         //ฟังก์ชั่นที่ให้ผู้เล่นกรอกชื่อ
int Winner();       //ฟังก์ชั่นแสดงเมื่อผู้เล่นชนะ
int Die();          //ฟังก์ชั่นแสดงเมื่อผู้เล่นแพ้
int GoToToxin();    //ฟังก์ชั่นเก็บรูปเต่ากำลังบินไปที่ยาพิษ
int GoToApple();    //ฟังก์ชั่นเก็บรูปเต่ากำลังบินไปที่แอปเปิล
int ToxinEating();  //ฟังก์ชั่นเก็บรูปเต่ากินยาพิษ
int AppleEating();  //ฟังก์ชั่นเก็บรูปเต่ากินแอปเปิล
int Welcome();      //ฉากยืนดีต้อนรับ
int ReScore();      //ใช้รีเซ็ตค่าที่เก็บใน CorrectAnswer กับ WrongAnswer ก่อนที่จะเริ่มเกมส์
int AfterEatApple1();
int AfterEatApple2();
int AfterEatToxin1();
int AfterEatToxin2();
int AboutMaker();


//ข้างล้างนี้เป็นการประกาศตัวแปลที่ใช้

char go;
int menu,menu2,menu3,menu4;
int CorrectAnswer,WrongAnswer;
int Answer; //คำตอบที่ผู้เล่นตอบ
int Answer2; //คำตอบที่ถูกต้อง
int Random1,Random2,Random3,Random4,Random5,Random6,Random7,Random8;
int A,B,C,D,E,F,G,H; //ใช้ในการเก็บค่าตัวRandom

char PlayerName[100]; //ประกาศสตริงใช้เก็บชื่อตัวละคร

main()
{

textcolor(10,0);
printf("===============================================================================");
printf("\n=                                                                             =");
printf("\n=   **********   ***         ***         ***                                  =");
printf("\n=   **********   ***          ***       ***      ***                          =");
printf("\n=   ***          ***           ***     ***       ***                          =");
printf("\n=   ***          ***            ***   ***                                     =");
printf("\n=   ********     ***             *******         ***  **    ****  *********   =");
printf("\n=   ********     ***               ***           ***  **   ** **  *********   =");
printf("\n=   ***          ***               ***           ***  **  **  **  **     **   =");
printf("\n=   ***          ***               ***           ***  ** **   **  **     **   =");
printf("\n=   ***          **********        ***           ***  ****    **  *********   =");
printf("\n=   ***          **********        ***           ***  ****    **  *********   =");
printf("\n=                                                                        **   =");
printf("\n=                                                                 **     **   =");
printf("\n=                                                                 *********   =");
printf("\n=                                                                 *********   =");
printf("\n=                                                                             =");
printf("\n=      **                         **     **  ********                         =");
printf("\n=      **                         **     **  ********                         =");
printf("\n=    ******  **    **  **  ***  ******   **  ***                              =");
printf("\n=    ******  **    **  ** **    ******   **  ********                         =");
printf("\n=      **    **    **  ****       **     **  ********                         =");
printf("\n=      **    **    **  **         **     **  ***                              =");
printf("\n=      **    ********  **         **     **  ********                         =");
printf("\n=      **    ********  **         **     **  ********                         =");
printf("\n=                                                                             =");
printf("\n===============================================================================");
textcolor(14,0);
printf("\n_______________________________________________________________________________");
printf("\n\n                            Press Enter to go                                ");
printf("\n_______________________________________________________________________________");
scanf("%c",&go);

system("cls");

printf("\n\n\n\n");
printf("\n                                                                               ");
printf("\n                                                                               ");
printf("\n **         **  *******  **      *******   **********  ****       ****  *******");
printf("\n **         **  *******  **     *********  **********  *****      ****  *******");
printf("\n **         **  **       **     **     **  **      **  ** ***    ** **  **     ");
printf("\n **   **    **  *******  **     **         **      **  **  *** ***  **  *******");
printf("\n **  ****   **  *******  **     **         **      **  **   *****   **  *******");
printf("\n ** **  **  **  **       **     **     **  **      **  **           **  ***    ");
printf("\n ****    *****  *******  ****** *********  **********  **           **  *******");
printf("\n **         **  *******  ******  ******    **********  **           **  *******");
printf("\n\n\n\n");
printf("                                   Loading                                       ");

printf("\n                                |");
    delay(200);
printf("|");
    delay(200);
printf("|");
    delay(200);
printf("|");
    delay(200);
printf("|");
    delay(200);
printf("|");
    delay(200);
printf("|");
    delay(200);
printf("|");
    delay(200);
printf("|");
    delay(200);
printf("|");
    delay(200);
printf("|");
    delay(200);
printf("|");
    delay(200);
printf("|");
printf("\n\n                                   Finish ");
    delay(500);


system("cls");
printf("================================================================================");
printf("\n||                                                                            ||");
printf("\n||                                 Main menu                                  ||");
printf("\n||                                                                            ||");
printf("\n||                              1.Play The Game                               ||");
printf("\n||                                                                            ||");
printf("\n||                              2.How to play                                 ||");
printf("\n||                                                                            ||");
printf("\n||                              3.Exit The Game                               ||");
printf("\n||                                                                            ||");
printf("\n================================================================================\n");
printf("\n                               Select menu : ");
scanf("%d",&menu);

        switch(menu)
            {
                case 1:menu=1;
                        Name();
                        break;
                case 2:menu=2;
                        HowToPlay();
                        break;
                case 3:menu=3;
                        ExitPro();
                        break;
            }


}

HowToPlay()
{
    system("cls");
        {
printf("1.Answer the question to stay in the game");
printf("\n2.If turtle eats apple that means your answer correct,play next question");
printf("\n3.You will win until you answer correct 10 questions”); printf(“\nIf turtle eats toxic that means your answer inccorect");
printf("\n4.If you answer incorrect 3 times,GAME OVER!!!");
}
        printf("\n\n");

printf("\n================================================================================");
printf("\n||                                                                            ||");
printf("\n||                                                                            ||");
printf("\n||                             1.Back to main menu                            ||");
printf("\n||                                                                            ||");
printf("\n||                             2.Exit the game                                ||");
printf("\n||                                                                            ||");
printf("\n||                                                                            ||");
printf("================================================================================\n");
printf("                               Select menu : ");
scanf("%d",&menu2);

    switch(menu2)
            {
                case 1:menu2=1;
                        main();
                        break;
                case 2:menu2=2;
                        ExitPro();
                        break;
            }

}
ExitPro()
{
     return 0;

}
Name()
{
    system("cls");

        printf("     *      \n");
        printf("       *     * \n");
        printf("         *   * \n");
        printf("           * *  \n");
        printf("       * * * *     \n ");
        printf("                Enter name : ");
        scanf("%s",&PlayerName);

        ReScore();

}
ReScore()
{
    CorrectAnswer=0;
    WrongAnswer=0;
    PlayMode();
}

PlayMode()
{
   system("cls");

    printf("===============================================================================");
    printf("\nPlayer Name : %s             Correct Answer : %d  Wrong Answer : %d",PlayerName,CorrectAnswer,WrongAnswer);
    printf("\n===============================================================================");
    textcolor(14,0);
printf("\n===============================================================================");
    textcolor(10,0);
printf("\n                                                                              ");
printf("\n                                                                              ");
printf("\n                                                                              ");
printf("\n                                                                              ");
printf("\n                                                                     +        ");
printf("\n                                                                   +++        ");
printf("\n                                                                   +          ");
    textcolor(12,0);
printf("\n                                                               ***  ***       ");
printf("\n                                                             ************     ");
printf("\n                                                             ************     ");
printf("\n                                                             ************     ");
printf("\n                                                               ********       ");
printf("\n                                                                              ");
printf("\n                                                                              ");
    textcolor(10,0);
printf("\n                                                                              ");
printf("\n                                                                              ");
printf("\n                                                                              ");
printf("\n        _____                                                                 ");
printf("\n       //....+                                                                ");
printf("\n         \\....+                                                              ");
printf("\n        //.....+                                                              ");
printf("\n          \\.....+ x xx                                                       ");
printf("\n             +....+@  @ xx                                                    ");
printf("\n          xx  +...+    @xx     x x x                                          ");
printf("\n         xx  @  +__+ @   xx   x    # x                                        ");
printf("\n        xx @   @   @   @  xx xx       x                                       ");
printf("\n        xx================xx xx   ---x                                        ");
printf("\n           |_|        |_|      x x x                                          ");
printf("\n                                                                              ");
    textcolor(13,0);
printf("\n                                                                              ");
printf("\n                                                                 |***|        ");
printf("\n                                                                 |***|        ");
printf("\n                                                               |*******|      ");
printf("\n                                                              |*********|     ");
printf("\n                                                             |***********|    ");
printf("\n                                                             |___________|    ");
printf("\n                                                             |           |    ");
printf("\n                                                             |   TOXIC   |    ");
printf("\n                                                             |___________|    ");
printf("\n                                                             |***********|    ");
printf("\n                                                             =============    ");
printf("\n                                                                              ");
    textcolor(14,0);
printf("\n===============================================================================");


                srand(time(NULL));
                    Random1= rand( ) % 10;
                    Random2= rand( ) % 40;
                    Random3= rand( ) % 80;
                    Random4= rand( ) % 100;

printf("\n===============================================================================");
printf("\n\n                      Question : %d + %d + %d + %d = ? ",Random1,Random2,Random3,Random4);
printf("\n===============================================================================");

        Answer2=Random1+Random2+Random3+Random4; //คำนวณคำตอบ

printf("\n\n                      Answer : ");
scanf("%d",&Answer); //คำตอบที่ผู้เล่นตอบ

        if(Answer==Answer2)
        {
            printf("\n                        Correct !");
            CorrectAnswer++;
        delay(500);
        GoToApple();
        }
        else
        {
            printf("\n                      Wrong !");
        delay(500);
            printf("\n\n                      Correct Answer is %d",Answer2);
        delay(1000);
            WrongAnswer++;
            GoToToxin();
        }
}
Winner()
{
        system("cls");
    textcolor(14,0);
printf("===============================================================================");
    textcolor(10,0);
printf("\n                                                                               ");
printf("\n                    ***********  ***    ***   ********                         ");
printf("\n                    ***********  ***    ***   ********                         ");
printf("\n                        ***      ***    ***   ***                              ");
printf("\n                        ***      **********   ********                         ");
printf("\n                        ***      **********   ********                         ");
printf("\n                        ***      ***    ***   ***                              ");
printf("\n                        ***      ***    ***   ********                         ");
printf("\n                        ***      ***    ***   ********                         ");
printf("\n                                                                               ");
printf("\n   ***       ***  *******  *****    ***  *****    ***  ********  *********     ");
printf("\n   ***       ***  *******  ******   ***  ******   ***  ********  ***    ***    ");
printf("\n   ***       ***    ***    *** ***  ***  *** ***  ***  ***       ***     ***   ");
printf("\n   ***   *   ***    ***    ***  *** ***  ***  *** ***  ********  ***    ***    ");
printf("\n   ***  ***  ***    ***    ***   ******  ***   ******  ********  **********    ");
printf("\n   ***  ***  ***    ***    ***    *****  ***    *****  ***       *** ***       ");
printf("\n   *** ** ** ***  *******  ***     ****  ***     ****  ********  ***  ***      ");
printf("\n   ****    *****  *******  ***      ***  ***      ***  ********  ***   ****    ");
    textcolor(14,0);
printf("\n                                                                               ");
printf("\n                                                                               ");
printf("\n                          ****        ****        ****                         ");
printf("\n                          ** **      **  **      ** **                         ");
printf("\n                          **  **    **    **    **  **                         ");
printf("\n                          **   **  **      **  **   **                         ");
printf("\n                          **    ****        ****    **                         ");
printf("\n                          **     **          **     **                         ");
printf("\n                          **                        **                         ");
printf("\n                          **         *******        **                         ");
printf("\n                          **         *     *        **                         ");
printf("\n                          **         *     *        **                         ");
printf("\n                          **         *******        **                         ");
printf("\n                          **                        **                         ");
printf("\n                          **                        **                         ");
printf("\n                          ****************************                         ");
    textcolor(10,0);
printf("\n                          ****************************                         ");
printf("\n                          **                        **                         ");
printf("\n                                      %s               ",PlayerName);
printf("\n                          **                        **                         ");
printf("\n                          ****************************                         ");
    textcolor(14,0);
printf("\n===============================================================================");
printf("================================================================================");
printf("||                                                                            ||");
printf("||                                                                            ||");
printf("||                             1.Play Again As same Player                    ||");
printf("||                             2.Play Again As new Player                     ||");
printf("||                             3.Exit The Game                                ||");
printf("||                                                                            ||");
printf("||                                                                            ||");
printf("================================================================================\n");
printf("                               Select menu : ");
scanf("%d",&menu3);

    switch(menu3)
            {
                case 1:menu3=1;
                        ReScore();
                        break;
                case 2:menu3=2;
                        Name();
                        break;
                case 3:menu3=3;
                        ExitPro();
                        break;
            }

}
Die()
{
    system("cls");
    textcolor(14,0);
printf("===============================================================================");
    textcolor(7,0);
printf("\n                                                                               ");
printf("\n                                                                               ");
printf("\n                           *****************************                       ");
printf("\n                          **                           **                      ");
printf("\n                         **                             **                     ");
printf("\n                        **                               **                    ");
printf("\n                       **      *******       *******      **                   ");
printf("\n                      **       *     *       *     *       **                  ");
printf("\n                     **        *     *       *     *        **                 ");
printf("\n                    **         *     *       *     *         **                ");
printf("\n                    **         *******       *******         **                ");
printf("\n                    **                                       **                ");
printf("\n                    **                                       **                ");
printf("\n                    **                                      **                 ");
printf("\n                     **                                    **                  ");
printf("\n                      **                                  **                   ");
printf("\n                       **                                **                    ");
printf("\n                        **                              **                     ");
printf("\n                         *****                      *****                      ");
printf("\n                            **                      **                         ");
printf("\n                            **  ******************  **                         ");
printf("\n                            **                      **                         ");
printf("\n                            **************************                         ");
printf("\n                                                                               ");
printf("\n                                                                               ");
    textcolor(12,0);
printf("\n                                                                               ");
printf("\n     ***     *** ********  ***    ***       ******     *******  ********       ");
printf("\n      ***   ***  ********  ***    ***       *******    *******  ********       ");
printf("\n       *** ***   **    **  ***    ***       ***   **     ***    ***            ");
printf("\n        *****    **    **  ***    ***       ***    **    ***    ********       ");
printf("\n         ***     **    **  ***    ***       ***    **    ***    ********       ");
printf("\n         ***     **    **  ***    ***       ***   **     ***    ***            ");
printf("\n         ***     ********   ********        *******    *******  ********       ");
printf("\n         ***     ********   ********        ******     *******  ********       ");
printf("\n                                                                               ");
    textcolor(14,0);
printf("\n===============================================================================");
printf("\n===============================================================================");
printf("\n||                                                                           ||");
printf("\n||                                                                           ||");
printf("\n||                             1.Play Again As same Player                   ||");
printf("\n||                             2.Play Again As new Player                    ||");
printf("\n||                             3.Exit The Game                               ||");
printf("\n||                                                                           ||");
printf("\n||                                                                           ||");
printf("\n===============================================================================\n");
printf("                               Select menu : ");
scanf("%d",&menu4);

    switch(menu4)
            {
                case 1:menu4=1;
                        ReScore();
                        break;
                case 2:menu4=2;
                        Name();
                        break;
                case 3:menu4=3;
                        ExitPro();
                        break;
            }
}
GoToApple()
{
    system("cls");
    textcolor(14,0);
printf("\n==============================================================================");
    textcolor(10,0);
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                     +      ");
printf("\n                                                                   +++      ");
printf("\n                                                                   +        ");
    textcolor(12,0);
printf("\n                                                               ***  ***     ");
printf("\n                                                             ************   ");
printf("\n                                                             ************   ");
printf("\n                                                             ************   ");
printf("\n                                                               ********     ");
    textcolor(10,0);
printf("\n                        xx  x  x                                            ");
printf("\n                     xx @   @   @xx                                         ");
printf("\n                    xx@   @__ @   xx     x x x                              ");
printf("\n                   xx   @ +  +  @  xx   x    # x                            ");
printf("\n                  xx @  +...+ @   @ xx xx       x                           ");
printf("\n                  xx==+....+========xx xx   ---x                            ");
printf("\n                   //.....+     |_|      x x x                              ");
printf("\n                   \\.....+                                                 ");
printf("\n                  //....+                                                   ");
printf("\n                  \\....+                                                   ");
printf("\n                  -----                                                     ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
    textcolor(13,0);
printf("\n                                                                 |***|      ");
printf("\n                                                                 |***|      ");
printf("\n                                                               |*******|    ");
printf("\n                                                              |*********|   ");
printf("\n                                                             |***********|  ");
printf("\n                                                             |___________|  ");
printf("\n                                                             |           |  ");
printf("\n                                                             |   TOXIC   |  ");
printf("\n                                                             |___________|  ");
printf("\n                                                             |***********|  ");
printf("\n                                                             =============  ");
printf("\n                                                                            ");
    textcolor(14,0);
printf("\n================================================================================");
delay(500);
AppleEating();
}
AppleEating()
{
    system("cls");
     textcolor(14,0);
printf("\n================================================================================");
printf("\n                                                                            ");
    textcolor(10,0);
printf("\n                           _____                                            ");
printf("\n                          //....+                                           ");
printf("\n                            \\....+                                         ");
printf("\n                           //.....+                                  +      ");
printf("\n                             \\.....+ x xx                         +++      ");
printf("\n                               +....+@  @ xx                      +         ");
    textcolor(12,0);
printf("\n                              xx  +...+    @xx     x x x       ***  ***     ");
printf("\n                             xx  @  +__+ @   xx   x    # x   ************   ");
printf("\n                            xx @   @   @   @  xx xx   ____x  ************   ");
printf("\n                            xx================xx xx  |___    ************   ");
printf("\n                               |_|        |_|      x x x       ********     ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
    textcolor(13,0);
printf("\n                                                                            ");
printf("\n                                                                 |***|      ");
printf("\n                                                                 |***|      ");
printf("\n                                                               |*******|    ");
printf("\n                                                              |*********|   ");
printf("\n                                                             |***********|  ");
printf("\n                                                             |___________|  ");
printf("\n                                                             |           |  ");
printf("\n                                                             |   TOXIC   |  ");
printf("\n                                                             |___________|  ");
printf("\n                                                             |***********|  ");
printf("\n                                                             =============  ");
    textcolor(14,0);
printf("\n                                                                            ");
printf("\n================================================================================");
delay(500);
AfterEatApple1();

}
AfterEatApple1()
{
 system("cls");
  textcolor(14,0);
printf("\n================================================================================");
printf("\n                                                                             ");
    textcolor(12,0);
printf("\n                           _____                                             ");
printf("\n                          //....+                                            ");
printf("\n                           \\....+                                           ");
printf("\n                           //.....+                                          ");
printf("\n                            \\.....+ x xx                                    ");
printf("\n                               +....+@  @ xx                                 ");
printf("\n                              xx  +...+    @xx     x x x                     ");
printf("\n                             xx  @  +__+ @   xx   x    # x                   ");
printf("\n                            xx @   @   @   @  xx xx       x                  ");
printf("\n                            xx================xx xx   ---x                   ");
printf("\n                               |_|        |_|      x x x                     ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
    textcolor(13,0);
printf("\n                                                                 |***|       ");
printf("\n                                                                 |***|       ");
printf("\n                                                               |*******|     ");
printf("\n                                                              |*********|    ");
printf("\n                                                             |***********|   ");
printf("\n                                                             |___________|   ");
printf("\n                                                             |           |   ");
printf("\n                                                             |   TOXIC   |   ");
printf("\n                                                             |___________|   ");
printf("\n                                                             |***********|   ");
printf("\n                                                             =============   ");
printf("\n                                                                             ");
    textcolor(14,0);
printf("\n================================================================================");
 delay(500);
 AfterEatApple2();
}
AfterEatApple2()
{
 system("cls");
  textcolor(14,0);
printf("\n================================================================================");
printf("\n                                                                             ");
    textcolor(10,0);
printf("\n                           _____                                             ");
printf("\n                          //....+                                            ");
printf("\n                           \\....+                                           ");
printf("\n                           //.....+                                          ");
printf("\n                            \\.....+ x xx                                    ");
printf("\n                               +....+@  @ xx                                 ");
printf("\n                              xx  +...+    @xx     x x x                     ");
printf("\n                             xx  @  +__+ @   xx   x    # x                   ");
printf("\n                            xx @   @   @   @  xx xx       x                  ");
printf("\n                            xx================xx xx   ---x                   ");
printf("\n                               |_|        |_|      x x x                     ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
printf("\n                                                                             ");
    textcolor(13,0);
printf("\n                                                                 |***|       ");
printf("\n                                                                 |***|       ");
printf("\n                                                               |*******|     ");
printf("\n                                                              |*********|    ");
printf("\n                                                             |***********|   ");
printf("\n                                                             |___________|   ");
printf("\n                                                             |           |   ");
printf("\n                                                             |   TOXIC   |   ");
printf("\n                                                             |___________|   ");
printf("\n                                                             |***********|   ");
printf("\n                                                             =============   ");
printf("\n                                                                             ");
    textcolor(14,0);
printf("\n================================================================================");
 delay(500);

    if(CorrectAnswer==10) //จำนวนข้อที่ต้องตอบถูกจึงจะชนะ
            Winner();
    else PlayMode();

}
GoToToxin()
{
    system("cls");
       textcolor(14,0);
printf("\n================================================================================");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
    textcolor(10,0);
printf("\n                                                                     +      ");
printf("\n                                                                   +++      ");
printf("\n                                                                   +        ");
    textcolor(12,0);
printf("\n                                                               ***  ***     ");
printf("\n                                                             ************   ");
printf("\n                                                             ************   ");
printf("\n                                                             ************   ");
printf("\n                                                               ********     ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
    textcolor(10,0);
printf("\n                        xx  x  x                                            ");
printf("\n                     xx @   @   @xx                                         ");
printf("\n                    xx@   @__ @   xx     x x x                              ");
    textcolor(13,0);
printf("\n                   xx   @ +  +  @  xx   x    # x                            ");
printf("\n                  xx @  +...+ @   @ xx xx       x                |***|      ");
printf("\n                  xx==+....+========xx xx   ---x                 |***|      ");
printf("\n                   //.....+     |_|      x x x                 |*******|    ");
printf("\n                  \\.....+                                     |*********|   ");
printf("\n                  //....+                                    |***********|  ");
printf("\n                 \\....+                                      |___________|  ");
printf("\n                  -----                                      |           |  ");
printf("\n                                                             |   TOXIC   |  ");
printf("\n                                                             |___________|  ");
printf("\n                                                             |***********|  ");
printf("\n                                                             =============  ");
printf("\n                                                                            ");
    textcolor(14,0);
printf("\n================================================================================");

    delay(500);
    ToxinEating();
}
ToxinEating()
{
    system("cls");

    textcolor(14,0);
printf("\n================================================================================");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
    textcolor(10,0);
printf("\n                                                                    +       ");
printf("\n                                                                  +++       ");
printf("\n                                                                  +         ");
    textcolor(12,0);
printf("\n                                                               ***  ***     ");
printf("\n                                                             ************   ");
printf("\n                                                             ************   ");
printf("\n                                                             ************   ");
printf("\n                                                               ********     ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
    textcolor(10,0);
printf("\n                           _____                                            ");
printf("\n                          //....+                                           ");
printf("\n                            \\....+                                         ");
    textcolor(13,0);
printf("\n                           //.....+                              |***|      ");
printf("\n                             \\.....+ x xx                        |***|     ");
printf("\n                               +....+@  @ xx                   |*******|    ");
printf("\n                              xx  +...+    @xx     x x x      |*********|   ");
printf("\n                             xx  @  +__+ @   xx   x    # x   |***********|  ");
printf("\n                            xx @   @   @   @  xx xx   ____x  |___________|  ");
printf("\n                            xx================xx xx  |___    |           |  ");
printf("\n                               |_|        |_|      x x x     |   TOXIC   |  ");
printf("\n                                                             |___________|  ");
printf("\n                                                             |***********|  ");
printf("\n                                                             =============  ");
printf("\n                                                                            ");
    textcolor(14,0);
printf("\n================================================================================");

    delay(500);
    AfterEatToxin1();
}
AfterEatToxin1()
{
    system("cls");
    textcolor(14,0);
printf("\n================================================================================");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
    textcolor(10,0);
printf("\n                                                                    +       ");
printf("\n                                                                  +++       ");
printf("\n                                                                  +         ");
    textcolor(12,0);
printf("\n                                                               ***  ***     ");
printf("\n                                                             ************   ");
printf("\n                                                             ************   ");
printf("\n                                                             ************   ");
printf("\n                                                               ********     ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
    textcolor(13,0);
printf("\n                           _____                                            ");
printf("\n                          //....+                                           ");
printf("\n                            \\....+                                         ");
printf("\n                           //.....+                                         ");
printf("\n                             \\.....+ x xx                                  ");
printf("\n                               +....+@  @ xx                                ");
printf("\n                              xx  +...+    @xx     x x x                    ");
printf("\n                             xx  @  +__+ @   xx   x    # x                  ");
printf("\n                            xx @   @   @   @  xx xx       x                 ");
printf("\n                            xx================xx xx   ---x                  ");
printf("\n                               |_|        |_|      x x x                    ");
printf("\n                                                                            ");
    textcolor(14,0);
printf("\n================================================================================");

    delay(500);
    AfterEatToxin2();
}
AfterEatToxin2()
{
    system("cls");
     textcolor(14,0);
printf("\n================================================================================");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
    textcolor(10,0);
printf("\n                                                                    +       ");
printf("\n                                                                  +++       ");
printf("\n                                                                  +         ");
    textcolor(12,0);
printf("\n                                                               ***  ***     ");
printf("\n                                                             ************   ");
printf("\n                                                             ************   ");
printf("\n                                                             ************   ");
printf("\n                                                               ********     ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
printf("\n                                                                            ");
    textcolor(10,0);
printf("\n                           _____                                            ");
printf("\n                          //....+                                           ");
printf("\n                            \\....+                                         ");
printf("\n                           //.....+                                         ");
printf("\n                             \\.....+ x xx                                  ");
printf("\n                               +....+@  @ xx                                ");
printf("\n                              xx  +...+    @xx     x x x                    ");
printf("\n                             xx  @  +__+ @   xx   x    # x                  ");
printf("\n                            xx @   @   @   @  xx xx       x                 ");
printf("\n                            xx================xx xx   ---x                  ");
printf("\n                               |_|        |_|      x x x                    ");
printf("\n                                                                            ");
    textcolor(14,0);
printf("\n================================================================================");

    delay(500);
    if(WrongAnswer==3) //จำนวนข้อที่ตอบผิดจึงแพ้
        Die();
    else PlayMode();
}

