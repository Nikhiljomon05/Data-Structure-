#include<stdio.h>
 void main()
{
int left=0,n,x,flag=0,time,mid,i,right;
time++;
printf("enter value of n");
time++;
scanf("%d",&n);
time++;
int a[n];
printf("enter array elements");
time++;
for(i=0;i<n;i++)
{
time++;
scanf("%d",&a[i]);
time++;
}
time++;
printf("element to search");
time++;
scanf("%d",&x);
time++;
right =n-1;
while(left<=right)
{
mid=(left+right)/2;
time++;
time++;
time++;
if(x==a[mid])
{
printf("elements is present at %d",mid+1);
time++;
flag=1;
time++;
break;
}
else if(x>a[mid])
{
left=mid+1;
time++;
}
else if(x<a[mid])
{
right=mid-1;
time++;
}
}
time++;
if(flag==0)
printf("element is not found");
time++;
printf("\nspace complexity=%d",28+(4*n));
time++;
time++;
printf("\ntime complexity =%d",time);
}

