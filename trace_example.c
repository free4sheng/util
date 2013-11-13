#include <stdio.h>
#include "trace.h"

void func2()
{
    trace_log("func2");
}

void func1()
{
    trace_log(NULL);

    func2();
}

int main(int argc, const char *argv[])
{
    trace = 1;
    trace_log(NULL);
    func1();

    return 0;
}
