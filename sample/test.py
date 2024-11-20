import ctypes

libc = ctypes.cdll.LoadLibrary("../lib/libcalc-dynamic.so")
libc.average.argtypes = (ctypes.c_int, ctypes.c_int, ctypes.c_int)
libc.average.restype = ctypes.c_double

def main():
    ret=libc.average(1,5,10)
    print(ret)

if __name__ == "__main__":
    main()
