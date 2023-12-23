# ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 1000
# endif

size_t  ft_strlen(const char *str);
char  *get_next_line(int fd);
char  *ft_read_file(int fd, char *lines);
char  *ft_get_line(char *lines);
char  *ft_get_unread_lines(char *lines);
char  *ft_strjoin(char *s1, char *s2);
char  *ft_strchr(char *s, int c);

#endif
