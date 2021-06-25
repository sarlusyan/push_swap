/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusargsy <lusargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 13:39:25 by lusargsy          #+#    #+#             */
/*   Updated: 2021/06/23 20:40:56 by lusargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	s_stack a;
	s_stack b;

	t_f_argv(&a, &b, argc, argv);
	all.r = 0;
	// pb(&a, &b, 'b');
	// pb(&a, &b);
	// sb(&b);
	
	//print(sa(&a, 'a'));
	// saf5(&a, &b);
	//sorting(&a, &b);
	// int *y = new_arr(&a);

	wm_pb(&a, &b);
	//printf("%d\n", all.r);
	// int j = 0;
	// while (j < a.top)
	// 	printf("a : %d\n", a.arr[j++]);
	// printf("\n");
	// j = 0;
	// while (j < b.top)
	// 	printf("b : %d\n", b.arr[j++]);
	// printf("%d\n", all.r);
	return (0);
}
