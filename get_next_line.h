#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

char	*get_next_line(int fd);
size_t ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
char *ft_strjoin(char *s1, char *s2);
char *ft_strdup(char *s);
char *ft_new_stash(char *stash);

#endif
