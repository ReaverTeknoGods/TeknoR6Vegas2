/* This C file will intend to create a local memory environment
for memory blocks from a memory region in a remote process.
Initiate the memory region with
InitiateMemory(hProcess,startAddress,endAddress);
after that, all memory addresses will be called as if they
were mounted at the location in memory of the remote process.
byteScan() - scans x bytes and return location
*/
#include "stdafx.h"
#include "memory.h"
//char *bufferPtr; // ptr to main buffer
LPBYTE bufferPtr;
DWORD startAddr; //start of virtual buf
DWORD endAddr; //end of virtual buf.
DWORD bufSize; //size of virtual buf
int x;
bool InitiateMemory(HANDLE hProcess,DWORD startAddress,DWORD endAddress)
{
	DWORD dwBytesRead;
	bufferPtr = new BYTE[endAddress - startAddress];
	//read from remote process
	ReadProcessMemory(hProcess,(LPVOID)startAddress,bufferPtr,(endAddress - startAddress),&dwBytesRead);
	if(!dwBytesRead)
		return FALSE;
	//assign to ptrs
	startAddr = startAddress;
	endAddr = (startAddr + dwBytesRead);
	bufSize = dwBytesRead;
	return TRUE;
}
DWORD byteScan(char *bytes, int len)
{
	for(int i = 0; i < bufSize; i++)
	{
		if(*(BYTE *)(bufferPtr + i) == *(BYTE *)bytes)
		{
			for(int z = 0; z <= len; z++)
			{
				if(*(BYTE *)(bufferPtr + i + z) == *( BYTE *)(bytes+z))
				{
					if(z == len-1)
					{
						return startAddr + i;
					}
				}
				else
				{
					break;
				}
			}
		}
	}
	return 0;
}