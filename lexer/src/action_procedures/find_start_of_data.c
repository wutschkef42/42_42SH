
#include "finite_state_machine.h"
#include "action_utils.h"

void	action_FindStartOfData_Newline(t_fsm *fsm, int c)
{
	(void) fsm;
	(void) c;
}

void	action_FindStartOfData_Whitespace(t_fsm *fsm, int c)
{
	(void) fsm;
	(void) c;
	fsm->parserState = STATE_FindStartOfToken;
}

void	action_FindStartOfData_Quote(t_fsm *fsm, int c)
{
	(void) fsm;
	(void) c;
}

void	action_FindStartOfData_Comma(t_fsm *fsm, int c)
{
	(void) fsm;
	(void) c;
}

void	action_FindStartOfData_RegularChar(t_fsm *fsm, int c)
{
	(void) fsm;
	(void) c;
}