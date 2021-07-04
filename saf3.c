#include "push_swap.h"

void    saf2(s_stack *a)
{
    int i;

    i = 0;
    if (a->arr[i] > a->arr[i + 1])
        print(sa(a, 'a'));
}

void    saf3(s_stack *a)
{
    int i;

    i = 1;
    if (a->arr[i] < a->arr[i - 1] && a->arr[i] > a->arr[i + 1])
    {
        print(ra(a, 'a'));
        print(sa(a, 'a'));
    }
    else if (a->arr[i - 1] > a->arr[i + 1] && a->arr[i + 1] > a->arr[i])
        print(ra(a, 'a'));
    else if (a->arr[i] > a->arr[i - 1] && a->arr[i - 1] > a->arr[i + 1])
        print(rra(a, 'a'));
    else if (a->arr[i + 1] > a->arr[i - 1] && a->arr[i - 1] > a->arr[i])
        print(sa(a, 'a'));
    else if (a->arr[i] > a->arr[i + 1] && a->arr[i + 1] > a->arr[i - 1])
    {
        print(rra(a, 'a'));
        print(sa(a, 'a'));
    }
}

void    saf5(s_stack *a, s_stack *b)
{
    int p;
    int index;
    int min;
    int i;
    int j;
    int k;

    k = 2;
    while (k--)
    {
        i = 0;
        j = a->top;
		index = 0;
        min = a->arr[0];
        while (j--)
        {
            if (a->arr[i] <= min)
            {
                min = a->arr[i];
                index = i;
            }
            i++;
        }
        p = a->top - index;
        if (index == 1)
        {
            if (a->arr[0] < a->arr[2])
                print(sa(a, 'a'));
            else
                print(ra(a, 'a'));
        }
        else if ((index + 1) < (a->top / 2))
            while (index != 0)
                print(ra(a, 'a'));
        else
            while (p--)
                print(rra(a, 'a'));
        print(pb(a, b, 'b'));
    }
    saf3(a);
    print(pb(b, a, 'a'));
    print(pb(b, a, 'a'));
}
