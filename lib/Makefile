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
LIBRARY_NAME=	greet
LIBRARY_STATIC=	lib$(LIBRARY_NAME)-static.a
LIBRARY_DYNAMIC=lib$(LIBRARY_NAME)-dynamic.$(DLLSFX)
LIBRARY_HEADER=	$(LIBRARY_NAME).h

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


lib$(LIBRARY_NAME)-static.a: hello.o goodbye.o
lib$(LIBRARY_NAME)-dynamic.$(DLLSFX): hello.o goodbye.o

clean:
	rm -f *.o *~ *#*
	rm -f $(LIBRARY_STATIC) $(LIBRARY_DYNAMIC)
