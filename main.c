//#include <stdio.h>
//#include <stdlib.h>
//struct Node
//        {
//        int data;
//        struct Node *next;
//};
// struct Node  *creatList() // 创建一个链表，首结点
//         {
//           struct Node *headNode=(struct Node *)malloc(sizeof(struct Node));
//           headNode->next=NULL;
//           return headNode;
//         }
//struct Node *creatNode(int data)  // 通过这个函数创建一个结点
//        {
//           struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
//           newNode->data=data;
//           newNode->next=NULL;
//           return newNode;
//        }
//void printList(struct Node *headNode)
//        {
//          struct Node *pMove=headNode->next;
//          while(pMove)
//          {
//              printf("%d",pMove->data);
//              pMove=pMove->next;
//          }
//            printf("\n");
//        }
//        void insert_newNode_ByRear(struct Node *headNode,int data)// 尾插法
//                {
//     struct Node*newNode=creatNode(data);
//     while(headNode->next)
//     {
//         headNode=headNode->next;
//     }
//     newNode->next=NULL;
//     headNode->next=newNode;
//                }
//
//void insert_newNode_ByHead(struct Node *headNode,int data) // 头部插法
//        {
//           struct Node *newNode= creatNode(data);
//           newNode->next=headNode->next;
//           headNode->next=newNode;
//        }
//void Delete(struct Node *headNode,int data)
//{
//     struct Node * posNodeFront=headNode;
//    struct Node *posNode=headNode->next;
//    while(posNode->data!=data)
//    {
//        posNodeFront=posNode;
//        posNode=posNodeFront->next;
//        if(posNode==NULL)
//        {
//            printf("not find the data");
//            return;
//        }
//    }
//    posNodeFront->next=posNode->next;
//    free(posNode);
//}
//int main()
//{
//    struct Node *list=creatList();
//    insert_newNode_ByHead(list,1);
//    insert_newNode_ByHead(list,2);
//    printList(list);
//    insert_newNode_ByRear(list,3);
//    insert_newNode_ByRear(list,4);
//    printList(list);
//    Delete(list,2);
//    printList(list);
//    return 0;
//}
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}Node;
Node *CreatList()
{
    Node *HeadNode=(Node*) malloc(sizeof(Node));
    HeadNode->next=NULL;
    return HeadNode;
}
Node *CreatNode(int data)
{
    Node *NewNode=(Node*) malloc(sizeof(Node));
    NewNode->data=data;
    NewNode->next=NULL;
    return NewNode;
}
void Insert_Data_By_Head(Node *HeadNode,int data)
{
    Node *NewNode= CreatNode(data);
    NewNode->next=HeadNode->next;
    HeadNode->next=NewNode;
}
void Insert_Data_By_Rear(Node *HeadNode,int data)
{
    Node *NewNode= CreatNode(data);
    while(HeadNode->next)
    {
        HeadNode=HeadNode->next;
    }
    NewNode->next=NULL;
    HeadNode->next=NewNode;
}
void PrintList(Node *HeadNode)
{
    Node *pMove=HeadNode->next;
    while (pMove)
    {
        printf_s("%d\t",pMove->data);
        pMove=pMove->next;
    }
    printf_s("\n");
}
void Delete_Data(Node *HeadNode,int data)
{
    Node *PosNodeFront=HeadNode;
    Node *PosNode=HeadNode->next;
   while(PosNode->data!=data)
    {
       PosNodeFront=PosNode; // PosHeadFront 0-1
       PosNode=PosNodeFront->next; // PosHead 1-2  PosHeadFront=1
       if(PosNode==NULL)
        {
             printf("Not find the data");
            printf("\n");
        }
    }
     PosNodeFront->next=PosNode->next;
     free(PosNode);
}
int main()
{
    Node *list=CreatList();
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    Insert_Data_By_Rear(list,a);
    Insert_Data_By_Rear(list,b);
    Insert_Data_By_Rear(list,c);
    PrintList(list);
    scanf("%d",&d);
    Delete_Data(list,d);
    PrintList(list);
    return 0;
}