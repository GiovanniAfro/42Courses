/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:36:01 by gcavanna          #+#    #+#             */
/*   Updated: 2022/12/06 18:39:14 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		ft_formats(va_list args, const char format);
int		ft_print_char(char c);
int		ft_print_str(char *str);
int		ft_print_ptr(unsigned long long ptr);
int		ft_print_nbr(int n);
int		ft_print_unsigned_nbr(unsigned int n);
int		ft_print_hex(unsigned int num, const char format);
int		ft_print_percent(void);

void	ft_putstr(char *str);
void	ft_put_ptr(uintptr_t num);
int		ft_ptr_len(uintptr_t num);
char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int n);
int		ft_num_len(unsigned int num);
void	ft_put_hex(unsigned int num, const char format);
int		ft_hex_len(unsigned int num);
void	ft_putstr(char *str);
void	ft_putchar_fd(char c, int fd);

#endif
