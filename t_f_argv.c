#include "push_swap.h"

void    t_f_argv(s_stack *a, s_stack *b, int argc, char **argv)
{
    int i;

    i = 0;
	all.count = argc - 1;
	a->top = all.count;
	if (!(a->arr = (int *)malloc(all.count)))
		return ;
	if (!(b->arr = (int *)malloc(all.count)))
		return ;
	while (i < argc - 1)
	{
		a->arr[i] = ft_atoi(argv[i + 1]);
		i++;
	}
}

size_t	ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
		return (i);
}

void	print(char *str)
{
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
	all.r++;
}