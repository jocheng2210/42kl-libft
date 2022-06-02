/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocheng <jocheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:06:09 by jocheng           #+#    #+#             */
/*   Updated: 2022/06/02 14:55:26 by jocheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	c;
	char	*s;
	char	*res;

	i = 0;
	c = (char)ch;
	s = (char *)str;
	res = NULL;
	if (c == '\0')
		return (s + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == c)
			res = &s[i];
		i++;
	}
	return (res);
}
