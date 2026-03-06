#include <string.osal.h>

#ifdef STRING_OSAL_H

#define TYPENAME OSAL

String *STATIC (WorkingDirectory)()
{
  return BUFFER(workdir(sizeof(buffer), buffer));
}

#undef TYPENAME
#endif