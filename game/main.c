#include "game.h"
void menu()
{
    printf("*************************\n");
    printf("********1����ȥ��Ϸ********\n");
    printf("********0���˳���Ϸ********\n");
}
void game()
{
//    �洢����-��ά����
    char board[ROW][COL];
//    ��ʼ������-��ӡ���������
   InitBoard(board,ROW,COL);
//   ��ʾ����
   DisplayBoard(board,ROW,COL);
   char ret=0; // ������Ϸ״̬
   while(1)
   {
       // �����
       PlayerMove(board,ROW,COL);
       DisplayBoard(board,ROW,COL);
       ret=IsWin(board,ROW,COL);
               if(ret!='C')
               {
                   break;
               }
       // ������
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
        printf("������>");
        scanf("%d",&input);
        switch (input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("�˳���Ϸ\n");
                break;
            default:
                break;
        }
    } while (input);//��1Ϊ��ѭ������0ѭ��Ϊ�٣�����ѭ��
    return 0;
}