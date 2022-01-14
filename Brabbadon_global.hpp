#pragma once

#include <QtCore/qglobal.h>

#if defined(BRABBADON_LIBRARY)
#  define BRABBADON_EXPORT Q_DECL_EXPORT
#else
#  define BRABBADON_EXPORT Q_DECL_IMPORT
#endif
