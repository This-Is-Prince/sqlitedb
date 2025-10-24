#ifndef SQLITEDB_SERIALIZE
#define SQLITEDB_SERIALIZE

#include "types.h"

void serialize_row(Row*, void*);
void deserialize_row(void*, Row*);

#endif