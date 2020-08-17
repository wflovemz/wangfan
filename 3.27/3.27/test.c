#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	int money = 20;
//	int count = 0;
//	count = 20 / 1;
//	int temp=0;
//	 temp = 20;
//	while (1){
//		int num = temp / 2;
//		count = count + num;
//		temp = temp / 2 + temp % 2;
//		if (temp == 1)
//			break;
//	}
//
//	printf("%d", count);
//	system("pause");
//	return 0;
//}
//char *Mystrchr(char*str1, int c)
//{
//	assert(str1);
//	char* match = str1;
//	while (*match != '\0'){
//		if (*match == c){
//			return match;
//		}
//		match++;
//	}
//	return NULL;
//}
//int main()
//{
//	char a[20] = "hello";
//    char *str=Mystrchr(a,'l');
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}
char *strncpy(char *dest, char *src,size_t n)
{
	assert(dest != NULL);
	assert(src != NULL);
	while (n){
		if (*src == NULL){
			break;
		}
		*dest++ = *src++;
		n--;
	}
	return dest;
}




int main()
{
	char a[256] = { 0 };
	char b[] = "i heat you ";
	strncpy(a, b, 7);
	printf("%s\n", a);
	system("pause");
	return 0;
}