#include<stdio.h>
 
int arr[10][10],visited[10],n,cost=0;
 
void takeInput()
{
int i,j;
 
printf("Enter the number of cities: ");
scanf("%d",&n);
 
printf("\nEnter the Cost Matrix\n");
 
for(i=0;i < n;i++)
{
printf("\nEnter Elements of Row: %d\n",i+1);
 
for( j=0;j < n;j++)
scanf("%d",&arr[i][j]);
 
visited[i]=0;
}
 
printf("\n\nThe cost list is:");
 
for( i=0;i < n;i++)
{
printf("\n");
 
for(j=0;j < n;j++)
printf("\t%d",arr[i][j]);
}
}
 
void mincost(int city)
{
int i,ncity;
 
visited[city]=1;
 
printf("%d--->",city+1);
ncity=least(city);
 
if(ncity==999)
{
ncity=0;
printf("%d",ncity+1);
cost+=arr[city][ncity];
 
return;
}
 
mincost(ncity);
}
 
int least(int c)
{
int i,nc=999;
int min=999,kmin;
 
for(i=0;i < n;i++)
{
if((arr[c][i]!=0)&&(visited[i]==0))
if(arr[c][i]+arr[i][c] < min)
{
min=arr[i][0]+arr[c][i];
kmin=arr[c][i];
nc=i;
}
}
 
if(min!=999)
cost+=kmin;
 
return nc;
}
 
int main()
{
takeInput();
 
printf("\n\nThe Path is:\n");
mincost(0); //passing 0 because starting vertex
 
printf("\n\nMinimum cost is %d\n ",cost);
 
return 0;
}