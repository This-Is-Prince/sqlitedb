#ifndef SQLITEDB_STATEMENT
#define SQLITEDB_STATEMENT

#include "types.h"

PrepareResult prepare_statement(InputBuffer*, Statement*);
void execute_statement(Statement*);

#endif