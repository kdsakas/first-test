#include"data.h"
void sreach(struct STU s[],int n)
{   int cxxh;
while(1)
{
   printf("������Ҫ��ѯ��ѧ�ţ�������-1ʱ����");
    scanf("%d",&cxxh);
    if(cxxh!=-1)
    {   printf("%35s","��ʾ��ѯ���\n");
    for(int i=0;i<60;i++)
        printf("-");
        printf("\n");
     printf("%6s","ѧ��");
    printf("%8s","����");
    printf("%6s","��ѧ");
    printf("%6s","����");
    printf("%6s","Ӣ��");
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

