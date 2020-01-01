/*
** xread.c for Medev in /home/thormster/Dev/Melev/lib
** 
** Made by thormster
** Login   <thormster@localhost>
** 
** Started on  Sat Dec 28 23:30:20 2019 thormster
** Last update Sat Dec 28 23:30:20 2019 thormster
*/

#include	"lib.h"

int		xread(int fd, char *buf, int size)
{
  int		srd;

  if ((srd = read(fd, buf, size)) == ERR)
    {
      perror("read");
      return (ERR);
    }
  return (srd);
}
