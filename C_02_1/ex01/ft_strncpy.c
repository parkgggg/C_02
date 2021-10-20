/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:28:39 by gupark            #+#    #+#             */
/*   Updated: 2021/10/19 10:28:40 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int a)
{
	unsigned int index;

	index = 0;
	while(index < a && src[index])
	{
		dest[index] = src[index];
		index++;
	}
	while(index < a)
	{
		dest[index] = '\0';
		index++;
	}
	return dest;
}