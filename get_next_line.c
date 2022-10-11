#include "get_next_line.h"

char *ft_read(int fd, char *stash)
{
  char buf[BUFFER_SIZE + 1];
  int n;

  n = 1;
  while(n != 0 && !ft_strchr(stash, '\n'))
  {
    n = read(fd, buf, BUFFER_SIZE);
    if (n == -1)
			return (NULL);
    buf[n] = 0;
    stash = ft_strjoin(stash, buf);
  }
  return (stash);
}

char *ft_line(char *stash)
{
  int i;
  char *str;

  if (!str[0])
    return (NULL);
  i = 0;
  while (stash[i] && stash[i] != '\n')
    i++;
  str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
  while (stash[i] && stash[i] != '\n')
		str[i++] = stash[i++];
  if (stash[i] == '\n')
		str[i++] = stash[i++];
  str[i] = 0;
  return (str);
}

char *get_next_line(int fd)
{
  static char *stash;
  char *line;
  if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
  stash = ft_read(fd, stash);
  if (!stash)
    return (NULL);

}
