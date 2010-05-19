#ifndef _InterProcessCommunication_H_
#define _InterProcessCommunication_H_

#include <windows.h>

#ifdef __cplusplus
extern "C"
{
#endif				/* __cplusplus */

#define WM_STARDICT_SHOW_TRANSLATION (WM_USER + 300)

/* Maximum size of scanned text: strlen(text) < STARDICT_MAX_INDEX_KEY_SIZE. */
#define MAX_SCAN_TEXT_SIZE 256

typedef struct TCurrentMode {
	HWND WND;
	POINT Pt;
	size_t WordLen;
	/* in utf-8 */
	char MatchedWord[MAX_SCAN_TEXT_SIZE];
	int BeginPos;
} TCurrentMode;

typedef struct TGlobalDLLData {
	HWND ServerWND;
	HHOOK g_hHookMouse;
	UINT_PTR TimerID;
	HWND LastWND;
	POINT LastPt;
	TCurrentMode CurMod;
	TCHAR LibName[MAX_PATH];
} TGlobalDLLData;

extern TGlobalDLLData *GlobalData;


void ThTypes_Init();
void Thtypes_End();
/* Notify StarDict main application that a new word was scanned. 
Parameters:
	timeout - how long to way for the message to be processed (in milliseconds). */
void NotifyStarDictNewScanWord(UINT timeout);

#ifdef __cplusplus
}
#endif				/* __cplusplus */

#endif
