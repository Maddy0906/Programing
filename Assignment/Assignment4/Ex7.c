int reverse(char line[], int len)
{
	char word[20];

	if(y > 0)
			strcpy(word, "north");
	else if(y < 0)
			strcpy(word, "south");
	else	strcpy(word, "");		/* empty string */

	if(x > 0)
			strcat(word, "east");
	else if(x < 0)
			strcat(word, "west");
	else	strcat(word, "");		/* empty string */

	printf("%s\n", word);
}
