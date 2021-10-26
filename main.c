/*I

   PROJECT: PAYSLIP PROGRAM
   AUTHOR: LUTHER
   DATE: OCT,2021
   COMPILER: GCC
   LANGUAGE: C99
   LICENSE: MIT

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char name[100]
    int emp_no,hours;
    int normal_pay,overtime_pay,gross;
    float tax,net;
    const int rate = 1000;

    //capture input
    printf("\LUTHER'S factory payslip system!\n");
    printf ("EMPLOYEE Name: ");
    gets(name);
    printf("EMPLOYEE Number: ");
    scanf("%d",&emp_no);
    printf("hours worked: ")
    scanf("d",&hours);

    //computation
    if(hours > 40)
        else{
        normal_pay = 40*rate;
        overtime_pay = (hours - 40)*1.5*rate;
    }
    gross = normal pay + overtime_pay;
    tax = 0.16 * gross;
    net = gross - tax;

    //printable payslip
    printf("emp no:\t%d\n",emp_no);
    printf("employee name:\t%s\n",name);
    printf("normal pay: \t%d\n",normal_pay);
    printf("overtime pay: \t%d\n",overtime_pay);
    printf("gross pay: \t%d\n",gross);
    printf("tax: \t%f\n,",tax);
    printf("net pay:\t%f\n",net);

    return 0;
}
