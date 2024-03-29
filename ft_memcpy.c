/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:31:57 by abiari            #+#    #+#             */
/*   Updated: 2019/10/14 08:21:55 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t i;

	i = 0;
	if (!(str1 || str2))
		return (NULL);
	while (i < n)
	{
		((unsigned char*)str1)[i] = ((unsigned char*)str2)[i];
		i++;
	}
	return ((unsigned char*)str1);
}
