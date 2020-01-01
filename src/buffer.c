/*
** buffer.c for melev in /home/thormster/Dev/Melev/src
** 
** Made by thormster
** Login   <thormster@localhost>
** 
** Started on  Mon Dec 30 23:08:13 2019 thormster
** Last update Mon Dec 30 23:08:42 2019 thormster
*/

#include	"melev.h"

char		*bufferization()
{
  char		*buf;
  int		rd;

  rd = 0;
  buf = NULL;
  if ((buf = xmalloc(BUFSZ * sizeof(char))) == NULL)
    return (NULL);
  if ((rd = xread(1, buf, BUFSZ)) == ERR)
    return (NULL);
  buf[rd - 1] = '\0';
  return (buf);
}
