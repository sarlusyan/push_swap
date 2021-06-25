#include "push_swap.h"

char	*sa(s_stack *a, char type)
{
	a->arr[0] += a->arr[1];
	a->arr[1] = a->arr[0] - a->arr[1];
	a->arr[0] = a->arr[0] - a->arr[1];
	return (type == 'a' ? "sa" : "sb");
}

char	*ss(s_stack *a, s_stack *b)
{
	sa(a, 'a');
	sa(b, 'b');
	return ("ss");
}

char	*ra(s_stack *a, char type)
{
	int i;

	i = 0;
	while (i < a->top - 1)
	{
		a->arr[i] += a->arr[i + 1];
		a->arr[i + 1] = a->arr[i] - a->arr[i + 1];
		a->arr[i] = a->arr[i] - a->arr[i + 1];
		i++;
	}
	return (type == 'a' ? "ra" : "rb");
}

char	*rr(s_stack *a, s_stack *b)
{
	ra(a, 'a');
	ra(b, 'b');
	return ("rr");
}

char	*rra(s_stack *a, char type)
{
	int i;
	
	i = a->top - 1;
	while (i)
	{
		a->arr[i] += a->arr[i - 1];
		a->arr[i - 1] = a->arr[i] - a->arr[i - 1];
		a->arr[i] = a->arr[i] - a->arr[i - 1];
		i--;
	}
	return (type == 'a' ? "rra" : "rrb");
}

char	*rrr(s_stack *a, s_stack *b)
{
	rra(a, 'a');
	rra(b, 'b');
	return ("rrr");
}

char	*pb(s_stack *a, s_stack *b, char type)
{
	int	*fa;
	int	*fb;
	int j;

	j = 0;
	a->top -= 1;
	b->top += 1;
	if (!(fa = (int *)malloc((a->top) * 4)) || !(fb = (int *)malloc((b->top) * 4)))
		return (NULL);
	fb[0] = a->arr[0];
	while (j < a->top)
	{
		fa[j] = a->arr[j + 1];
		j++;
	}
	j = 1;
	while (j < b->top)
	{
		fb[j] = b->arr[j - 1];
	 	j++;
	}
	a->arr = fa;
	b->arr = fb;
	return (type == 'a' ? "pa" : "pb");
}