#ifndef SQLITEDB_TABLE
#define SQLITEDB_TABLE

#include "types.h"

Table* db_open(const char*);
void db_close(Table*);
void free_table(Table*);

#endif