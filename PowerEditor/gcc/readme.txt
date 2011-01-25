changed by noodle1983@126.com on 2011-01-25
1. update for Notepad++ v5.8.6
2. gcc.exe (GCC) 3.4.5 (mingw-vista special r3)
gcc is the sub-package from Strawberry Perl 5.10.1.1.
3. install MSYS-1.0.10.exe and w32api-3.11.tar.gz
4. install winsdk_web.exe.
5. update the makefile and lots of things, please refer to the checkin comments.

-----------------ORGIN-----------------------
makefile was renewed after the v5.0 release.
It was testing with a MingW distribution containing
gcc (GCC) 3.4.5 (mingw-vista special r3)
The default make rule should suffice for building Notepad++,
the clean rule call batch file with commands to remove .o files and resource file


