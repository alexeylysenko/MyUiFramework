#pragma once

#include <QtCore/qglobal.h>

#if defined(MYUIFRAMEWORK_LIBRARY)
#  define MYUIFRAMEWORK_EXPORT Q_DECL_EXPORT
#else
#  define MYUIFRAMEWORK_EXPORT Q_DECL_IMPORT
#endif
