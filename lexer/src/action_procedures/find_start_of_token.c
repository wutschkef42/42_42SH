
#include "finite_state_machine.h"
#include "action_utils.h"

void	action_FindStartOfToken_Newline(t_fsm *fsm, int c)
{
	(void) c;
	(void) fsm;
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
	fsm->parserState = STATE_ParseString;
}

void	action_FindStartOfToken_Comma(t_fsm *fsm, int c)
{
	(void) c;
	printCurrentToken(fsm);
}

void	action_FindStartOfToken_RegularChar(t_fsm *fsm, int c)
{
	fsm->parserState = STATE_ParseNumber;
	addCharToCurrentToken(fsm, c);
}
