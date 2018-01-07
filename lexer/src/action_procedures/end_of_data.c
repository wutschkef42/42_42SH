
#include "finite_state_machine.h"
#include "action_utils.h"

void	action_EndOfData_Newline(t_fsm *fsm, int c)
{
	(void) c;
	(void) fsm;
}

void	action_EndOfData_Whitespace(t_fsm *fsm, int c)
{
	(void) c;
	(void) fsm;
}

void	action_EndOfData_Quote(t_fsm *fsm, int c)
{
	(void) c;
	(void) fsm;
}

void	action_EndOfData_Comma(t_fsm *fsm, int c)
{
	(void) c;
	(void) fsm;
}

void	action_EndOfData_RegularChar(t_fsm *fsm, int c)
{
	(void) c;
	(void) fsm;
}