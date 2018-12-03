/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 10:24:03 by eubotnar          #+#    #+#             */
/*   Updated: 2018/12/03 13:22:03 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*dst;

	dst = (unsigned char*)s;
	while (len > 0)
	{
		*dst = (unsigned char)c;
		dst++;
		len--;
	}
	return (s);
}
