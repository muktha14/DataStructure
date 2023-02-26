#include<stdio.h>
#include<stdlib.h>

void main(){
	int i,n,l,h,j,temp,ch=1,choice,k;
	
printf("\nhow many random numbers need to be printed:	");
scanf("%d",&n);
printf("\nlower limit								:	");
scanf("%d",&l);
printf("\nhigher limit								:	");
scanf("%d",&h);
int a[n];
		for(i=0;i<n;i++){
		a[i]=(rand()%((h-l)+1))+l;
		printf("%d  ",a[i]);
		}
void bubble(){ 		
for (i=0;i<n-1;i++){
	for(k=0;k<n;k++)
	printf("%d  ",a[k]);
	for(j=0;j<n-1;j++){
		if(a[j]>a[j+1]){
			temp=a[j+1];
			a[j+1]=a[j];
			a[j]=temp;
		}
	}printf("\nsorted array:");
	for(i=0;i<n;i++)
printf("%d  ",a[i]);}
}
void insertion(){
	int key,pass;
	for(pass=1;pass<n;pass++){
		k=a[pass];
		for(j=pass-1;j>=0&&k<a[j];j--){
			a[j+1]=a[j];
		}a[j]=k;
	}printf("\nsorted array:");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
}

while(ch){
printf("\n1.BUBBLE SORT");
printf("\n2.INSERTION SORT");
printf("\n3.SELECTION SORT");
printf("nENTER YOUR CHOICE");
scanf("%d",&choice);
switch(choice){
	case 1:
		bubble();
	case 2:
		insertion();
}
}
}
