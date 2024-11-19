import ctypes

libc = ctypes.cdll.LoadLibrary("../lib/libcalc-dynamic.so")

def main():
    ret=libc.average(1,5,10)
    print(ret)

if __name__ == "__main__":
    main()
