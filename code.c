#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("please enter the no: ");
    scanf("%i",&a);
    printf("please enter the no: ");
    scanf("%i",&b);
    printf("Now what will you like to perform\n.");
    printf("for addition press 1.\n");
    printf("for substraction press 2.\n");
    printf("for multiplication press 3.\n");
    printf("for division press 4.\n");
    printf("now please enter the choise.\n");
    scanf("%i",&c);
    switch (c)
    {
    case 1:
    {
        d=a+b;
        printf("the sum of entered no is %i.\n",d);
        break;
    }
    case 2:
    {
        d=a-b;
        printf("the difrence of entered no is %i.\n",d);
        break;
    }
    case 3:
    {
        d=a*b;
        printf("the product of entered no is %i.\n",d);
        break;
    }
    case 4:
    {
        d=a/b;
        printf("the result after the division of the entered no is %i.\n",d);
        break;
    }
    default:
    printf("the entered choice is wrong.\n");
        break;
    }
    return 0;
}