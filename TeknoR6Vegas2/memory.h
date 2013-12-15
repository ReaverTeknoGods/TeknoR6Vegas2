#include <windows.h>
bool InitiateMemory(HANDLE hProcess,DWORD startAddress,DWORD endAddress);
DWORD byteScan(char *bytes, int len);