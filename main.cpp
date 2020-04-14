#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "Fucntion.h"
const int n=500;

void one(int *A, int n);
void three(int *a);
void five(int *a);

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int r=10;
    int a[n];
    one(a,r);
    printf("\n");
    int trud1,trud2,trud3,i,m;
    int mplusc=550;
    m=3;
    three(a);
    five(a);
    system("PAUSE>>NUL");

}

void one(int *A, int r){
    int Mt,Ct;
    Mt=3*(r-1);
    Ct=(r*r+5*r+4)/2;
    printf("Teor M C (%d elementov):\n C=%d, M=%d, C+M=%d \n",r,Ct,Mt,Ct+Mt);
    ///
    printf("\n Inc Massive:\n");
    FillInc(A,r);
    PrintMas(A,r);
    printf("\n");
    QuickSort(A,0,r-1,0);
    PrintMas(A,r);
    printf("\nCf+Mf=%d, M=%d, C=%d  %d",M+C, M, C, rek);
    printf("\n");
    C=0; M=0;
    ///
    printf("\n Dec Massive:\n");
    FillDec(A,r);
    PrintMas(A,r);
    printf("\n");
    QuickSort(A,0,r-1,0);
    PrintMas(A,r);
    printf("\nCf+Mf=%d, M=%d, C=%d",M+C, M, C);
    printf("\n");
    C=0; M=0;
    ///
    printf("\n Random Massive:\n");
    FillRand(A,r);
    PrintMas(A,r);
    printf("\n");
    QuickSort(A,0,r-1,0);
    PrintMas(A,r);
    printf("\nCf+Mf=%d, M=%d, C=%d",M+C, M, C);
    printf("\n");
    C=0; M=0;
}

void three(int *a){
    int trud1,trud2,trud3,i,m;
    C=0; M=0;
    printf("+---------------------------------------------+\n");
    printf("|-                  QuickSort                -|\n");
    printf("+------+------------+------------+------------+\n");
    printf("|  n   |  FillInc   |  FillDec   |  FillRand  |\n");
    printf("+------+------------+------------+------------+\n");
    m=100;
    FillInc(a,m); QuickSort(a,0,m-1,0); trud1=M+C; C=0; M=0;
    FillDec(a,m); QuickSort(a,0,m-1,0); trud2=M+C; C=0; M=0;
    FillRand(a,m); QuickSort(a,0,m-1,0); trud3=M+C; C=0; M=0;
    printf("|  %3d |  %6d    |  %6d    |  %6d    |\n",m,trud1,trud2,trud3);
    printf("+------+------------+------------+------------+\n");
    m=200;
    FillInc(a,m); QuickSort(a,0,m-1,0); trud1=M+C; C=0; M=0;
    FillDec(a,m); QuickSort(a,0,m-1,0); trud2=M+C; C=0; M=0;
    FillRand(a,m); QuickSort(a,0,m-1,0); trud3=M+C; C=0; M=0;
    printf("|  %3d |  %6d    |  %6d    |  %6d    |\n",m,trud1,trud2,trud3);
    printf("+------+------------+------------+------------+\n");
    m=300;
    FillInc(a,m); QuickSort(a,0,m-1,0); trud1=M+C; C=0; M=0;
    FillDec(a,m); QuickSort(a,0,m-1,0); trud2=M+C; C=0; M=0;
    FillRand(a,m); QuickSort(a,0,m-1,0); trud3=M+C; C=0; M=0;
    printf("|  %3d |  %6d    |  %6d    |  %6d    |\n",m,trud1,trud2,trud3);
    printf("+------+------------+------------+------------+\n");
    m=400;
    FillInc(a,m); QuickSort(a,0,m-1,0); trud1=M+C; C=0; M=0;
    FillDec(a,m); QuickSort(a,0,m-1,0); trud2=M+C; C=0; M=0;
    FillRand(a,m); QuickSort(a,0,m-1,0); trud3=M+C; C=0; M=0;
    printf("|  %3d |  %6d    |  %6d    |  %6d    |\n",m,trud1,trud2,trud3);
    printf("+------+------------+------------+------------+\n");
    m=500;
    FillInc(a,m); QuickSort(a,0,m-1,0); trud1=M+C; C=0; M=0;
    FillDec(a,m); QuickSort(a,0,m-1,0); trud2=M+C; C=0; M=0;
    FillRand(a,m); QuickSort(a,0,m-1,0); trud3=M+C; C=0; M=0;
    printf("|  %3d |  %6d    |  %6d    |  %6d    |\n",m,trud1,trud2,trud3);
    printf("+------+------------+------------+------------+\n");
}

