#
# type 'make' to create libgreet-static.a and libgreet-dynamic.(dll or so)
#
# type 'make install' to copy libraries and the header file
#     to /usr/local/lib and /usr/local/ include
#


# OS dependent configs
OS=$(shell uname | cut -d_ -f1)

ifeq ($(OS), CYGWIN)
DLLSFX=dll
else
DLLSFX=so
endif

ifeq ($(OS), Linux)
CFLAGS+=-fPIC
SUDO=sudo
endif


# definitions
LIBRARY_NAME=	greet calc
LIBRARY_LIB=	$(addprefix lib, $(LIBRARY_NAME))
LIBRARY_STATIC=	$(addsuffix -static.a, $(LIBRARY_LIB))
LIBRARY_DYNAMIC=$(addsuffix -dynamic.$(DLLSFX), $(LIBRARY_LIB))
LIBRARY_HEADER=	$(addsuffix .h, $(LIBRARY_NAME))

#### default target
all: $(LIBRARY_STATIC) $(LIBRARY_DYNAMIC)

#### for make install
install: $(LIBRARY_STATIC) $(LIBRARY_DYNAMIC) $(LIBRARY_HEADER)
	$(SUDO) install -p $(LIBRARY_STATIC) $(LIBRARY_DYNAMIC) /usr/local/lib/
	$(SUDO) install -p $(LIBRARY_HEADER) /usr/local/include/

lib%-static.a:
	ar cq $@ $^

lib%-dynamic.$(DLLSFX):
	gcc -shared -o $@ $^


libgreet-static.a: hello.o goodbye.o
libgreet-dynamic.$(DLLSFX): hello.o goodbye.o

libcalc-static.a: average.o
libcalc-dynamic.$(DLLSFX): average.o

clean:
	rm -f *.o *~ *#*
	rm -f $(LIBRARY_STATIC) $(LIBRARY_DYNAMIC)
