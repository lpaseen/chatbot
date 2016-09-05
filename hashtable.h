#ifndef HASHTABLE_H_INCLUDED
#define HASHTABLE_H_INCLUDED

struct nlist { /* table entry: */
    struct nlist *next; /* next entry in chain */
    char *name; /* defined name */
    char *defn; /* replacement text */
};

struct hashtable {
    int size;
    unsigned int **data;
};

typedef struct nlist nlist;
typedef struct hashtable hashtable;

hashtable *create_hashtable(int expected_size);
void destroy_hashtable(hashtable *ht);
hashtable *regrow_hashtable(hashtable *ht, int new_hash_size);

nlist *lookup(hashtable *ht, char *s);
nlist *write(hashtable *ht, char *name, char *defn);

#endif // HASHTABLE_H_INCLUDED
