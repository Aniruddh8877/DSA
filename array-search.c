#include<stdio.h>
void main()
{
    int array[5]={22,19 ,40, 90 ,45};
    int i,flag , k ,index;
    printf("the contents ofd the array are:\n");
    for(i=0;i<5;i++)
    printf("array[%d]=%d\n",i,array[i]);
    printf(" enter the element to be searched  -  ");
    scanf("%d",&k);
    flag=0;

     for ( i = 0; i < 5; i++)
     {
        if(k==array[i]){
            flag=1;
            index=i;
            break;
        }
     }
        if(flag==1){
            printf("element %d is present at index location %d in the array",k,index);
        }
        else{
            printf("unsuccessful search!");
        }
     
} 