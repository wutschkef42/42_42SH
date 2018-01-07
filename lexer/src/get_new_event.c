
#include "finite_state_machine.h"

EventType	getNewEvent(char c)
{
	if (c == '\n' || c == '\r')
		return (EVENT_Newline);
	else if (c == ' ' || c == '\t')
		return (EVENT_Whitespace);
	else if (c == '"')
		return (EVENT_Quote);
	else if (c == ',')
		return (EVENT_Comma);
	else
		return (EVENT_RegularChar);
}