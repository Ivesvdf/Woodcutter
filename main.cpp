#include "woodcutter.h"

void doStuff();
void doMoreStuff();

int main()
{
	Woodcutter::minloglevel(INFO);
	Woodcutter::setColors(true);

	// Comment this out to test redirecting to file. 
	doStuff();

	// Or you can redirect to file:
	std::ofstream f("output.txt");
	Woodcutter::output(&f);

	doMoreStuff();
}

void doStuff()
{
	LOGI("some info");
	LOG(INFO, std::string("ey") 
			+ std::string(
				"oi"));

	LOG(WARNING, "The flux capacitor is in the red!");
	LOG(FATAL, "The flux capacitor just blew!");
	LOGE("Shorthand for Error logging");
	// Everything afther last statement will *not* be executed, LOGF stands
	// for log FATAL which exits the program. Use with care. 
}

void doMoreStuff()
{
	LOGI("From now on this will be in a file");
	LOGF("Fatal!");
}
