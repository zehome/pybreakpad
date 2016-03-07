#include "cbreakpad.h"

#ifdef _WIN32
 // breakpad includes windows.h, so we must include QT's qt_windows.h beforehand
 // to avoid breaking other QT headers
 #include <qt_windows.h>
 #include "client/windows/handler/exception_handler.h"
#elif __linux__
 #include "client/linux/handler/exception_handler.h"
#else
 #error "Not a supported platform."
#endif

extern "C"
{
    static bool
    breakpad_dump_callback(
        const google_breakpad::MinidumpDescriptor& descriptor,
        void* context,
        bool succeeded)
    {
        printf("Dump path: %s\n", descriptor.path());
        return succeeded;
    }

    bpExceptionHandler 
    breakpad_init()
    {
        bpExceptionHandler bph;
        google_breakpad::MinidumpDescriptor descriptor("/tmp/breakpad");
        bph = static_cast<void *>(new google_breakpad::ExceptionHandler(descriptor,
            NULL, breakpad_dump_callback, NULL, true, -1));
        return bph;
    }
} /* extern "C" */
