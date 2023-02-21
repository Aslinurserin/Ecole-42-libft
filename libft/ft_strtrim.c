/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserin <aserin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:54:36 by aserin            #+#    #+#             */
/*   Updated: 2022/10/21 12:23:59 by aserin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*ret;

	if (!s1)
		return (NULL);
	while (*s1 && ft_strchr(set, *((char *)s1)))
		s1++;
	start = (char *)s1;
	while (*s1)
		s1++;
	while (ft_strchr(set, *((char *)s1)) && s1 >= start)
		s1--;
	s1++;
	ret = malloc(sizeof(char) * (s1 - start + 1));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, start, s1 - start + 1);
	return (ret);
}
