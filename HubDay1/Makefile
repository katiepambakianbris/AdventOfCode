# Find the OS platform using the uname command.
Linux := $(findstring Linux, $(shell uname -s))
MacOS := $(findstring Darwin, $(shell uname -s))
Windows := $(findstring NT, $(shell uname -s))

# For native Windows only (not supported in our unit), add the .exe extension
ifdef Windows

hello: day1.c
	clang -std=c11 -Wall -pedantic -g day1.c -o day1.exe

# For Linux/MacOS/LinuxSubSystemForWindows10, include the advanced debugging options
else

hello: day1.c
	clang -std=c11 -Wall -pedantic -g day1.c -o day1 \
	    -fsanitize=undefined -fsanitize=address

endif