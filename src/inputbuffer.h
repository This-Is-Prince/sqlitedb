#ifndef SQLITEDB_INPUT_BUFFER
#define SQLITEDB_INPUT_BUFFER

#include "types.h"

InputBuffer* new_input_buffer();
void close_input_buffer(InputBuffer*);
void read_input(InputBuffer*);

#endif