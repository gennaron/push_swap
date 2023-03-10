/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:24:19 by ngennaro          #+#    #+#             */
/*   Updated: 2023/02/08 04:46:47 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	sa(t_list **a)
{
	t_list	*temp;

	if ((*a)->pos != -1)
		ft_printf("sa\n");
	temp = *a;
	*a = (*a)->next;
	temp->next = (*a)->next;
	(*a)->next = temp;
	ft_lstadd_back(a, temp);
}

void	pa(t_list **a, t_list **b)
{
	t_list	*temp;

	if ((*b)->pos != -1)
		ft_printf("pa\n");
	temp = *b;
	*b = (*b)->next;
	temp->next = *a;
	*a = temp;
}

void	pb(t_list **a, t_list **b)
{
	t_list	*temp;

	if ((*a)->pos != -1)
		ft_printf("pb\n");
	temp = *a;
	*a = (*a)->next;
	temp->next = *b;
	*b = temp;
}

void	ra(t_list **a)
{
	t_list	*temp;

	if ((*a)->pos != -1)
		ft_printf("ra\n");
	temp = *a;
	*a = (*a)->next;
	temp->next = NULL;
	ft_lstadd_back(a, temp);
}
