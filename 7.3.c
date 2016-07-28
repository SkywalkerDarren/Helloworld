#include<stdio.h>
void in(int *a);
void out(int *a);
void sort(int *a);
int main()
{
	int array[10];
	in(array);
	sort(array);
	out(array);
	return 0;
}
void in(int *a)
{
	int i;
	for(i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
	}
}
void out(int *a)
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);
	}
}
void sort(int *a)
{
	int max,min,i,t;
	max = 0;
	min = 0;
	for(i = 0; i < 10; i++)
	{
		if(a[i] > a[max])
		{
			max = i;
		}
		if(a[i] < a[min])
		{
			min = i;
		}
	}

	if(!max)
	{
		if(min == 9)
		{
			t = a[0];
			a[0] = a[9];
			a[9] = t;
		}else{
			t = a[max];
			a[max] = a[9];
			a[9] = t;

			t = a[min];
			a[min] = a[0];
			a[0] = t;
		}
	}else{
		t = a[min];
		a[min] = a[0];
		a[0] = t;

		t = a[max];
		a[max] = a[9];
		a[9] = t;
	}
}
