#if (defined(FILE_H) && defined(PATH_H)) || defined(STRING_EXPORTS) || 1 
// TODO: remove 1

#ifndef STRING_PATH_H
#define STRING_PATH_H

// CUT
#include <diagnostic.h>
#include <str.h>
#include <file.h>
#include <path.h>

#include "string.export.h"

// Static Class
#define PUBLIC STRING_EXPORT
#define TYPENAME Path

PUBLIC String *STATIC (File)(const char *path);
PUBLIC String *STATIC (FileName)(const char *path);
PUBLIC String *STATIC (Extension)(const char *path);
PUBLIC String *STATIC (Folder)(const char *path);
PUBLIC String *STATIC (Combine)(const char *path, const char *file);

#undef TYPENAME
#undef PUBLIC
#endif

#endif
