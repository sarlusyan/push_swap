#ifndef	PUSH_SWAP_H
# define	PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct	s_all
{
	int	count;
	int r;
	int	max;
}	all;

typedef	struct	t_stack
{
	int *arr;
	int	top;
}	s_stack;

void    t_f_argv(s_stack *a, s_stack *b, int argc, char **argv);
int		ft_atoi(char *str);
void	print(char *str);
char	*sa(s_stack *a, char type);
char	*ss(s_stack *a, s_stack *b);
char	*ra(s_stack *a, char type);
char	*rr(s_stack *a, s_stack *b);
char	*rra(s_stack *a, char type);
char	*rrr(s_stack *a, s_stack *b);
char	*pb(s_stack *a, s_stack *b, char type);
void    saf3(s_stack *a);
void    saf5(s_stack *a, s_stack *b);
void    sorting(s_stack *a, s_stack *b);
int		*new_arr(s_stack *a, int n);
int		*quick_sort(int arr[], int low, int high);
int		partition(int arr[], int low, int high);
void	swap(int* a, int* b);
void	wm_pb(s_stack *a, s_stack *b);
void	check_b(s_stack *b);

# endif	
