#include <stdio.h>
#include <stdlib.h>
#define N 100
#include"data.h"

int main()
{   struct STU a[N];
    int len=0;
    int choice;
    read(a,&len);
    while(1)
    {
        menu();
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:input(a,&len);break;
            case 2:output(a,len);break;
            case 3:sreach(a,len);break;
            case 4:dele(a,&len);break;
            case 5:sum(a,len);break;
            case 6:write(a,len);break;
            case 7:system("cls");break;
            case 0:exit(0);break;
        }
    }
    return 0;
}
