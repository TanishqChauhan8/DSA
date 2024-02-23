#include <stdio.h>
struct student
{
    int roll;
    int age;

} std[10];

void main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter the Roll nos : ");
        scanf("%d",&std[i].roll);
        printf("\nEnter the age of roll no %d : ", std[i].roll);
        scanf("%d", &std[i].age);
    }

    int Minimum = (std[0].age);
    int Mrollno=0;
    for (int i = 0; i < 9; i++)
    {
        if (Minimum > (std[i + 1].age))
        {
            Minimum = std[i + 1].age;
            Mrollno=std[i+1].roll;
        }
    }
   printf("Minimum age is %d and roll no is %d",Minimum,Mrollno);
}