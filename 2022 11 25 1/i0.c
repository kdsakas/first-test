#include"data.h"
void input(struct STU s[],int *t)
{   int xh;
    while(1)
    {

    printf("������ѧ��ѧ��,������-1ʱ����\n");
    scanf("%d",&xh);
    if(xh!=-1)
    {
        s[*t].num=xh;
        printf("������������");
        scanf("%s",s[*t].name);
        printf("��������ѧ�ɼ���");
        scanf("%f",&s[*t].math);
        printf("���������ĳɼ���");
        scanf("%f",&s[*t].chinese);
        printf("������Ӣ��ɼ���");
        scanf("%f",&s[*t].english);
        (*t)++;
    }
    else break;
    }
}
void output(struct STU s[],int n)
{  printf("%35s\n","��ʾѧ���ɼ�");
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
