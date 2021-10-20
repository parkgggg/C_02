/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:03:24 by gupark            #+#    #+#             */
/*   Updated: 2021/10/20 18:04:27 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	printaddr(char *addr)
{
	char str[15];
	long addr_hex;
	int	i;

	addr_hex = (long)addr;
	i = 0;
	while(addr_hex > 0)
	{
		str[i] = addr_hex % 16;
		if(str[i] < 10)
			str[i] += '0';
		else
			str[i] += 87;
		addr_hex = addr_hex / 16;
		i++;
	} 
	while(i < 15)
		str[i++] = '0';
	while(--i >= 0)
		write(1, &str[i], 1);
	write(1, ": ", 2);
}

void print_hexacode(char *str, int index)
{
	int digit1;
	int digit2;
	int index2;

	index2 = 0;
	while(index2 < 16 && str[index + index2])
	{
		digit1 = (str[index + index2] / 16) + '0';
		if(str[index + index2] % 16 > 9)
			digit2 = (str[index + index2] % 16) - 10 + 'a';
		else
			digit2 = (str[index + index2] % 16) + '0';
		write(1, &digit1, 1);
		write(1, &digit2, 1);
		if(index2 % 2 == 1)
			write(1, " ", 1);
		index2++;
	}
	if(str[index + index2] == '\0')
			write(1, "00 ", 3);
	
}

void print_space(char *str, int index)
{
	int index2;
	int size;

	index2 = 0;
	size = 0;
	while(str[index + index2] && index2 < 16)
	{
		size++;
		index2++;
		if(str[index + index2] == '\0')
			size++;
	}
	index2 = 0;
	while(index2++ < 16 - size)
	{
		write(1, " ", 1);
	}
}

void print_str(char *str, int index)
{
	int index2;

	index2 = 0;
	print_space(str, index);
	while(index2 < 16 && str[index + index2])
	{
		if(str[index + index2] >= 32 && str[index + index2] != 127)
			write(1, &str[index + index2], 1);
		else
			write(1, ".", 1);
		index2++;
	}
	if(str[index + index2] == '\0')
		write(1, ".", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int index;
	char *str;
	
	index = 0;
	str = (char *)addr;
	while(index < size && str[index])
	{
		printaddr(&str[index]);
		print_hexacode(str, index);
		print_str(str, index);
		write(1, "\n", 1);
		index += 16;
	}
	return (addr);
}
