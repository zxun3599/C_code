#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Reverse(char* arr, int right,int left)
{
	while ( left<=right)
	{
		char tmp = 0;
		tmp=arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

void Print(char* arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
	  printf("%c", arr[i]);
	}
}

int main()
{
	char arr[20]="";

	scanf("%s", arr);
	
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	Reverse(arr,right,left);

	Print(arr,sz);


	return 0;
}