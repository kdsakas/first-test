#include <stdio.h>
#include <stdlib.h>
#include"data.h"
void menu()
{
    printf("%35s\n","学生信息管理系统");
    for(int i=0;i<60;i++)
        printf("%=");
    printf("\n");
    printf("\t1.录入学生成绩\t\t2.显示学生成绩\n");
    printf("\t3.查询学生成绩\t\t4.删除学生成绩\n");
    printf("\t5.显示学生总成绩\t6.保存学生成绩\n");
    printf("\t7.清屏\t\t\t0.退出\n");
    for(int i=0;i<60;i++)
        printf("%=");
    printf("\n");
    printf("请输入要操作的号码：");
}
