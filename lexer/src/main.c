
#include "load_source_code.h"
#include "finite_state_machine.h"
#include "freedom.h"

int		main(void)
{

	char	**sourceCodeTab;

	sourceCodeTab = loadSourceCode();
	printSourceCode(sourceCodeTab);
	//runStateMachine(sourceCodeTab);
//	freeTab(sourceCodeTab);
	return (0);
}