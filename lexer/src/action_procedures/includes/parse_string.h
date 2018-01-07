
#ifndef PARSE_STRING_H
# define PARSE_STRING_H

void	action_ParseString_Newline(t_fsm *fsm, int c);
void	action_ParseString_Whitespace(t_fsm *fsm, int c);
void	action_ParseString_Quote(t_fsm *fsm, int c);
void	action_ParseString_Comma(t_fsm *fsm, int c);
void	action_ParseString_RegularChar(t_fsm *fsm, int c);

#endif
