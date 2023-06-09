#include "hash_tables.h"
/*
descprition: A function to create a hash table
@size: number of nodes to make in the new has table
return: A pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
    // Creates a new hash tabe
    hash_table_t *hash_tab = (hash_table_t *) malloc(sizeof(hash_table_t));
    
    //if memory fails to be allocated for the hash table
    if (hash_tab == NULL)
    {
        fprintf(stderr, "Error allocating memory for hashtable\n");
        return (NULL);
    }

    //set where pointers in hash_tab should point
    hash_tab->size = size;
    hash_tab-> count = 0;
    
    hash_tab->items = (ht_item**) calloc(hash_tab->size, sizeof(ht_item));
    
    //if memory fails to be allocated for the item in table
    if (hash_tab->items == NULL)
    {
        fprintf(stderr, "Error allocating memory for item\n");
        return (NULL);
    }
    //initialize all the element in the table to NULL
    for(int i = 0; i < hash_tab->size; i++)
    {
        hash_tab->items[i] = NULL;
    }

    return hash_tab;
}
