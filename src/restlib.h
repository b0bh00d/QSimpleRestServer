#pragma once

#ifdef Q_OS_WIN
#define EXPORT_API __declspec(dllexport)
#define IMPORT_API __declspec(dllimport)
#endif
