#ifndef DB_H_INCLUDED
#define DB_H_INCLUDED

#define NOT_FOUND   0
#define FOUND       1
#define MATCH       2
#define NO_MATCH    3
#define DB_EOF         4
#define CANT_OPEN_FILE 5
#define MAX_WORDS 40
#define MAX_LETTERS 20
#define DEBUG FALSE

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


// ENUM TEST
enum{
A1,
B1,
C1,
};

int db_check(char*);
int db_get_value(char*, char*);
int db_root_check(char*, char*);
int db_check_pair(char*, char*);
int db_add_pair(char*, char*);
int db_add_pair2(char*, char*, char*);
int db_next_available_id(void);
int db_next_available_id_string(char* id_string);
int db_get_id(char*);
int db_copy_word(char*, int, char*); // copies string up to a space
int copy_to_delimiter(char*, char*, char, int); // copies string up to a delimiter
int db_get_id_string(char*, char*);
int db_get_id_string2(char*, char*);

#endif // DB_H_INCLUDED
