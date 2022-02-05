#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks: \n");
    scanf("%d",&marks);
    if(marks>= 85 && marks<=100)
    {
        printf("Grade A");
        scanf("%d",&marks);
    }
    else if(marks>=70 && marks<=84)
    {
        printf("Grade B");
        scanf("%d",&marks);
    }
    else if(marks>=55 && marks<=69)
    {
         printf("Grade C");
         scanf("%d",&marks);
    }
    else if(marks>=40 && marks<=54)
    {
        printf("Grade D");
        scanf("%d",&marks);
    }
    else
    {
        printf("Grade F");
        scanf("%d",&marks);
    }
    return 0;
}
/*output
 Enter marks: 
 98
 Grade A */
