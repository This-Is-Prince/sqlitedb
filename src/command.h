#ifndef SQLITEDB_COMMAND
#define SQLITEDB_COMMAND

#include "types.h"
#include "inputbuffer.h"

MetaCommandResult do_meta_command(InputBuffer*, Table*);

#endif