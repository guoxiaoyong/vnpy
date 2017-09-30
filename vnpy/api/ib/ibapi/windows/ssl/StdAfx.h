﻿/* Copyright (C) 2013 Interactive Brokers LLC. All rights reserved. This code is
 * subject to the terms and conditions of the IB API Non-Commercial License or
 * the IB API Commercial License, as applicable. */

#ifdef _MSC_VER

#ifdef TWSAPISSLDLL
#define TWSAPISSLDLLEXP __declspec(dllexport)
#endif

#define assert ASSERT
#define snprintf _snprintf
#include <WinSock2.h>
#include <Windows.h>
#define IB_WIN32

#else

#include <sys/syscall.h>
#include <sys/types.h>
#include <unistd.h> // defines _POSIX_THREADS, @see http://bit.ly/1pWJ8KQ#tag_13_80_03_02

#if defined(_POSIX_THREADS) && (_POSIX_THREADS > 0)
#include <pthread.h>
#define IB_POSIX
#else
#error "Not supported on this platform"
#endif

#endif // #ifdef _MSC_VER

#include <algorithm>
#include <deque>
#include <openssl/bio.h>
#include <openssl/err.h>
#include <openssl/ssl.h>
#include <string>
#include <vector>

#ifndef TWSAPISSLDLLEXP
#define TWSAPISSLDLLEXP
#endif
#ifndef TWSAPIDLLEXP
#define TWSAPIDLLEXP
#endif
