/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student-42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 07:06:40 by hmorand           #+#    #+#             */
/*   Updated: 2023/11/01 07:07:46 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *i)
{
	int	err;

	err = write(1, &c, 1);
	if (err == -1)
		*i -= 10000;
	else
		*i += 1;
}

void	ft_putstr(char *str, int *i)
{
	int	j;

	j = 0;
	if (!str)
	{
		ft_putstr("(null)", i);
		return ;
	}
	while (str[j])
		ft_putchar(str[j++], i);
}
