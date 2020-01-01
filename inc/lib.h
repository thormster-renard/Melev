/*
** lib.h for Medev in /home/thormster/Dev/Melev/inc
** 
** Made by thormster
** Login   <thormster@localhost>
** 
** Started on  Sat Dec 28 23:29:12 2019 thormster
** Last update Sun Dec 29 21:44:37 2019 thormster
*/

#ifndef		__LIB_H__
#define		__LIB_H__

#include	<errno.h>
#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>

#define		ERR	-1

void		xfree(void*);
void		xfree_tab(char**);
void		*xmalloc(size_t);
void		xputchar(char);
void		xputstr(char*);
int		xstrlen(char*);
int		xread(int, char*, int);
int		xstrncmp(char*, char*, int);

#endif
