

void		addCharToCurrentToken(int c)
{
	if (currentTokenLength < sizeof(currentToken))
		currentToken[currentTOkenLength++] = (char)c;
}

void		printCurrentToken()
{
	printf("Token: [%.*s]\n", (int)currentTokenLength, currentToken);
	currentTokenLength = 0;
}
