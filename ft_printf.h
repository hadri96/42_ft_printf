/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student-42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 07:06:40 by hmorand           #+#    #+#             */
/*   Updated: 2023/11/01 07:07:46 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *i);
void	ft_putstr(char *str, int *i);
void	ft_putnbr(int nb, int *i);
void	ft_putunnbr(unsigned int nb, int *i);
void	ft_puthex_long(long unsigned int nb, int *i);
void	ft_puthex_up(unsigned int nb, int *i);
void	ft_puthex_low(unsigned int nb, int *i);
void	ft_putptr(void *ptr, int *i);
int		ft_printf(const char *str, ...);

#endif
