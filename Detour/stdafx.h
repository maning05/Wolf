#pragma once

#include <Windows.h>
#include <detours.h>
#include <iostream>

void InitDetours();
__int64 MyFunction();

typedef INT64(__stdcall* Address)();
Address OldFunction = NULL;