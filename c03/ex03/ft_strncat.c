/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleciprian <aciprian@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 21:20:35 by aleciprian        #+#    #+#             */
/*   Updated: 2025/02/27 21:20:35 by aleciprian       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0' && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

    return (dest);
}
