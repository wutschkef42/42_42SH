
#ifndef FIND_DELIMITER_H
# define FIND_DELIMITER_H

void	action_FindDelimiter_Newline(t_fsm *fsm, int c);
void	action_FindDelimiter_Whitespace(t_fsm *fsm, int c);
void	action_FindDelimiter_Quote(t_fsm *fsm, int c);
void	action_FindDelimiter_Comma(t_fsm *fsm, int c);
void	action_FindDelimiter_RegularChar(t_fsm *fsm, int c);

#endif
