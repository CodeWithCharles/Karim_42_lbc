/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_visualisation_memory.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:50:45 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/28 23:15:26 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

size_t  count_words(const char *s, char sep);
void    free_strs(char ***strs, size_t len);
const char  *copy_until_sep(char **strs, const char *s, char sep);

char    **ft_split(const char *str, char sep)
{
    char    **strs;
    size_t  word_count;
    size_t  current_index;

    word_count = count_words(str, sep);
    printf("%ld\n", word_count);
    strs = malloc(sizeof(char *) * (word_count + 1));
    if (strs)
    {
        current_index = 0;
        while(current_index < word_count)
        {
            str = copy_until_sep(strs + current_index++, str, sep);
            if (!str)
                return (free_strs(&strs, word_count), NULL);
        }
        strs[word_count] = NULL;
    }
    return (strs);
}

size_t  ft_strlen(char *str)
{
    char    *org;

    while(*str)
        str++;
    return (str - org);
}

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t  i;
    
    i = 0;
    if (size != 0)
    {
        while (src[i] != '\0' && i < (size - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (ft_strlen(src));
}

size_t  count_words(const char *s, char sep)
{
    size_t  word_count;

    word_count = 0;
    while (*s)
    {
        if (*s == sep)
            s++;
        else
        {
            while (*s && *s != sep)
                s++;
            word_count++;
        }
    }
    return (word_count);
}

const char  *copy_until_sep(char **strs, const char *s, char sep)
{
    size_t  len;

    while(*s && *s == sep)
        s++;
    len = 0;
    while(s[len] && s[len] != sep)
        len++;
    *strs = malloc(len + 1);
    if (*strs == NULL)
        return (NULL);
    ft_strlcpy(*strs, s, len + 1);
    s+= len + 1;
    return (s);
}

void    free_strs(char ***strs, size_t len)
{
    while(len)
        free((*strs)[(len-- - 1)]);
    free(*strs);
}

int main(int ac, char **av)
{
    char    **dest;


    dest = ft_split(av[1], av[2][0]);
	while (*dest)
		printf("Addresse de dest : %p\n Addresse de la chaine : %p\n Valeur de la chaine : %s\n\n", dest++, &(*dest), *dest);
    return (0);
}
