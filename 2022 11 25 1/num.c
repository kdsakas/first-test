#include"data.h"
void sum(struct STU s[],int n)
{   int *p=&n;
    float he;
       printf("%35s","��ʾѧ���ɼ�\n");
    for(int i=0;i<60;i++)
        printf("-");
        printf("\n");
        printf("%6s","ѧ��");
        printf("%8s","����");
        printf("%14s","ѧ���ܳɼ�");
        printf("\n");
        for(int i=0;i<n;i++)
        {   printf("%6d",s[i].num);
            printf("%8s",s[i].name);
            he=s[i].math+s[i].chinese+s[i].english;
            printf("%14.1f",he);
            printf("\n");
        }


}

