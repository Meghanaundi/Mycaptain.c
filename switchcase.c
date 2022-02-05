#include<stdio.h>
int main()
{
    int n,price;
    char Fit;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Food item-Egg Noodles \n");
        printf("price-Rs 139 \n");
        break;
        case 2:
        printf("Food item-Pasta \n");
        printf("price-Rs 179 \n");
        break;
        case 3:
        printf("Food item-French Fries \n");
        printf("price-Rs 79 \n");
        break;
        case 4:
        printf("Food item-Sandwich \n");
        printf("price-Rs 149 \n");
        break; 
        case 5:
        printf("Food item-Pizza \n");
        printf("price-Rs 249 \n");
        break; 
        default:
        printf("sorry we don't have the item u need");
    }
    return 0;
}
/*output 
Enter the value of n: 
3
Food item-French Fries 
price-Rs 79 */
