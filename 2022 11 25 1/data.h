#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#define N 100
struct STU
{   int num;
    char name[20];
    float math,chinese,english;
};
void menu();
void input(struct STU s[],int *t);
void output(struct STU s[],int n);
void read(struct STU s[],int *t);
void write(struct STU s[],int n);
void sreach(struct STU s[],int n);
void del(struct STU s[],int n);
void sum(struct STU s[],int n);
#endif // DATA_H_INCLUDED
