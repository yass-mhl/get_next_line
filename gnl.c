#include "get_next_line.h"

void ft_line(char **stash, char **line)
{
  int i;
  char *tmp;

  i = 0;
  while((*stash)[i] && (*stash)[i] != '\n')
    i++;
  if ((*stash)[i] == '\n')
  {
    *line = ft_strsub((*stash), 0, i);
    tmp = ft_strdup((*stash) + i + 1 );
    free((*stash));
    (*stash) = tmp;
    if ((*stash)[0] == 0)
      ft_strdel(stash);
  }
  else if((*stash)[i] == 0)
  {
    *line = ft_strdup(*stash);
    ft_strdel(stash);
  }
}

int get_next_line(int fd, char **line)
{
  int n;
  static char *stash;
  char *tmp;
  char buf[BUFF_SIZE + 1];

  n = BUFF_SIZE;
  if (fd < 0 || BUFF_SIZE < 1 || !line)
    return (-1);
  while(n > 0)
  {
    n = read(fd, buf, BUFF_SIZE);
    buf[n] = 0;
    if (stash == NULL)
      stash = ft_strdup(buf);
    else
    {
      tmp = ft_strjoin(stash, buf);
      free(stash);
      stash = tmp;
    }
    if (ft_strchr(stash, '\n'))
      break ;
  }
  ft_line(&stash, line);
   if (n < 0)
    return (-1);
  else if (n == 0 && stash == NULL)
    return (0);
  else
    return (1);
}

int main()
{
  int fd;
	char *line;

	fd = open("test.txt", O_RDONLY);
  while(get_next_line(fd, &line) > 0)
    printf("%s\n", line);
}
