#include<stdio.h>

void merge(int arr1[],int arr2[],int arr3[],int s1,int s2)
{
	int i=0,j=0,k=0;	
	while(i<s1 && j<s2)	{
		if(arr1[i]<arr2[j]){
			arr3[k]=arr1[i];	k++;	i++;
		}
		else{	
			arr3[k]=arr2[j];	k++;	j++;
		}
	}	
	while(i<s1)	{	
		arr3[k]=arr1[i];	i++; k++;
	}
	while(j<s2)	{
		arr3[k]=arr2[j];	j++; k++;		
	}	
}

int main()
{
	int a1[5]={20,25,36,49,215},a2[6]={1,9,14,26,57,81},a3[11];
	int i;
	merge(a1,a2,a3,5,6);	
	printf("\nAfter merging 3rd array contains\n");
	for(i=0;i<11;i++)
	{	printf("%d ",a3[i]);
	}	
	return 0;	
}
