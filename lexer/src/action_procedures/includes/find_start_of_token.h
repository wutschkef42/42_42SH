
#ifndef FIND_START_OF_TOKEN_H
# define FIND_START_OF_TOKEN_H

void	action_FindStartOfToken_Newline(t_fsm *fsm, int c);
void	action_FindStartOfToken_Whitespace(t_fsm *fsm, int c);
void	action_FindStartOfToken_Quote(t_fsm *fsm, int c);
void	action_FindStartOfToken_Comma(t_fsm *fsm, int c);
void	action_FindStartOfToken_RegularChar(t_fsm *fsm, int c);

#endif