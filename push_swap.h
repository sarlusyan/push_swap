#ifndef	PUSH_SWAP_H
# define	PUSH_SWAP_H

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

void    t_f_argv(s_stack *a, int argc, char **argv);
size_t	ft_strlen(char *str);
long	ft_atoi(char *str);
void	print(char *str);
char	*sa(s_stack *a, char type);
char	*ss(s_stack *a, s_stack *b);
char	*ra(s_stack *a, char type);
char	*rr(s_stack *a, s_stack *b);
char	*rra(s_stack *a, char type);
char	*rrr(s_stack *a, s_stack *b);
char	*pb(s_stack *a, s_stack *b, char type);
void    saf2(s_stack *a);
void    saf3(s_stack *a);
void    saf5(s_stack *a, s_stack *b);
void    sorting(s_stack *b, s_stack *a);
int		*new_arr(s_stack *a);
int		*quick_sort(int arr[], int low, int high);
int		partition(int arr[], int low, int high);
void	swap(int* a, int* b);
void	wm_pb(s_stack *a, s_stack *b);
void	check_b(s_stack *b);
int		check_is_v(char **av, int ac);
int		is_same(s_stack *a, int n);
int		all_less(s_stack *a, int n);
int		all_less_ra(s_stack *a, int n);
int		n_sa(s_stack *a);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	**ft_split(char *s, char c, s_stack *a);
char	**free_machine(char **s, size_t idx);
size_t	get_cnt(char *s, char c);
char	*ft_strdup(char *s1);
void	*ft_memcpy(void *dst, void *src, size_t n);

# endif	