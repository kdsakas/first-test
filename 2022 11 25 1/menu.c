#include <stdio.h>
#include <stdlib.h>
#include"data.h"
void menu()
{
    printf("%35s\n","ѧ����Ϣ����ϵͳ");
    for(int i=0;i<60;i++)
        printf("%=");
    printf("\n");
    printf("\t1.¼��ѧ���ɼ�\t\t2.��ʾѧ���ɼ�\n");
    printf("\t3.��ѯѧ���ɼ�\t\t4.ɾ��ѧ���ɼ�\n");
    printf("\t5.��ʾѧ���ܳɼ�\t6.����ѧ���ɼ�\n");
    printf("\t7.����\t\t\t0.�˳�\n");
    for(int i=0;i<60;i++)
        printf("%=");
    printf("\n");
    printf("������Ҫ�����ĺ��룺");
}
