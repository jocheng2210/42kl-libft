/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocheng <jocheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:58:58 by jocheng           #+#    #+#             */
/*   Updated: 2022/06/03 14:59:47 by jocheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	size_t			n;

	str = malloc (sizeof(char) * (len + 1));
	i = 0;
	j = 0;
	n = 1;
	if (!s || !str)
		return (0);
	if (start >= ft_strlen(s))
		return (str);
	while (i < start)
		i++;
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
