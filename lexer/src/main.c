
#include "load_source_code.h"
#include "finite_state_machine.h"
#include "freedom.h"

int		main(void)
{

	char	**sourceCodeTab;

	sourceCodeTab = loadSourceCode();
	runStateMachine(sourceCodeTab);
	freeTab(sourceCodeTab);
	return (0);
}