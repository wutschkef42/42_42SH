
#ifndef END_OF_DATA_H
# define END_OF_DATA_H

void	action_EndOfData_Newline(t_fsm *fsm, int c);
void	action_EndOfData_Whitespace(t_fsm *fsm, int c);
void	action_EndOfData_Quote(t_fsm *fsm, int c);
void	action_EndOfData_Comma(t_fsm *fsm, int c);
void	action_EndOfData_RegularChar(t_fsm *fsm, int c);

#endif