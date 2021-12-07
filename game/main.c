#include "game.h"
void menu()
{
    printf("*************************\n");
    printf("********1、进去游戏********\n");
    printf("********0、退出游戏********\n");
}
void game()
{
//    存储数据-二维数组
    char board[ROW][COL];
//    初始化棋盘-打印数组的内容
   InitBoard(board,ROW,COL);
//   显示棋盘
   DisplayBoard(board,ROW,COL);
   char ret=0; // 接受游戏状态
   while(1)
   {
       // 玩家走
       PlayerMove(board,ROW,COL);
       DisplayBoard(board,ROW,COL);
       ret=IsWin(board,ROW,COL);
               if(ret!='C')
               {
                   break;
               }
       // 电脑走
       ComputerMove(board,ROW,COL);
       DisplayBoard(board,ROW,COL);
       ret=IsWin(board,ROW,COL);
       if(ret!='C')
       {
           break;
       }
   }
       if(ret=='*')
       {
           printf("player is winner\n");
       }
       else
           if(ret=='#')
       {
           printf("computer is winner\n");
       }
       else
       {
           printf("the game is deuce\n");
       }
       DisplayBoard(board,ROW,COL);



}
int main()
{
    int input=0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请输入>");
        scanf("%d",&input);
        switch (input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                break;
        }
    } while (input);//当1为真循环，当0循环为假，跳出循环
    return 0;
}