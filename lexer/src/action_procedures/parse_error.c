
#include "finite_state_machine.h"
#include "action_utils.h"

void	action_ParseError_Newline(t_fsm *fsm, int c)
{
	(void) c;
	(void) fsm;
}

void	action_ParseError_Whitespace(t_fsm *fsm, int c)
{
	(void) c;
	(void) fsm;
}

void	action_ParseError_Quote(t_fsm *fsm, int c)
{
	(void) c;
	(void) fsm;
}

void	action_ParseError_Comma(t_fsm *fsm, int c)
{
	(void) c;
	(void) fsm;
}

void	action_ParseError_RegularChar(t_fsm *fsm, int c)
{
	(void) c;
	(void) fsm;
}