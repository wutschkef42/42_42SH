
#include "finite_state_machine.h"
#include "action_utils.h"
#include "libft.h"

void	action_ParseString_Newline(t_fsm *fsm, int c)
{
	addCharToCurrentToken(fsm, c);
}

void	action_ParseString_Whitespace(t_fsm *fsm, int c)
{
	addCharToCurrentToken(fsm, c);
}

void	action_ParseString_Quote(t_fsm *fsm, int c)
{
	(void) c;
//	ft_printf(">> Change ParserState: %s\n", "STATE_CheckEndOfString");
	fsm->parserState = STATE_CheckEndOfString;
}

void	action_ParseString_Comma(t_fsm *fsm, int c)
{
	addCharToCurrentToken(fsm, c);
}

void	action_ParseString_RegularChar(t_fsm *fsm, int c)
{
	addCharToCurrentToken(fsm, c);
}