/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusargsy <lusargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 13:39:25 by lusargsy          #+#    #+#             */
/*   Updated: 2021/07/05 17:16:51 by lusargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	char	**s = NULL;
	int		ac;
	int		i;
	int		d;
	s_stack a;
	s_stack b;

	d = 0;
	i = 1;
	b.top = 0;
	ac = argc - 1;
	int ac0 = argc;
	
	while (ac0--)
	{
		s = ft_split(argv[i], ' ', &a);
		i++;
	}
	if (s)
	{
		if (check_is_v(s, argc - 1))
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	else
	{
		if (check_is_v(argv, argc - 1))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		t_f_argv(&a, argc, argv);
	}
	if (is_same(&a, 0) == 2)
	{	
		write(1, "Error\n", 6);
		return (0);
	}
	else if (is_same(&a, 0))
		return (0);
	else if (a.top == 2)
		saf2(&a);
	else if (a.top == 3)
		saf3(&a);
	else if (a.top == 5 || a.top == 4)
		saf5(&a, &b);
	else if (is_same(&a, 0))
 		return (0);
	else if (n_sa(&a))
		return (0);
	else if (is_same(&a, 1) && all_less_ra(&a, a.arr[0]))
	{
		print(ra(&a, 'a'));
		return (0);
	}
	else
	{
		all.r = 0;
		wm_pb(&a, &b);
		return (0);
	}
}
