/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:33:14 by gupark            #+#    #+#             */
/*   Updated: 2021/10/19 10:33:17 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char 	*ft_strupcase(char *str)
{
	int index;

	index = 0;
	while(str[index])
	{
		if(str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] -  32;
		}
		index++;
	}
	return (str);
}