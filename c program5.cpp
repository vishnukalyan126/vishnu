#include <stdio.h>

int main()
{
	char a;
    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='s')
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
    return 0;
}
