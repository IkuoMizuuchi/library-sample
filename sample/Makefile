#
# type 'make' to create main.exe
#
# make sure to add /usr/local/lib in your $LD_LIBRARY_PATH
#     to execute ./main.exe
#

### either of the below 2 lines should be un-commented
# LDFLAGS+=	-L/usr/local/lib -lgreet-static
LDFLAGS+=	-L/usr/local/lib -lgreet-dynamic

all: main.exe main2.exe

%.exe: %.o
	$(CC) -o $@ $< $(LDFLAGS)

clean:
	rm -f *.o *~ *#* *.exe
