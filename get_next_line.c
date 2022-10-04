#include "get_next_line.h"

int get_next_line(const int fd, char **line)
{
  char *buf[BUFF_SIZE + 1];
  static char *stash;
  char *tmp;
  int n;

  while ((n = read(fd, buf, BUFF_SIZE) > 0))
  {
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
      break;
  }
}

#include <fcntl.h>
