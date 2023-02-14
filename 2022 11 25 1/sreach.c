#include"data.h"
void sreach(struct STU s[],int n)
{   int cxxh;
while(1)
{
   printf("请输入要查询的学号，当输入-1时结束");
    scanf("%d",&cxxh);
    if(cxxh!=-1)
    {   printf("%35s","显示查询结果\n");
    for(int i=0;i<60;i++)
        printf("-");
        printf("\n");
     printf("%6s","学号");
    printf("%8s","姓名");
    printf("%6s","数学");
    printf("%6s","语文");
    printf("%6s","英语");
    printf("\n");
        for(int i=0;i<n;i++)
        if(s[i].num==cxxh)
    {
        printf("%6d",s[i].num);
        printf("%8s",s[i].name);
        printf("%6.1f",s[i].math);
        printf("%6.1f",s[i].chinese);
        printf("%6.1f",s[i].english);
        printf("\n\n");
    }
    }
    else break;

}


}

