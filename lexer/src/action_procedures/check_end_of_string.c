
#include "finite_state_machine.h"
#include "action_utils.h"
#include "libft.h"

void	action_CheckEndOfString_Newline(t_fsm *fsm, int c)
{
	(void) c;
	addCharToCurrentToken(fsm, 0);
	printCurrentToken(fsm);
	ft_printf("------------------------------------------\n");
//	ft_printf(">> Change ParserState: %s\n", "STATE_FindStartOfData");
	fsm->parserState = STATE_FindStartOfData;
}

void	action_CheckEndOfString_Whitespace(t_fsm *fsm, int c)
{
	(void) c;
	addCharToCurrentToken(fsm, 0);
	printCurrentToken(fsm);
//	ft_printf(">> Change ParserState: %s\n", "STATE_FindDelimiter");
	fsm->parserState = STATE_FindDelimiter;
}

void	action_CheckEndOfString_Quote(t_fsm *fsm, int c)
{
	addCharToCurrentToken(fsm, c);
//	ft_printf(">> Change ParserState: %s\n", "STATE_ParseString");
	fsm->parserState = STATE_ParseString;
}

void	action_CheckEndOfString_Comma(t_fsm *fsm, int c)
{
	(void) c;
	addCharToCurrentToken(fsm, 0);
	printCurrentToken(fsm);
//	ft_printf(">> Change ParserState: %s\n", "STATE_FindStartOfToken");
	fsm->parserState = STATE_FindStartOfToken;
}

void	action_CheckEndOfString_RegularChar(t_fsm *fsm, int c)
{
	if (c == -1)
	{
		ft_printf("\n>>>> Finite State Machine: Success: Tokenization complete.\n\n\n\n");
//		ft_printf(">>>> Change ParserState: %s\n", "STATE_EndOfData");
		fsm->parserState = STATE_EndOfData;
	}
	else
	{
		ft_printf("\n>>>> Finite State Machine: Parse Error: Unexpected char 0x%02X at End of String!\n\n\n\n", c);
//		ft_printf(">>>> Change ParserState: %s\n", "STATE_ParseError");
		fsm->parserState = STATE_ParseError;	
	}
}