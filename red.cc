#include <stdio.h>
#include <string.h>

void function2()
{
       puts("sinister Payload code that should never run");
}

void function1()
{
     char foo[8];
     // Buf Src EBP 
     strncpy(foo, "12345678" "\x01\x02\x03\x04", "\x0E0\x015\x01\x10", 16);
     puts("Normal Execution Path");
}
int main(int argc, char* argv[])
{   puts("Starting in Main!");
    function1();
}           
   