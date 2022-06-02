/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocheng <jocheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:58:58 by jocheng           #+#    #+#             */
/*   Updated: 2022/06/02 22:47:18 by jocheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	size_t			n;

	str = malloc (sizeof(char) * (len +1));
	i = 0;
	j = 0;
	n = 1;
	if (start > ft_strlen(s) || !str)
	{
		return (0);
	}
	while (i < start)
	{
		i++;
	}
	while (n <= len)
	{
		*(str + j) = *(s + i);
		n++;
		i++;
		j++;
	}
	*(str + j) = '\0';
	return (str);
}
