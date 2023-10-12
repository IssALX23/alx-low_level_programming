#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct dlistint_s {
  int n;
  struct dlistint_s *next;
  struct dlistint_s *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
