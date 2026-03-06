#if (defined(FILE_H) && defined(OSAL_H)) || defined(STRING_EXPORTS) || 1 
// TODO: remove 1

#ifndef STRING_OSAL_H
#define STRING_OSAL_H

// CUT
#include <diagnostic.h>
#include <str.h>
#include <osal.h>

#include "string.export.h"

// Static Class
#define PUBLIC STRING_EXPORT
#define TYPENAME OSAL

PUBLIC String *STATIC (WorkingDirectory)();

#undef TYPENAME
#undef PUBLIC
#endif

#endif
