#include <Windows.h>
#include <stdio.h>

WINAPI Say_hello(LPVOID lpThreadParameter) {
	while (1)
	{
		printf("[Task 1] Say hello\r\n");
		Sleep(1000);
	}
}
void main() {
	HANDLE threa1 = CreateThread(NULL, 16, Say_hello, NULL, NULL, NULL);
	while (1) {
		printf("[Task 2] Xin chao\r\n");
		Sleep(1000);
	}
}