
#ifndef _SCRIPTGLUE_H_
#define _SCRIPTGLUE_H_

#include "ScriptingHost.h"

// referenced by ScriptingHost.cpp
extern JSFunctionSpec ScriptFunctionTable[];
extern JSPropertySpec ScriptGlobalTable[];

// dependencies (moved to header to avoid L4 warnings)
// .. from main.cpp:
extern int fps;
extern void kill_mainloop();
extern CStr g_CursorName;
extern void StartGame();
extern void EndGame();
// .. other
#if OS_WIN
extern int GetVRAMInfo(int&, int&);
#endif

#endif	// #ifndef _SCRIPTGLUE_H_
