# samples of creating and using a library

## to create a library
type 'make' in ./lib/

## to install the library
type 'make install' in ./lib/

## to use the library
type 'make' in ./sample/

To test without installing libraries in /usr/local/lib/, type as below insted:
make CFLAGS+=-I../lib LDFLAGS+="-L../lib -lgreet-dynamic -lcalc-dynamic"

## to execute the sample
type './main.exe' in ./sample/
- before the execution, you should include /usr/local/lib in your LD_LIBRARY_PATH

To test without installing libraries in /usr/local/lib/, type as below insted:
LD_LIBRARY_PATH=../lib ./main.exe
LD_LIBRARY_PATH=../lib ./main2.exe

## to add /usr/local/lib in your LD_LIBRARY_PATH
- if 'echo ${LD\_LIBRARY\_PATH}' shows something, type as below:  
 export LD\_LIBRARY\_PATH=\${LD\_LIBRARY\_PATH}:/usr/local/lib
- else, type as below:  
 export LD\_LIBRARY\_PATH=/usr/local/lib

## to test in python
type 'python3 test.py' in ./sample/
