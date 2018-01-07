
#include "finite_state_machine.h"
#include "action_utils.h"
#include "libft.h"

void	action_CheckEndOfString_Newline(t_fsm *fsm, int c)
{
	(void) c;
	printCurrentToken(fsm);
	ft_printf("------------------------------------------\n");
	fsm->parserState = STATE_FindStartOfData;
}

void	action_CheckEndOfString_Whitespace(t_fsm *fsm, int c)
{
	(void) c;
	printCurrentToken(fsm);
	fsm->parserState = STATE_FindDelimiter;
}

void	action_CheckEndOfString_Quote(t_fsm *fsm, int c)
{
	addCharToCurrentToken(fsm, c);
	fsm->parserState = STATE_ParseString;
}

void	action_CheckEndOfString_Comma(t_fsm *fsm, int c)
{
	(void) c;
	printCurrentToken(fsm);
	fsm->parserState = STATE_FindStartOfToken;
}

void	action_CheckEndOfString_RegularChar(t_fsm *fsm, int c)
{
	ft_printf("Finite State Machine: Parse Error: Unexpected char 0x%02X at End of String!\n", c);
	fsm->parserState = STATE_ParseError;
}