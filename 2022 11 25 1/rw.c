#include"data.h"
void read(struct STU s[],int *t)
{   FILE *fp;
    int i=0;
    fp=fopen("1.txt","r");
     if(!fp)
    {
        printf("文件打开错误");
        return ;
    }
    while(fscanf(fp,"%d%s%f%f%f",&s[i].num,s[i].name,&s[i].math,&s[i].chinese,&s[i].english)!=EOF)
    i++;
    *t=i;
    fclose(fp);
}
void write(struct STU s[],int n)//保存
{
    FILE *fp;
    fp=fopen("1.txt","w");
    if(!fp)
    {
        printf("文件打开错误");
        return ;
    }
    for(int i=0;i<n;i++)
        fprintf(fp,"%d\t%s\t%f\t%f\t%f\n",s[i].num,s[i].name,s[i].math,s[i].chinese,s[i].english);
    fclose(fp);
}
