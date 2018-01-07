
#include "finite_state_machine.h"
#include "action_utils.h"
#include "libft.h"

void	action_FindStartOfToken_Newline(t_fsm *fsm, int c)
{
	(void) c;
	(void) fsm;
	ft_printf("------------------------------------------\n");
	fsm->parserState = STATE_FindStartOfData;
}

void	action_FindStartOfToken_Whitespace(t_fsm *fsm, int c)
{
	(void) c;
	(void) fsm;
}

void	action_FindStartOfToken_Quote(t_fsm *fsm, int c)
{
	(void) c;
	(void) fsm;
//	ft_printf(">> Change ParserState: %s\n", "STATE_ParseString");
	fsm->parserState = STATE_ParseString;
}

void	action_FindStartOfToken_Comma(t_fsm *fsm, int c)
{
	(void) c;
	(void) fsm;
}

void	action_FindStartOfToken_RegularChar(t_fsm *fsm, int c)
{
//	ft_printf(">> Change ParserState: %s\n", "STATE_ParseNumber");
	fsm->parserState = STATE_ParseNumber;
	addCharToCurrentToken(fsm, c);
}
