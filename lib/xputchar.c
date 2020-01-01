/*
** xputchar.c for Medev in /home/thormster/Dev/Melev/lib
** 
** Made by thormster
** Login   <thormster@localhost>
** 
** Started on  Sat Dec 28 23:29:51 2019 thormster
** Last update Sat Dec 28 23:29:52 2019 thormster
*/

#include	"lib.h"

void		xputchar(char c)
{
  write(1, &c, 1);
}
