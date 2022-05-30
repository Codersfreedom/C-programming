#include<stdio.h>
#include<math.h>

int x[100],soln;

int place(int k,int i){
	int j;
	for(j=1;j<k;j++){
		if((x[j]==i)||abs(x[j]-i)==abs(j-k))
			return 0;
	}
	return 1;
}

void printboard(int n){
	int i;
	for(i=1;i<=n;i++)
		printf("[%d,%d]  ",i,x[i]);
}

void NQueen(int k,int n){
	int i;
	for(i=1;i<=n;i++){
		if(place(k,i)==1){     
			x[k]=i;
			if(k==n){
				printf("\n\nPermutation %d:\n",++soln);
				printboard(n);
			}
			else NQueen(k+1,n);
		}
	}
}

int main(){
	int n;
	soln=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("The positions of queens are:");
	NQueen(1,n);
}


/*
Time complexity O(n!)

Output --->

Enter the value of n:4
The positions of queens are:

Permutation 1:
[1,2]  [2,4]  [3,1]  [4,3]

Permutation 2:
[1,3]  [2,1]  [3,4]  [4,2]

*/
