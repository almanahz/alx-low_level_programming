#ifndef ALX_H
#define ALX_H

#include <stdio.h>
#include <stdlib.h>

typedef struct ht_item
{
    char *key;
    char *value;
} ht_item;

typedef struct hash_table_t
{
    ht_item **items;
    int size;
    int count;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

#endif

