
#include "finite_state_machine.h"
#include "action_utils.h"

void	action_FindStartOfToken_Newline(int c)
{
	(void) c;
	parserState = STATE_FindStartOfData;
}

void	action_FindStartOfToken_Whitespace(int c)
{
	(void) c;
}

void	action_FindStartOfToken_Quote(int c)
{
	(void) c;
	parserState = STATE_ParseString;
}

void	action_FindStartOfToken_Comma(int c)
{
	(void) c;
	printCurrentToken();
}

void	action_FindStartOfToken_RegularChar(int c)
{
	parserState = STATE_ParseNumber;
	addCharToCurrentToken(c);
}
