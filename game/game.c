#include"game.h"
void InitBoard(char board[ROW][COL],int row,int col)  // 初始化数组
{
    int i = 0;
    int j = 0;
    for(i=0;i<row;i++)  // i<3 0 1 2
    {
        for(j=0;j<col;j++)  // i<3 0 1 2  0 0 0 1 0 2 1 0 1 1 1 2 2 0 2 1 2 2
           board[i][j]=' ';
           /* 0   0  1  2
            * 1   0  1  2
            * 2   0  1  2
            */
    }
}
void DisplayBoard(char board[ROW][COL],int row,int col)
{
    for(int i=0;i<row;i++)  // 0 1 2
    {
        for(int j=0;j<col;j++)  // 0 1 2
        {
            printf("%c",board[i][j]);
            if(j<col-1)
            {
                printf("   |");
//              printf(_Format:"-——-|");
            }
            /*   |  |
             * --|--|--
             *   |  |
             * --|--|--
             *   |  |
             */
            /*  __|__|__
             *  __|__|__
             *  __|__|__
            */

        }
        printf("\n");
        if(i<row)    // 0 1 2
        {
            for(int j=0;j<col;j++)
            {
                printf("-——-");
                /*
                 * __|__|__
                 * __|__|__
                 * __|__|__*/
                if(j<col-1) // 0 1
                    printf("|");
            }
            printf("\n");

        }
    }
}
void PlayerMove(char board[ROW][COL],int row,int col)
{
    int x=0;
    int y=0;
    printf("玩家走>");
    while (1)
    {
        printf("下棋的坐标");
        scanf("%d %d",&x,&y);
        if(x>=1&&x<=row||y>=1&&y<=col)
        {
            if(board[x-1][y-1]==' ')
            {
                board[x-1][y-1]='*';
                break;
            }
            else
            {
                printf("输入非法，请重新输入>");
            }
        }
    }
}
void ComputerMove(char board[ROW][COL],int row,int col)
{
    printf("电脑走>\n");
    while(1)
    {
        int x=rand()%row; // 0-2
        int y=rand()%col;// 0-2
        if(board[x][y]==' ')
        {
            board[x][y]='#';
            break;
        }
    }
}
int IsFull(char board[ROW][COL],int row,int col)
{
    int i=0;
    int j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
       {
            if(board[i][j]==' ')
                return 0;
       }
    }

}
char IsWin(char board[ROW][COL],int row,int col)
{
    int i=0;
    //判断三行的
    for(i=0;i<row;i++)
    if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][0]!=' ')
    {
       return board[i][1];
    }
    // 判断三列的
    for(i=0;i<col;i++)
        if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[0][i]!=' ')
        {
            return board[1][i];
        }
    //判断对角线
    if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[0][0]!=' ')
    {
        return board[1][1];
    }
    if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[0][2]!=' ')
    {
        return board[1][1];
    }
    int ret=IsFull(board,row,col);
    {
        if(ret==1)
        {
            return 'Q';
        }
        else
            return 'C';
    }
}
