#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct identifierStruct - structure definition of a printTypeStruct
 * @indentifier: type
 * @printer: function to print
 */


typedef struct identifierStruct
{
char *indentifier;
int (*printer)(va_list);
} identifierStruct;



#endif
