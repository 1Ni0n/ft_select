/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguillot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 18:38:13 by aguillot          #+#    #+#             */
/*   Updated: 2017/12/01 14:55:29 by aguillot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int i;
	int c;

	if (s != NULL && f != NULL)
	{
		i = 0;
		c = ft_strlen(s);
		while (i < c)
		{
			(*f)(s);
			s++;
			i++;
		}
	}
}
