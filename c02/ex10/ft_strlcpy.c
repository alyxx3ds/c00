/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aciprian <aciprian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:50:39 by aleciprian        #+#    #+#             */
/*   Updated: 2025/02/27 18:50:39 by aleciprian       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;

    i = 0;
    while (src[i] != '\0')
    {
        i++;
    }

    if (size > 0)
    {
        unsigned int    j;

        for (j = 0; j < size - 1 && src[j] != '\0'; j++)
        {
            dest[j] = src[j];
        }
        dest[j] = '\0';
    }

    return (i);
}
