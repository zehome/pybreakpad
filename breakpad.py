import cffi

ffi = cffi.FFI()
ffi.cdef("""
typedef void* bpExceptionHandler;
bpExceptionHandler breakpad_init();
""")


def breakpad_init(libname="./libcbreakpad.so"):
    lib = ffi.dlopen(libname)
    return lib.breakpad_init()


def crash():
	import ctypes
	i = ctypes.c_char('a')
	j = ctypes.pointer(i)
	c = 0
	while True:
		j[c] = 'a'
		c += 1
	j


if __name__ == "__main__":
    bph = breakpad_init()
    print("bph: {}", bph)
    crash()

