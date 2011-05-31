#include "woodcutter.h"

void doStuff();

int main()
{
	Woodcutter::minloglevel(INFO);
	Woodcutter::setColors(true);

	doStuff();

	// Or you can redirect to file:
	std::ofstream f("output.txt");
	Woodcutter::output(&f);
	LOGI("From now on this will be in a file");
	LOGF("Fatal!");
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
}
