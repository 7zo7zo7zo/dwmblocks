//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{" ", "brightness_icon.sh $(ls /sys/class/backlight)",                5,              0},
	{"", "mic.sh",								5,              0},
	{"Mem: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	5,		0},
        {"", "wifi_icon.sh",							5,              0},
        {"", "vol_icon.sh",							5,              0},
        {"", "battery_icon.sh",							5,              0},
        {"", "date +'%a %b %d %Y %r'",						1,              0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
