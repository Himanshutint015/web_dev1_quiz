#include <stdio.h>

int main() 
{
    int num;
    printf("enter the no. : ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        printf("case 1\n");
        break;
    case 2:
        printf("case 2");
        break;
    case 3:
        printf("case 3");
        break;
    case 4:
        printf("case 4");
        break;
    default: 
        printf("not found");
    }
    return 0;
}

