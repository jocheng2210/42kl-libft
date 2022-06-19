/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocheng <jocheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:02:23 by jocheng           #+#    #+#             */
/*   Updated: 2022/06/03 15:26:10 by jocheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	ret = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ret)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		ret[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		ret[i + j] = s2[j];
		j++;
	}
	ret[i + j] = '\0';
	return (ret);
}
