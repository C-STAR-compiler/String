#ifndef STR_H
#define STR_H

// C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// CUT
#include <diagnostic.h>
#include <oop.h>
#include <exception.h>

#include "_format.h"
#include "string.export.h"

// A string of characters, with length
#define PUBLIC STRING_EXPORT
#define TYPENAME String

OBJECT (const char*) INHERIT (char*)
  int   length;
END_OBJECT("");

PUBLIC String *_(Concat)(String *other);
PUBLIC String *_(Cat)(const char *other);
PUBLIC String *_(Append)(char c);
PUBLIC String *_(Prepend)(char c);
PUBLIC String *_(Insert)(int index, char c);
PUBLIC String *_(SubString)(int start, int length);
PUBLIC String *_(Trim)();
PUBLIC String *_(ToLower)();
PUBLIC String *_(ToUpper)();

PUBLIC String *CONST (Copy)();

PUBLIC int CONST (Equals)(const String *other);
PUBLIC int CONST (Eq)(const char *other);
PUBLIC int CONST (Compare)(const String *other);
PUBLIC int CONST (Cmp)(const char *other);
PUBLIC int CONST (Contains)(const String *other);
PUBLIC int CONST (Cnt)(const char *other);
PUBLIC int CONST (StartsWith)(const char *other);
PUBLIC int CONST (EndsWith)(const char *other);

PUBLIC String *STATIC (Format)(const char *format, ...);
PUBLIC String *STATIC (ToString)(const void *object);
PUBLIC String *STATIC (ToStringType)(const void *object, const Type *type);
PUBLIC String *STATIC (ToStringFormat)(const void *object, const Type *type, const char *format);

FOREIGN_VIRTUAL(ToString,    String_Copy);
FOREIGN_VIRTUAL(KeyComparer, String_Cmp);
FOREIGN_VIRTUAL(Comparer,    String_Compare);

#undef TYPENAME
#undef LIB_EXPORT
#endif
