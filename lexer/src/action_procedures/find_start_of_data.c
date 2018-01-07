
#include "finite_state_machine.h"
#include "action_utils.h"
#include "libft.h"

void	action_FindStartOfData_Newline(t_fsm *fsm, int c)
{
	(void) c;
	ft_printf("------------------------------------------\n");
//	ft_printf(">> Change ParserState: %s\n", "STATE_FindStartOfData");
	fsm->parserState = STATE_FindStartOfData;
}

void	action_FindStartOfData_Whitespace(t_fsm *fsm, int c)
{
	(void) c;
//	ft_printf(">> Change ParserState: %s\n", "STATE_FindStartOfToken");
	fsm->parserState = STATE_FindStartOfToken;
}

void	action_FindStartOfData_Quote(t_fsm *fsm, int c)
{
	(void) c;
//	ft_printf(">> Change ParserState: %s\n", "STATE_ParseString");
	fsm->parserState = STATE_ParseString;
}

void	action_FindStartOfData_Comma(t_fsm *fsm, int c)
{
	(void) c;
	printCurrentToken(fsm);
}

void	action_FindStartOfData_RegularChar(t_fsm *fsm, int c)
{
	(void) c;
//	ft_printf(">> Change ParserState: %s\n", "STATE_ParseNumber");
	addCharToCurrentToken(fsm, c);
	fsm->parserState = STATE_ParseNumber;
}