/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 12:10:47 by abonnel           #+#    #+#             */
/*   Updated: 2020/12/09 12:11:00 by abonnel          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char			*ft_substr(char *s, unsigned int start, size_t len);
char			*ft_strjoin(char *s1, char *s2);
size_t			ft_strlen(const char *s);
char			*ft_strdup(const char *s1);
void			*ft_calloc(size_t count, size_t size);
int				get_next_line(int fd, char **line);
void			*ft_calloc(size_t count, size_t size);
void			free_set_null(char **ptr);

#endif