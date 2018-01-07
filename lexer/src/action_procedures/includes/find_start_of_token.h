
#ifndef FIND_START_OF_TOKEN_H
# define FIND_START_OF_TOKEN_H

void	action_FindStartOfToken_Newline(int c);
void	action_FindStartOfToken_Whitespace(int c);
void	action_FindStartOfToken_Quote(int c);
void	action_FindStartOfToken_Comma(int c);
void	action_FindStartOfToken_RegularChar(int c);

#endif