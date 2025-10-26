#ifndef SQLITEDB_PAGER
#define SQLITEDB_PAGER

#include "types.h"

Pager* pager_open(const char*);
void* get_page(Pager*, uint32_t);
void pager_flush(Pager*, uint32_t, uint32_t);

#endif