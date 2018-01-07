

#ifndef PARSE_NUMBER_H
# define PARSE_NUMBER_H

void	action_ParseNumber_Newline(t_fsm *fsm, int c);
void	action_ParseNumber_Whitespace(t_fsm *fsm, int c);
void	action_ParseNumber_Quote(t_fsm *fsm, int c);
void	action_ParseNumber_Comma(t_fsm *fsm, int c);
void	action_ParseNumber_RegularChar(t_fsm *fsm, int c);

#endif
