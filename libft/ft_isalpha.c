/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserin <aserin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:52:58 by aserin            #+#    #+#             */
/*   Updated: 2022/10/21 12:33:32 by aserin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int alpha)
{
	if (alpha >= 'a' && alpha <= 'z')
		return (1);
	else if (alpha >= 'A' && alpha <= 'Z')
		return (1);
	else
		return (0);
}
