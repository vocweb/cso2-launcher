#include "strtools.h"
#include "hooks.h"
#include "engine/cso2/cso2gamemanager.h"

HOOK_DETOUR_DECLARE(hkSys_SpewFunc);

NOINLINE int hkSys_SpewFunc(int spewType, char* pMsg)
{
	printf(pMsg);

	if (spewType == 3)
	{
		//spewType = 1;
		//return 0;
		assert(false);
	}

	return HOOK_DETOUR_GET_ORIG(hkSys_SpewFunc)(spewType, pMsg);
}

typedef struct IpAddressInfo_s
{
	std::string szIpAddress;
	uint16_t uPort;
} IpAddressInfo_t;

HOOK_DETOUR_DECLARE(hkGetServerIpAddressInfo);

NOINLINE void __fastcall hkGetServerIpAddressInfo(IpAddressInfo_t* pIpAddressInfo)
{
	pIpAddressInfo->szIpAddress = "127.0.0.1";
	pIpAddressInfo->uPort = 30001;
}

void ConnectEngineLibraries(uintptr_t dwEngineBase)
{
	if (!g_pCSO2GameManager)
		g_pCSO2GameManager = (CSO2GameManager*)(dwEngineBase + 0xAA8D40);
}

void BytePatchEngine(uintptr_t dwEngineBase)
{ 
	// allows the player to connect without Packet_UserInfo
	// jmp
	uint8_t connectClientPatch[] = { 0xEB };
	//WriteProtectedMemory( connectClientPatch, (dwEngineBase + 0x68DF4)); // chn
	WriteProtectedMemory(connectClientPatch, (dwEngineBase + 0x69DD4));

	// disables UDP hole puncher checks
	// jmp
	//uint8_t sendPacketPatch[] = { 0xE9, 0xA3, 0x02, 0x00, 0x00, 0x90 };
	uint8_t sendPacketPatch[] = { 0xE9, 0xF7, 0x02, 0x00, 0x00, 0x90 };
	//WriteProtectedMemory(sendPacketPatch, (dwEngineBase + 0x113152));	// chn
	WriteProtectedMemory(sendPacketPatch, (dwEngineBase + 0x12C172));
}

extern DWORD WINAPI ConsoleThread(LPVOID lpArguments);

static PLH::x86Detour* testDtr;

ON_LOAD_LIB(engine)
{ 
	uintptr_t dwEngineBase = GET_LOAD_LIB_MODULE();

	//HOOK_DETOUR(dwEngineBase + 0x13B5E0, hkSys_SpewFunc);
	HOOK_DETOUR(dwEngineBase + 0x155C80, hkSys_SpewFunc);
	//HOOK_DETOUR(dwEngineBase + 0x2615C0, hkGetServerIpAddressInfo);

	ConnectEngineLibraries(dwEngineBase);
	BytePatchEngine(dwEngineBase);

	CloseHandle(CreateThread(nullptr, NULL, ConsoleThread, nullptr, NULL, nullptr));
}

