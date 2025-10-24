#include "table.h"
#include <stdlib.h>

Table* new_table() {
    Table* table = (Table*)malloc(sizeof(Table));

    table->num_rows = 0;
    for(uint32_t i = 0; i < TABLE_MAX_PAGES; i++ ){
        table->pages[i] = NULL;
    }

    return table;
}

void free_table(Table* table) {
    if (table != NULL) {
        for (int i = 0; i < table->num_rows; i++) {
            if (table->pages[i] != NULL) {
                free(table->pages[i]);
            }
        }
        free(table);
    }
}