/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocheng <jocheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 15:55:39 by jocheng           #+#    #+#             */
/*   Updated: 2022/06/19 17:04:42 by jocheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int ft_lstsize(t_list *lst)
{
    int	counter;

    counter = 0;
    while (lst != (void *)0)
    {
        lst++;
        counter++;
    }
    return (counter);
}*/

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*copy;

	copy = lst;
	counter = 0;
	while (copy != NULL)
	{
		copy = copy->next;
		counter++;
	}
	return (counter);
}
