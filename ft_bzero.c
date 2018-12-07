/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eubotnar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 13:57:06 by eubotnar          #+#    #+#             */
/*   Updated: 2018/12/04 12:15:10 by eubotnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h" */
#include <string.h>

/* bzero is just memset called with 0 as the second param.*/

/*
    void	ft_bzero(void *s, size_t n)
    {
    	ft_memset(s, 0, n);
    }
*/

/* The standalone verion of ft_bzer.*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char*)s;
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
}