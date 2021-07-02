/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusargsy <lusargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 13:39:25 by lusargsy          #+#    #+#             */
/*   Updated: 2021/07/02 21:09:17 by lusargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	int		ac;
	int		i;
	int		d;
	s_stack a;
	s_stack b;

	d = 0;
	i = 1;
	ac = argc - 1;
	if (check_is_v(argv, argc - 1))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	t_f_argv(&a, argc, argv);
	if (is_same(&a, 0) == 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else if (is_last(&a))
		return (0);
	else if (is_same(&a, 0))
 		return (0);
	else if (n_sa(&a))
		return (0);
	else if (is_same(&a, 1) && all_less_ra(&a, a.arr[0]))
	{
		print(ra(&a, 'a'));
		return (0);
	}
	else if (short_n_sa(&a))
		return (0);
	else
	{
		all.r = 0;
		if (argc - 1 == 2)
			saf2(&a);
		else if (argc - 1 == 3)
			saf3(&a);
		else if (argc - 1 == 5)
			saf5(&a, &b);
		else
			wm_pb(&a, &b);

		// int l = 0;
		// while (a.top--)
		// 	printf("%d\n", a.arr[l++]);
		return (0);
	}
}
