#ifndef SQLITEDB_STATEMENT
#define SQLITEDB_STATEMENT

#include "types.h"

PrepareResult prepare_statement(InputBuffer*, Statement*);
ExecuteResult execute_insert(Statement*, Table*);
ExecuteResult execute_select(Statement*, Table*);
ExecuteResult execute_statement(Statement*, Table*);

#endif