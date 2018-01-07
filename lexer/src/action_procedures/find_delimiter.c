
#include "finite_state_machine.h"
#include "action_utils.h"
#include "libft.h"

void	action_FindDelimiter_Newline(t_fsm *fsm, int c)
{
	(void) c;
	ft_printf("------------------------------------------\n");
	fsm->parserState = STATE_FindStartOfData;
}

void	action_FindDelimiter_Whitespace(t_fsm *fsm, int c)
{
	(void) c;
	(void) fsm;
}

void	action_FindDelimiter_Quote(t_fsm *fsm, int c)
{
	(void) fsm;
	ft_printf("Finite State Machine: Parse Error: Unexpected char 0x%02X at End of String!\n", c);

}

void	action_FindDelimiter_Comma(t_fsm *fsm, int c)
{
	(void) c;
	fsm->parserState = STATE_FindStartOfToken;
}

void	action_FindDelimiter_RegularChar(t_fsm *fsm, int c)
{
	(void) fsm;
	ft_printf("Finite State Machine: Parse Error: Unexpected char 0x%02X at End of String!\n", c);
}