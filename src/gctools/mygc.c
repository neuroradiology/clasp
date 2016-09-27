// Compile mps here
//
//
// There are some configuration settings that can be set in the
// top level Jamroot.jam file
// <define>CONFIG_VAR_COOL  - detailed, slow MPS debugging
// <define>CONFIG_PF_ANSI    - use the generic "ANSI" platform
// <define>CONFIG_THREAD_SINGLE - single threaded
// Don't do static analysis on the garbage collector code
#ifndef RUNNING_GC_BUILDER
#include <config.h>
#include <clasp/gctools/configure_memory.h>

#ifdef USE_MPS
#include <clasp/mps/code/mps.c>
#endif
#endif // #ifndef RUNNING_GC_BUILDER
