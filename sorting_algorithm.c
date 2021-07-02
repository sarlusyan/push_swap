#include "push_swap.h"

void    sorting(s_stack *b, s_stack *a)
{
	int	p;
	int	max;
	int	index;
    int i;
	int j;

	while (b->top)
	{
		i = 0;
		j = b->top;
		max = b->arr[0];
		while (j--)
		{
			if (b->arr[i] >= max)
			{
				max = b->arr[i];
				index = i;	
			}
			i++;
		}
		p = b->top - index;
		if (index == 1)
			print(sa(b, 'b'));
		else if ((index + 1) <= (b->top / 2))
			while (index-- != 0)
				print(ra(b, 'b'));
		else if ((index + 1) > (b->top / 2))
			while (p--)
				print(rra(b, 'b'));
		print(pb(b, a, 'a'));
	}
}

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

int		*new_arr(s_stack *a)
{
	int		i;
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
	return (Arr);
}

void	wm_pb(s_stack *a, s_stack *b)
{
	int	top;
	int i;
	int p;
	int n;
	int len;
	
	n = a->top;
	int *y = new_arr(a);
	p = y[(n / 4) - 1];
	top = a->top;
	i = 0;
	while (top--)
	{
		len = top - i;
		if (a->arr[i] <= p)
		{
			print(pb(a, b, 'b'));
			if (b->top >= 2)
				check_b(b);
		}
		print(ra(a, 'a'));
	}
	if (a->top > 3)
		wm_pb(a, b);
	else
		saf3(a);
	// if (b->top > 2)
		sorting(b, a);
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