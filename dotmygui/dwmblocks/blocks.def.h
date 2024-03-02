//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"  ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"  ", "uptime | cut -d, -f1 | awk '{print $3,$4}'",			10,		0},

	{"  ", "df -h | grep sda4 | awk '{print $3\"/\"$2}'",			5,		0},
	{"  ", "date '+%b %d (%a) %I:%M%p'",					5,		0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

/*
 *   --> No Audio alsa problem
 *   --> MUTE
 *   --> Low vol.
 *   --> Max vol.
 *   --> Music playing...
*/
