#include"data.h"
void dele(struct STU s[],int *t)
{
    int xh;
    while(1)
    {
        printf("请输入要删除的学生学号，当输入-1时结束\n");
    scanf("%d",&xh);
    if(xh!=-1)
    {
        for(int i=0; i<*t; i++)
            if(s[i].num==xh)
            {
                for(int j=i+1; j<*t; j++)
                    s[j-1]=s[j];
                (*t)--;
            }
            output(s,*t);
    }
    else break;
    }
}







