/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocheng <jocheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:05:34 by jocheng           #+#    #+#             */
/*   Updated: 2022/05/31 21:36:37 by jocheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *array_1, const void *array_2, size_t n)
{
	unsigned char	*arr_1;
	unsigned char	*arr_2;
	size_t			i;

	i = 0;
	arr_1 = (unsigned char *)array_1;
	arr_2 = (unsigned char *)array_2;
	while (i < n)
	{
		if (arr_1[i] != arr_2[i])
			return (arr_1[i] - arr_2[i]);
		i++;
	}
	return (0);
}
