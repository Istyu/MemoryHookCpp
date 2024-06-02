#include "stdafx.h"
#include "stdio.h"
#include <windows.h>
#include "..\includes\injector\injector.hpp"
#include "..\includes\IniReader.h"

int input1Hook;

void Init()
{
	char szSection[] = "Misc";
	char szKey[] = "input1Value";
	CIniReader iniReader("HookSettings.ini");

	input1Hook = iniReader.ReadInteger(szSection, szKey, 0);

	injector::WriteMemory<int>(0x407020, input1Hook, true);
}