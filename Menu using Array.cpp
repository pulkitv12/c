#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a[100],b[100],n=0,i,h,sum,x,m,max,min,val,c,ind,j,temp,start,end,mid;
	float avg;
		
	while(1)
	{
	printf("\n\n***MENU***\n");
	printf("\n1.Input Values");
	printf("\n2.Display Values");
	printf("\n3.Find Sum,Average,Biggest & Smallest");
	printf("\n4.Add more values");
	printf("\n5.Delete last value");
	printf("\n6.Linear Search(First Occurrence)");
	printf("\n7.Linear Search(Last Occurrence)");
	printf("\n8.Linear Search(All Occurrences)");
	printf("\n9.Insert value at index");
	printf("\n10.Delete Value from index");
	printf("\n11.Delete first occurrence");
	printf("\n12.Delete all occurrences");
	printf("\n13.Sorting (Exchange sort)");
	printf("\n14.Sorting (Bubble sort)");
	printf("\n15.Binary Search");
	printf("\n16.Index Sort");
	printf("\n17.Check Sort");
	printf("\n18.Intersection of Arrays");
	printf("\n0.Quit");
	printf("\nEnter your choice\n");
	scanf("%d",&x);
	switch(x)
	{
	case 1:
		printf("How many values you have ?\n");
		scanf("%d",&n);
		printf("Enter %d values\n",n);
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		break;
	
	case 2:
	
		if(n==0)
		printf("List is Empty");
		else
		{ for(i=0;i<n;i++)
		printf("\nValue %d is %d",i,a[i]);
		}
		break;
	
	case 3:
		if(n==0)
			printf("\nList is empty");
		  	
		  else
		{	

		sum=0;
		min=max=a[0];
		for(i=0;i<n;i++)
		{
			sum=sum+a[i];
			if (a[i]>max)
			max=a[i];
			if (a[i]<min)
			min=a[i];
		}
	     	avg=(float)sum/n;
	     printf("\nSum of values is %d & Average is %.2f",sum,avg);
	      printf("\nBiggest value is %d & Smallest value is %d",max,min);
	     }
	     break;
	case 4:
		printf("\nEnter a value to insert\n");
		scanf("%d",&a[n]);
		n++;
		break;
	case 5:
		n--;
		break;
	case 6:
		printf("Enter value to search");
		scanf("%d",&val);
		for(i=0;i<n;i++)
		if (a[i]==val)
		break;
	if(i==n)
	printf("Value not found");
	else
	printf("Value found at index %d\n",i);
	break;
	case 7:
		printf("Enter value to search\n");
		scanf("%d",&val);
		for(i=n-1;i<=0;i--)
		if(a[i]==val)
		break;
	if(i<n)
	printf("Value not found");
	else
	printf("Value found at index %d",i);
	break;
	case 8:
		printf("Enter value to search\n");
		scanf("%d",&val);
		for(i=0;i<n;i++)
		if(a[i]==val)
		{
		printf("Value found at index %d\n",i);
		c=1;
		c++;
		}
	if(c==0)
	printf("Value not found");
	else
	printf("Value found %d times",c);
	break;
	case 9:
	printf("Enter Value to add\n");
	scanf("%d",&val);
	printf("Enter Index\n");
	scanf("%d",&ind);
	for(i=n;i>ind;i--)
	{
	a[i]=a[i-1];
	}
	a[ind]=val;
	n++;
	break;
	case 10:
		printf("Enter index to be deleted\n");
		scanf("%d",&ind);
		for(i=ind;i<n;i++)
		a[i]=a[i+1];
		n--;
		break;
	case 11:
		printf("Enter Value to delete");
		scanf("%d",&val);
		for(i=0;i<n;i++)
			if(a[i]==val)
		break;
		if(i==n)
		printf("Value not found");
		else
		for(i=i;i<n;i++)
		a[i]=a[i+1];
		n--;
		break;
	case 12:
		printf("Enter Value to delete");
		scanf("%d",&val);
		for(ind=0;ind<n;ind++)
		if (a[ind]==val)
		{
		for(i=ind;i<n;i++)
			a[i]=a[i+1];
		n--;
		ind--;
		}
		break;
	case 13:
		printf("Values sorted in Ascending order");
		for(i=0;i<n-1;i++)
			for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		break;
	case 14:
		for(i=0;i<n;i++)
			for(j=0;j<n-i;j++)
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		break;
	case 15:
		printf("List should be sorted\n");
		printf("Enter value to search");
		scanf("%d",&val);
		start=0;
		end=n-1;
		while(start<=end)
		{
			mid=(start+end)/2;
			if(a[mid]==val)
			break;
			else if (val<a[mid])
			end=mid-1;
			else
			start=mid+1;
		}
		if(start>end)
		printf("Value not found");
		else
		printf("Value found at index %d",mid);
		break;
	case 16:
		printf("Enter value to insert\n");
		scanf("%d",&val);
		for (i=n;a[i-1]>val&&i>0;i--)
			a[i]=a[i-1];
		a[i]=val;
		n++;
		break;
	case 17://to check sorted in ascending or descending.
		for(i=0;i<n-1;i++)
			{
			if(a[i]>a[i+1])
			break;
			}
		if(i==n-1)
		printf("Values are in ascending order");
		else 
		{
		
		for(i=0;i<n-1;i++)
			{
			if(a[i]<a[i+1])
			break;
			}
		
		if(i==n-1)
		printf("Values are in descending order");
	    
		else
		printf("Not sorted");
	    }
		break;
	case 18:
		printf("How many values you have for array A\n");
		scanf("%d",&n);
		printf("How many values you have for array B\n");
		scanf("%d",&m);
		printf("Enter values in array A\n");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		printf("Enter values in array B\n");
		for(j=0;j<m;j++)
		scanf("%d",&b[j]);	
		if(n>m)
		{
			for(h=0;h<n;h++)
			if(a[i]==b[j])
			printf("%d",a[i]);
		}
		else
		{
			for(h=0;h<m;h++)
			if(a[i]==b[j])
			printf("%d",b[j]);
		}
		break;
		
	case 0:
	exit(0);
}
	printf("\nPress a key");
	getch();
	}
}
