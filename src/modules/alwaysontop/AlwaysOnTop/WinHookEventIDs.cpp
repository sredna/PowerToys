#include "pch.h"

#include "WinHookEventIDs.h"

UINT WM_PRIV_SETTINGS_CHANGED;

void InitializeWinhookEventIds()
{
    WM_PRIV_SETTINGS_CHANGED = RegisterWindowMessage(L"{11978F7B-221A-4E65-B8A8-693F7D6E4B25}");
}
