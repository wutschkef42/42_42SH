
#include "finite_state_machine.h"
#include "action_utils.h"
#include "libft.h"

void	action_ParseNumber_Newline(t_fsm *fsm, int c)
{
	(void) c;
	printCurrentToken(fsm);
	ft_printf("------------------------------------------\n");
	fsm->parserState = STATE_FindStartOfData;
}

void	action_ParseNumber_Whitespace(t_fsm *fsm, int c)
{
	(void) c;
	printCurrentToken(fsm);
	fsm->parserState = STATE_FindDelimiter;
}

void	action_ParseNumber_Quote(t_fsm *fsm, int c)
{
	(void) c;
	(void) fsm;
}

void	action_ParseNumber_Comma(t_fsm *fsm, int c)
{
	(void) c;
	printCurrentToken(fsm);
	fsm->parserState = STATE_FindStartOfToken;
}

void	action_ParseNumber_RegularChar(t_fsm *fsm, int c)
{
	addCharToCurrentToken(fsm, c);
}
