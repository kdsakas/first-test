#include"data.h"
void input(struct STU s[],int *t)
{   int xh;
    while(1)
    {

    printf("请输入学生学号,当输入-1时结束\n");
    scanf("%d",&xh);
    if(xh!=-1)
    {
        s[*t].num=xh;
        printf("请输入姓名：");
        scanf("%s",s[*t].name);
        printf("请输入数学成绩：");
        scanf("%f",&s[*t].math);
        printf("请输入语文成绩：");
        scanf("%f",&s[*t].chinese);
        printf("请输入英语成绩：");
        scanf("%f",&s[*t].english);
        (*t)++;
    }
    else break;
    }
}
void output(struct STU s[],int n)
{  printf("%35s\n","显示学生成绩");
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
    {
        printf("%6d",s[i].num);
        printf("%8s",s[i].name);
        printf("%6.1f",s[i].math);
        printf("%6.1f",s[i].chinese);
        printf("%6.1f",s[i].english);
        printf("%\n");
    }
    printf("\n\n");


}
