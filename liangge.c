//#include <stdio.h>
//#include<string.h>
//int main()
//{
//   double num;
//   printf("please enter the number to judge whether is positive or negative or zero");
//    scanf("%lf",&num);
//    if(num>0)
//    {
//        printf("your entering the number is positive");
//    }
//    else if(num<0)
//    {
//        printf("your entering the number is negative");
//    }
//    else if(num==0)
//    {
//        printf("your entering the number is zero");
//    }
//    return 0;
//}
//int main()
//{
//    int i,j,sum;
//
//    for(i=1;i<=9;i++)
//    {
//        printf("\n");
//        for(j=1;j<=i;j++)
//        {
//            sum=i*j;
//            printf("%d*%d=%d\t",i,j,sum);
//        }
//    }
//}
//int main()
//{
//    int t1,t2,t3,i,j,k;
//    t1=0; t2=1;
//   int nextTerm=t1+t2;// 1
//    printf("enter your number terms");
//    scanf("%d",&k);
//    printf("%d\n%d\n",t1,t2);
//    for(i=3;i<=k;i++)
//    {
//      t1=t2;//0
//      t2=nextTerm;//1
//      nextTerm=t1+t2;
//        printf("%d\n",nextTerm);
//
//    }
//
//
//
//
//
//}
// ������С��Լ�� 21 18 ֻҪ��18�ݼ�����û�й�Լ���Ϳ���
//int main()
//{
//    int i , j, a, b;
//    printf("enter two numbers to count their GCD(greatest common divisor)");
//    scanf("%d %d",&a,&b);
//    if(a>b)
//    {
//        for(i=b;i<=b;i--)
//        {
//
//            if(a%i==0&b%i==0)
//            {
//                printf("%d\n",i);
//                break;
//         }
//        }
//    }
//    else
//    {
//        for(i=a;i<=a;i--)
//        {
//            if(a%i==0&&b%i==0)
//            {
//                printf("%d\n",i);
//                break;
//
//            }
//
//        }
//    }
//}
// ��С������=��������˺�������Լ��
//int main()
//{
//  int a,b,i,k;
//    printf("enter two numbers to count their GCD and LMD");
//    scanf("%d %d",&a,&b);
//    if(a>b)
//    {
//        for(i=b;i<=b;i--)
//        {
//            if(a%i==0&&b%i==0)
//            {
//                printf("THE GCD=%d\n",i);
//                break;
//            }
//        }
//        k=a*b/i;
//        printf("THE LCM=%d",k);
//    }
//    else
//        if(a<b)
//        {
//            for(i=a;i<=a;i--)
//            {
//                if(a%i==0&&b%i==0)
//                {
//                    printf("THE GCD=%d\n",i);
//                    break;
//                }
//            }
//            k=a*b/i;
//            printf("THE LCM=%d",k);
//        }
//}
//#include "string.h"
//int my_strlen(char*str)
//{
//    if(*str!='\0')
//    {
//        return 1+ my_strlen(str+1);
//    }
//    else
//        return 0;
//    /*    ��⣺��ԭ��my_strlen��"bit\0"�� ��󷵻ص�ֵ
//                      1+my_strlen("it\0")
//                      1+1+my_strlen("t\0")
//                      1+1+1+my_strlen("\0")
//               �� ����*strȡ�׵�ַ�����ǡ�b������Ϊb������\0���Խ�ȥif[1+my_strlen(str+1)],str+1����ǰ��һλҲ���ǡ�i��
//                  �Դ˷������ƽ�else����'\0'��ͽ�������ȥ����ʱ��return 1+�Ϳ�ʼ����˳��1+0=1��������1+1=2��������1+2=3,��󷵻ص�������
//                    ˳��return 1+����������return 1+���������� return 1+���������� return 0
//                    ���������ޡ�������1+��=1��������1+1=2��������1+2=3����������󷵻�ȥ*/
//
//}
//
//int main()
//{
//    char ch[]="bit";
//    printf("%d\n", my_strlen(ch));
//
//int my_strlen(char *st)
//{
//    int count=0;
//    while(*st>=1)
//    {
//        if(*st>=65&&*st<=90)
//        {
//            count++;
//        }
//        else if(*st>=97&&*st<=122)
//        {
//            count++;
//        }
//        *st++;
//    }
//    return count;
//}
//int main()
//{
//    char str[]={};
//    scanf("%s",str);
//    {
//         my_strlen(str);
//         printf("%d", my_strlen(str));
//    }
//    return 0;
//}
//void my_bulle(int ch1[],int sz)
//{
//
//    int i,j;
//    for(i=0;i<sz-1;i++)
//    {
//        for(j=0;j<sz-1-i;j++)
//            if(ch1[j]>ch1[j+1])
//            {
//                     int tmp=0;
//                     tmp=ch1[j];
//                     ch1[j]=ch1[j+1];
//                     ch1[j+1]=tmp;
//            }
//
//    }
//
//}
//
//int main()
//{
//    int arr[10]={9,8,2,3,5,4,7,0,1,6};
//    int sz= sizeof(arr)/ sizeof(arr[0]);// �������ַ������Ե����ַ�����40/4=10��
//    my_bulle(arr,sz);
//    for(int i=0;i<10;i++)
//    {
//        printf("%d",arr);
//    }
//
//
//
//}

//int main()
//{
//    int arr[5]={0,1,2,3,4};
//    printf("%p\n",&arr[1]); // ��ַ
//    printf("%p\n",arr[2]);// ����2�����±�һ��
//    printf("%d\n", sizeof(arr));// 20
//
//}
//int main()
//{
//    printf("hello world");
//}
