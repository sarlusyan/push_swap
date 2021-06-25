#include "push_swap.h"

// void    sorting(s_stack *a, s_stack *b)
// {
// 	int	p;
// 	int	min;
// 	int	index;
//     int i;
// 	int j;

// 	while (a->top)
// 	{
// 		i = 0;
// 		j = a->top;
// 		min = a->arr[0];
// 		while (j--)
// 		{
// 			if (a->arr[i] <= min)
// 			{
// 				min = a->arr[i];
// 				index = i;
// 				printf("i=%d\n", index);	
// 			}
// 			i++;
// 		}
// 		p = a->top - index;
// 		if (index == 1)
// 			print(sa(a, 'a'));
// 		else if ((index + 1) < (a->top / 2))
// 			while (index-- != 0)
// 				print(ra(a, 'a'));
// 		else if ((index + 1) > (a->top / 2))
// 			while (p--)
// 				print(rra(a, 'a'));
// 		print(pb(a, b, 'b'));
// 	}
// 	// while (b->top--)
// 	// {
// 	// 	print(pb(b, a, 'a'));
// 	// 	printf("hi\n");
// 	// }
// }

int		partition(int arr[], int low, int high)
{
	int pivot;
	int	i;
	int j;

	pivot = arr[high];
	i = low - 1;
	j = low;
	while (j <= high - 1)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
		j++;
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

int		*quick_sort(int arr[], int low, int high)
{
	int p;
	if (low < high)
	{
		p = partition(arr, low, high);
		quick_sort(arr, low, p - 1);
		quick_sort(arr, p + 1 , high);
	}

	return (arr);
}

int		*new_arr(s_stack *a, int n)
{
	int		i;
	int		j;
	int		p;
	int		arr[a->top];
	int		*Arr;

	i = 0;
	p = a->top;
	while (p--)
	{
		arr[i] = a->arr[i];
		i++;
	}
	Arr = quick_sort(arr, 0, a->top - 1);
	i = 0;
	int k = a->top;
	while (k--)
		printf("arr %d\n", arr[i++]);
	return (Arr);
}

void	wm_pb(s_stack *a, s_stack *b)
{
	int	top;
	int i;
	int p;
	int n;
	//int len;
	
	n = a->top;
	int *y = new_arr(a, n);
	p = y[(n / 3) - 1];
	printf("p = %d\n", p);
	top = a->top;
	i = 0;
	while (top--) //top--
	{
		if (a->arr[i] <= p)
		{
			printf("arr[i]- %d\n", a->arr[i]);
			print(pb(a, b, 'b'));
			printf("b-0 %d\n", b->arr[0]);
			// if (b->top >= 2)
			// {
			// 	printf("hi?\n");
			// 	check_b(b);
			// }
		}
		else
			i++;
	}
	//printf("b-0 %d\n", b->arr[0]);
	printf("\n");
	int r = 0; 
	while (b->top--)
		printf("b-arr %d\n", b->arr[r++]);
	//wm_pb(a, b);
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void	check_b(s_stack *b)
{
	if (b->arr[0] < b->arr[1])
		print(sa(b, 'b'));
}