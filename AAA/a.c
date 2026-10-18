#include<stdio.h> 
int main() 
{ 

    int x[5],i,SUM=0;
    printf("Enter 5 integer values:\n ");
    for(i=0;i<5;i++)
    {
        printf("\t Enter integer value No. %d:", i+1);
        scanf("%d",&x[i]);
        SUM=SUM+x[i];
    }
    for(i=0;i<5;i++)
    {
        SUM=SUM+x[i];
        }
    printf("The Sum is %d\n", SUM);
        return 0; 

}