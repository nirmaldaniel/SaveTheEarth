#include<stdio.h>
void quicksort(int number[25],int first,int last){
int i, j, pivot, temp;
if(first<last){
pivot=first;
i=first;
j=last;
while(i<j){
while(number[i]<=number[pivot]&&i<last)
i++;
while(number[j]>number[pivot])
j--;
if(i<j){
temp=number[i];
number[i]=number[j];
number[j]=temp;
}
}
temp=number[pivot];
number[pivot]=number[j];
number[j]=temp;
quicksort(number,first,j-1);
quicksort(number,j+1,last);
}
}
int main(){
int i, count, number[25],x,y;
printf("Enter the no of pairs (Max. - 25): ");
scanf("%d",&count);
printf("Enter %d pair of elements in (a,b) order : ", count);
for(i=0;i<count;i++)
{
scanf("%d %d",&x,&y);
number[i]=100000*x+y;
}
quicksort(number,0,count-1);
printf("The Sorted Order is: ");
for(i=0;i<count;i++)
printf("(%d,%d)",number[i]/100000,number[i]-((number[i]/100000)*100000));
return 0;
}
