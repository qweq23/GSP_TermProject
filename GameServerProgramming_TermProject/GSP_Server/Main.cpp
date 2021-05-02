#include "pch.h"

int main()
{
	WSADATA wsa_data;
	int error = WSAStartup(MAKEWORD(2, 0), &wsa_data);

	if (error)
	{
		exit(-1);
	}


	WSACleanup();
}
