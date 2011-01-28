changed by noodle1983@126.com on 2011-01-25
1. update for Notepad++ v5.8.6
2. gcc.exe (GCC) 3.4.5 (mingw-vista special r3)
gcc is the sub-package from Strawberry Perl 5.10.1.1.
3. install MSYS-1.0.10.exe and msysDTK-1.0.1.exe 
4. extract w32api-3.11.tar.gz to c:\C:\msys\1.0
5. install winsdk_web.exe(7.1) for Vista. url:http://www.microsoft.com/downloads/en/details.aspx?FamilyID=c17ba869-9671-4330-a63e-1fd44e0e2505&displaylang=en
   install winsdk6 for XP. url:http://www.microsoft.com/downloads/en/details.aspx?FamilyID=4377F86D-C913-4B5C-B87E-EF72E5B4E065&displaylang=en
   on XP, there is no difinition of __out_ecount_opt in dbghelp.h:424. Please add this to the head of the file.
================================================
//WTF?!?  Seriously...  d3d10.h uses these, but it doesnt define them anywhere.  Are they newly autodefined in VS.NET 2005?
#define __out /**/
#define __in /**/
#define __inout /**/

#define __in_opt /**/
#define __out_opt /**/
#define __inout_opt /**/

#define __in_ecount(THING) /**/
#define __in_ecount_opt(THING) /**/
#define __out_ecount(THING) /**/
#define __out_ecount_opt(THING) /**/
#define __inout_ecount(THING) /**/
#define __inout_ecount_opt(THING) /**/

#define __in_bcount_opt(THING) /**/
#define __out_bcount_opt(THING) /**/
#define __inout_bcount_opt(THING) /**/
================================================
6. env var:
CPLUS_INCLUDE_PATH=C:\strawberry\c\include\c++\3.4.5;C:\strawberry\c\include\c++\3.4.5\mingw32;C:\strawberry\c\include\c++\3.4.5\backward;C:\strawberry\c\include;C:\msys\1.0\include;C:\Program Files\Microsoft SDKs\Windows\v6.0\Include
PATH=/c/WINDOWS/system32:/c/WINDOWS:/c/WINDOWS/System32/Wbem:/c/strawberry/c/bin:/c/strawberry/perl/site/bin:/c/strawberry/perl/bin:/bin:/c/Unix/bin:/c/Program Files/Git/bin
C_INCLUDEDE_PATH=C:\strawberry\c\include;C:\msys\1.0\include

7. update the makefile and lots of things, please refer to the checkin comments.

================================================
--------------------ORGIN-----------------------
================================================
makefile was renewed after the v5.0 release.
It was testing with a MingW distribution containing
gcc (GCC) 3.4.5 (mingw-vista special r3)
The default make rule should suffice for building Notepad++,
the clean rule call batch file with commands to remove .o files and resource file


