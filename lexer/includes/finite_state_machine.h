
#ifndef FINITE_STATE_MACHINE_H
# define FINITE_STATE_MACHINE_H

# define TOKEN_BUF_SIZE 1024

/* define the states and events of the finite state machine. */
typedef	enum {
	STATE_FindStartOfData,
	STATE_FindStartOfToken,
	STATE_ParseNumber,
	STATE_ParseString,
	STATE_CheckEndOfString,
	STATE_FindDelimiter,
	STATE_ParseError,
	STATE_EndOfData,
	MAX_STATES
}					ParserState;

typedef enum {
	EVENT_Newline,
	EVENT_Whitespace,
	EVENT_Quote,
	EVENT_Comma,
	EVENT_RegularChar,
	MAX_EVENTS
}					EventType;



typedef struct		s_fsm
{
	char			currentToken[TOKEN_BUF_SIZE];
	char			currentTokenLength;
	ParserState		parserState;
	EventType		eventType;
}					t_fsm;

typedef struct		s_pos
{
	int				row;
	int				col;
}					t_pos;

EventType	getNewEvent(char c);
int			runStateMachine(char **sourceCode);


#endif