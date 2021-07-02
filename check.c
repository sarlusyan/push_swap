#include "push_swap.h"

int    check_is_v(char **av, int ac)
{
    int	i;
	int	j;

	i = 1;
	while (i < ac + 1)
	{
		j = 0;
		while (av[i][j])
		{
			if (!(av[i][j] >= '0' && av[i][j] <= '9') && av[i][j] != '-')
				return (1);
			j++;
		}
		if (ft_atoi(av[i]) < -2147483648 || ft_atoi(av[i]) > 2147483647)
			return (1);
		i++;
	}
	return (0);
}

int		is_same(s_stack *a, int n)
{
	int	ret;
	int	top1;
	int	top2;
	int	j;

	ret = 1;
	top1 = a->top;
	top2 = a->top;
	while (top1--)
	{
		j = n + 1;
		while (j < top2)
		{
			if (a->arr[n] == a->arr[j])
				return (2);
			if (a->arr[n] > a->arr[j])
				ret *= 0;
			j++;
		}
		n++;
	}
	return ret;
}

int		is_last(s_stack *a)
{
	int	ret;
	int	top1;
	int	top2;
	int	i;
	int	j;

	i = 0;
	ret = 1;
	top1 = a->top;
	top2 = a->top;
	while (top1--)
	{
		j = i + 1;
		while (j < top2)
		{
			if (a->arr[i] < a->arr[j])
				ret *= 0;
			j++;
		}
		i++;
	}
	if (ret)
	{
		while (a->top)
		{
			print(rra(a, 'a'));
			a->top--;
		}
		return (1);
	}
	else
		return (0);
}

int		n_sa(s_stack *a)
{
	if (a->arr[0] > a->arr[1] && (is_same(a, 2)) && (all_less(a, a->arr[0])))
	{
		print(sa(a, 'a'));
		return (1);
	}
	else 
		return (0);
}

int		all_less(s_stack *a, int n)
{
	int	r;
	int top;
	int i;

	i = 2;
	r = 1;
	top = a->top - 2;
	while (top--)
	{
		if (n > a->arr[i])
		{
			r *= 0;
			return (0);
		}
		i++;
	}
	if (r)
		return (1);
	else
		return (0);
}

int		all_less_ra(s_stack *a, int n)
{
	int	r;
	int top;
	int i;

	i = 1;
	r = 1;
	top = a->top - 1;
	while (top--)
	{
		if (n < a->arr[i])
		{
			r *= 0;
			return (0);
		}
		i++;
	}
	if (r)
		return (1);
	else
		return (0);
}

int		short_n_sa(s_stack *a)
{
	if (a->arr[0] < a->arr[1] && (all_less(a, a->arr[0])))
	{
		print(sa(a, 'a'));
		print(ra(a, 'a'));
		return (1);
	}
	else 
		return (0);

}