#include<stdio.h>
#include<stdlib.h>
struct student
{
    int age;
    int rollno;
}*st1=NULL;

int main()
{
    st1=(struct student *) malloc (sizeof(struct Student *));
    st1->age=10;
    st1->rollno=101;
    printf("%d %d",st1->rollno,st1->age);

}