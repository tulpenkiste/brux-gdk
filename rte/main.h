    /*===========*\
| MAIN HEADER |
\*===========*/

#ifndef _MAIN_H_
#define _MAIN_H_

//Headers
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <cstring>
#include <stdarg.h>
#include <cmath>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <sys/stat.h>
#include <limits>
#include <sys/stat.h>


//If running on Windows, use Windows
//working directory functions.
#ifdef _WIN32
	#include "wdirent.h"
	#include <direct.h>
	#define getCD _getcwd

#else
	#include <dirent.h>
	#include <unistd.h>
	#define getCD getcwd
#endif // _WIN32

#include "cJSON.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_net.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL2_gfxPrimitives.h>
#include <squirrel.h>
#include <sqstdio.h>
#include <sqstdaux.h>
#include <sqstdmath.h>
#include <sqstdstring.h>
#include <sqstdsystem.h>

using namespace std;

//Defines
#ifdef SQUNICODE
	#define scvprintf vwprintf
	#else
	#define scvprintf vprintf
#endif

//Prototypes
int xyInit();
void xyStart();
void xyRun();
void xyEnd();
void xyPrint(HSQUIRRELVM v, const SQChar *s, ...);
void xyBindFunc(HSQUIRRELVM v, SQFUNCTION func, const SQChar *key);
void xyBindFunc(HSQUIRRELVM v, SQFUNCTION func, const SQChar *key, SQInteger nParams, const SQChar* sParams);
void xyBindAllFunctions(HSQUIRRELVM v);
int xyGetOS();
void xyUpdate();


#endif
