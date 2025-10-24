#ifndef SQLITEDB_TABLE
#define SQLITEDB_TABLE

#include "types.h"

Table* new_table();
void free_table(Table*);

#endif