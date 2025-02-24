/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosami <mosami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 19:20:24 by motaz             #+#    #+#             */
/*   Updated: 2025/01/31 20:36:06 by mosami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 7
#endif

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

char *get_next_line(int fd);
char *ft_strjoin(char *s1, char *s2);
int ft_strlen(const char *s);
char *ft_strchr(const char *s, int c);
char *read_first_line(int fd, char *text);
char *get_line_test(char *text);
char *clean_first_line(char *text);
void *ft_calloc(unsigned int count, unsigned int size);

#endif