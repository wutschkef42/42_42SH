
#include "finite_state_machine.h"
#include "libft.h"

void		addCharToCurrentToken(t_fsm *fsm, int c)
{
	if (fsm->currentTokenLength < sizeof(fsm->currentToken))
		fsm->currentToken[fsm->currentTokenLength++] = (char)c;
}

void		printCurrentToken(t_fsm *fsm)
{
	ft_printf(">> Token (length: %2d):\t[%s]\n", (int)(fsm->currentTokenLength), fsm->currentToken);
	fsm->currentTokenLength = 0;
}
