/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:14:13 by ngennaro          #+#    #+#             */
/*   Updated: 2023/01/25 15:22:44 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_list *a)
{
	t_list	*b;

	pb(a, b);
	ft_printf("a\n");
	ft_printlist_index(a);
	ft_printf("b\n");
	ft_printlist_index(b);
}

//int main (void)
// {
//	int i;
//	int j;
//
//	j = 0;
//	i = 0;
//	while (i < 10)
//	{
//		i++;
//		printf("%i\n", i>>j&1);
//	}
//	i = 0;
//	j = 1;
//	printf ("\n\n");
//	while (i < 10)
//	{
//		i++;
//		printf("%i\n", i>>j&10);
//	}
//}