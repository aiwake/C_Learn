#include <stdio.h>
#include <string.h>

int main()
{
    printf("Caesar Encryption Program\n\n");

    int key;
    char ptext[512];
    char alphabet[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	printf("Key        >");
	scanf("%d",&key);

    printf("Plaintext  >");
    getchar(); // clear buffer
    scanf("%[^\n]s",ptext);
    

    int i;
    for(i=0;i<strlen(alphabet);i++)
    {
		char och=ptext[i];
		if('a'<=och && och <= 'z')
		{
			ptext[i]='a'+(och - 'a' + key) % 26;
	    }
		else if('A'<=och && och <= 'Z')
		{
			ptext[i]='A'+(och - 'A' + key) % 26;
	    }       
    }
	printf("Ciphertext >%s\n",ptext);
	getch();
}
