/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocheng <jocheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:05:58 by jocheng           #+#    #+#             */
/*   Updated: 2022/05/31 21:05:58 by jocheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	char	*s;

	i = 0;
	len = 0;
	s = (char *)src;
	if (!dst)
		return (0);
	len = ft_strlen(s);
	if (!size)
		return (len);
	while (s[i] && i < size - 1)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
