/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocheng <jocheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:50:55 by jocheng           #+#    #+#             */
/*   Updated: 2022/06/15 22:08:55 by jocheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_string;
	size_t	i;

	if (s)
	{
		i = 0;
		new_string = malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!new_string)
			return (NULL);
		while (i < ft_strlen(s))
		{
			new_string[i] = f((unsigned int)i, s[i]);
			i++;
		}
		new_string[i] = 0;
		return (new_string);
	}
	return (NULL);
}
