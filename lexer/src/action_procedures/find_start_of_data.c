
#include "finite_state_machine.h"
#include "action_utils.h"

void	action_FindStartOfData_Newline(int c)
{
	(void)c;
}

void	action_FindStartOfData_Whitespace(int c)
{
	(void) c;
	parserState = STATE_FindStartOfToken;
}

void	action_FindStartOfData_Quote(int c)
{
	(void) c;
}

void	action_FindStartOfData_Comma(int c)
{
	(void) c;
}

void	action_FindStartOfData_RegularChar(int c)
{
	(void) c;
}