void five(int *a){
    int rek1=0,rek2=0,rek3=0,rek12=0, rek22=0, rek32=0,i,m;
    C=0; M=0;
    printf("+------------------------+--------------------+\n");
    printf("|   |-  QuickSort 1     -|-    QuickSort 2   -|\n");
    printf("+---+------+------+------+------+------+------+\n");
    printf("| n | Decr.| Rand.| Incr.| Decr.| Rand.| Incr.|\n");
    printf("+---+------+------+------+------+------+------+\n");
    m=100;
    rek=0;
    FillInc(a,m); QuickSort(a,0,m-1,0); rek1=rek; rek=0;
    FillInc(a,m); QuickSort2(a,0,m-1); rek12=rek; rek=0;
    FillRand(a,m); QuickSort(a,0,m-1,0); rek2=rek; rek=0;
    FillRand(a,m); QuickSort2(a,0,m-1); rek22=rek; rek=0;
    FillDec(a,m); QuickSort(a,0,m-1,0); rek3=rek; rek=0;
    FillDec(a,m); QuickSort2(a,0,m-1); rek32=rek; rek=0;
    printf("|%3d|%6d|%6d|%6d|%6d|%6d|%6d|\n",m,rek1,rek2,rek3,rek12,rek22,rek32);
    printf("+---+------+------+------+------+------+------+\n");
    m=200;
    FillInc(a,m); QuickSort(a,0,m-1,0); rek1=rek; rek=0;
    FillInc(a,m); QuickSort2(a,0,m-1); rek12=rek; rek=0;
    FillRand(a,m); QuickSort(a,0,m-1,0); rek2=rek; rek=0;
    FillRand(a,m); QuickSort2(a,0,m-1); rek22=rek; rek=0;
    FillDec(a,m); QuickSort(a,0,m-1,0); rek3=rek; rek=0;
    FillDec(a,m); QuickSort2(a,0,m-1); rek32=rek; rek=0;
    printf("|%3d|%6d|%6d|%6d|%6d|%6d|%6d|\n",m,rek1,rek2,rek3,rek12,rek22,rek32);
    printf("+---+------+------+------+------+------+------+\n");
    m=300;
    FillInc(a,m); QuickSort(a,0,m-1,0); rek1=rek; rek=0;
    FillInc(a,m); QuickSort2(a,0,m-1); rek12=rek; rek=0;
    FillRand(a,m); QuickSort(a,0,m-1,0); rek2=rek; rek=0;
    FillRand(a,m); QuickSort2(a,0,m-1); rek22=rek; rek=0;
    FillDec(a,m); QuickSort(a,0,m-1,0); rek3=rek; rek=0;
    FillDec(a,m); QuickSort2(a,0,m-1); rek32=rek; rek=0;
    printf("|%3d|%6d|%6d|%6d|%6d|%6d|%6d|\n",m,rek1,rek2,rek3,rek12,rek22,rek32);
    printf("+---+------+------+------+------+------+------+\n");
    m=400;
    FillInc(a,m); QuickSort(a,0,m-1,0); rek1=rek; rek=0;
    FillInc(a,m); QuickSort2(a,0,m-1); rek12=rek; rek=0;
    FillRand(a,m); QuickSort(a,0,m-1,0); rek2=rek; rek=0;
    FillRand(a,m); QuickSort2(a,0,m-1); rek22=rek; rek=0;
    FillDec(a,m); QuickSort(a,0,m-1,0); rek3=rek; rek=0;
    FillDec(a,m); QuickSort2(a,0,m-1); rek32=rek; rek=0;
    printf("|%3d|%6d|%6d|%6d|%6d|%6d|%6d|\n",m,rek1,rek2,rek3,rek12,rek22,rek32);
    printf("+---+------+------+------+------+------+------+\n");
    m=500;
    FillInc(a,m); QuickSort(a,0,m-1,0); rek1=rek; rek=0;
    FillInc(a,m); QuickSort2(a,0,m-1); rek12=rek; rek=0;
    FillRand(a,m); QuickSort(a,0,m-1,0); rek2=rek; rek=0;
    FillRand(a,m); QuickSort2(a,0,m-1); rek22=rek; rek=0;
    FillDec(a,m); QuickSort(a,0,m-1,0); rek3=rek; rek=0;
    FillDec(a,m); QuickSort2(a,0,m-1); rek32=rek; rek=0;
    printf("|%3d|%6d|%6d|%6d|%6d|%6d|%6d|\n",m,rek1,rek2,rek3,rek12,rek22,rek32);
    printf("+---+------+------+------+------+------+------+\n");
}




