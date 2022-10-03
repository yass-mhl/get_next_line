#include "libft.h"

static int count_word(char const *s, char c)
{
  int i;
  int count;

  count = 0;
  i = 0;
  while (s[i] && s[i] == c)
    i++;
  if (s[i] == 0)
    return (0);
  while (s[i])
  {
    if (s[i] == c && s[i+ 1] != c && s[i + 1] != 0)
      count++;
    i++;
  }
  return (count);
}

static int count_letter(char const *s, char c)
{
  int i;

  i = 0;

  while(s[i] && s[i] != c)
    i++;
  return (i);
}

char			**ft_strsplit(char const *s, char c)
{
  char **res;
  int i;
  int word;
  int letter;

  if (s == NULL)
    return (0);
  res = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
  if (!res)
    return (NULL);
  i = 0;
  word = -1;
  while (s[i])
  {
    while (s[i] == c && s[i])
      i++;
    if (s[i])
    {
      word++;
      res[word] = (char *)malloc(sizeof(char) * count_letter(&s[i], c) + 1);
      if (!res[word])
        return (NULL);
      letter = 0;
      while (s[i] != c && s[i])
      {
        res[word][letter] = s[i];
        letter++;
        i++;
      }
      res[word][letter] = 0;
    }
  }
  word++;
  res[word] = 0;;
  return (res);
}

// int main(int ac, char **av)
// {
// 	(void)ac;
//   char **res;
//   int i;

//   res = ft_strsplit(av[1], av[2][0]);
//   i = 0;
//   while (*res)
//   {
//     printf("%s\n", *res++);
//   }
// }
