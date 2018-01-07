
#ifndef CHECK_END_OF_STRING_H
# define CHECK_END_OF_STRING_H

void	action_CheckEndOfString_Newline(t_fsm *fsm, int c);
void	action_CheckEndOfString_Whitespace(t_fsm *fsm, int c);
void	action_CheckEndOfString_Quote(t_fsm *fsm, int c);
void	action_CheckEndOfString_Comma(t_fsm *fsm, int c);
void	action_CheckEndOfString_RegularChar(t_fsm *fsm, int c);

#endif
