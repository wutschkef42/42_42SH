
#ifndef FIND_START_OF_DATA_H
# define FIND_START_OF_DATA_H

#include "../../../includes/finite_state_machine.h"

void	action_FindStartOfData_Newline(t_fsm *fsm, int c);
void	action_FindStartOfData_Whitespace(t_fsm *fsm, int c);
void	action_FindStartOfData_Quote(t_fsm *fsm, int c);
void	action_FindStartOfData_Comma(t_fsm *fsm, int c);
void	action_FindStartOfData_RegularChar(t_fsm *fsm, int c);

#endif