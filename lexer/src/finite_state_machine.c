
#include "finite_state_machine.h"
#include "check_end_of_string.h"
#include "end_of_data.h"
#include "find_delimiter.h"
#include "find_start_of_data.h"
#include "find_start_of_token.h"
#include "parse_error.h"
#include "parse_number.h"
#include "parse_string.h"
#include "libft.h"

/* State table maps (state, event) -> action procedure */
void	(*const stateTable [MAX_STATES][MAX_EVENTS])(t_fsm *fsm, int c) =
{
	
	
	{	/* procedures for state 1 */
		action_FindStartOfData_Newline,
		action_FindStartOfData_Whitespace,
		action_FindStartOfData_Quote,
		action_FindStartOfData_Comma,
		action_FindStartOfData_RegularChar
	},
	
	{	/* procedures for state 2 */
		action_FindStartOfToken_Newline,
		action_FindStartOfToken_Whitespace,
		action_FindStartOfToken_Quote,
		action_FindStartOfToken_Comma,
		action_FindStartOfToken_RegularChar },

	{	/* procedures for state 3 */
		action_ParseNumber_Newline,
		action_ParseNumber_Whitespace,
		action_ParseNumber_Quote,
		action_ParseNumber_Comma,
		action_ParseNumber_RegularChar
	}, 
	{	/* procedures for state 4 */
		action_ParseString_Newline,
		action_ParseString_Whitespace,
		action_ParseString_Quote,
		action_ParseString_Comma,
		action_ParseString_RegularChar
	},
	{	/* procedures for state 5 */
		action_CheckEndOfString_Newline,
		action_CheckEndOfString_Whitespace,
		action_CheckEndOfString_Quote,
		action_CheckEndOfString_Comma,
		action_CheckEndOfString_RegularChar
	},
	{	/* procedures for state 6 */
		action_FindDelimiter_Newline,
		action_FindDelimiter_Whitespace,
		action_FindDelimiter_Quote,
		action_FindDelimiter_Comma,
		action_FindDelimiter_RegularChar
	}, 
	{	/* procedures for state 7 */
		action_ParseError_Newline,
		action_ParseError_Whitespace,
		action_ParseError_Quote,
		action_ParseError_Comma,
		action_ParseError_RegularChar
	}, 
	{	/*procedures for state 8 */
		action_EndOfData_Newline,
		action_EndOfData_Whitespace,
		action_EndOfData_Quote,
		action_EndOfData_Comma,
		action_EndOfData_RegularChar
	}  
};

static
void	initStateMachine(t_fsm *fsm, t_pos *pos)
{
	fsm->currentTokenLength = 0;
	fsm->parserState = STATE_FindStartOfData;
	pos->row = 0;
	pos->col = 0;
}

static
int		getNextChar(char **sourceCode, t_pos *position)
{
	int		c;

	if (!sourceCode[position->row][position->col])
	{
		position->row++;
		position->col = 0;
		if (!sourceCode[position->row])
			return (-1);
		else
			return ((int)'\n');
	}
	c = (int)sourceCode[position->row][position->col];
	position->col++;
	return (c);
}

static
int		exitStateMachine(t_fsm fsm)
{
	if (fsm.parserState == STATE_ParseError)
	{
		ft_printf(">> Finite State Machine: Action Procedure Error\n");		
		ft_printf(">> [parserState: %d]\t[eventType: %d]", fsm.parserState, fsm.eventType);
		return (1);
	}
	return (0);
}

int		runStateMachine(char **sourceCode)
{
	t_fsm	fsm;
	t_pos	pos;
	int		c;

	initStateMachine(&fsm, &pos);
	while (fsm.parserState != STATE_ParseError &&
			fsm.parserState != STATE_EndOfData)
	{
		c = getNextChar(sourceCode, &pos);
		/*
		if (c > 0)
			ft_printf(">> [geNextChar() = %c]\n", c);
		else
			ft_printf(">> [geNextChar() = %d]\n", c);
		*/
		fsm.eventType = getNewEvent(c);
		stateTable[fsm.parserState][fsm.eventType](&fsm, c);
	}
	return (exitStateMachine(fsm));
}

