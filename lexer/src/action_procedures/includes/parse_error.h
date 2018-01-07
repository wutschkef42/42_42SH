
#ifndef PARSE_ERROR_H
# define PARSE_ERROR_H

void	action_ParseError_Newline(t_fsm *fsm, int c);
void	action_ParseError_Whitespace(t_fsm *fsm, int c);
void	action_ParseError_Quote(t_fsm *fsm, int c);
void	action_ParseError_Comma(t_fsm *fsm, int c);
void	action_ParseError_RegularChar(t_fsm *fsm, int c);

#endif
