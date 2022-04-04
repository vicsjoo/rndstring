#include <iostream>
#include <sstream>
#include <stdio.h>
typedef unsigned char BYTE;
static BYTE satan[9] = { 0x73, 0x65, 0x74, 0x61, 0x67, 0x6c, 0x6c, 0x69, 0x62 };
void satanic();
int main()
{
    for (size_t i = 0; i < 6; i++)
    {
        satanic();

    }
    
    
    
}
void satanic() {
   
    char str[sizeof(satan) + 1];
    memcpy(str, satan, sizeof(satan));
    str[sizeof(satan)] = '\0';
    std::cout << str << std::endl;
    // std::cout << str+ std::string("\n");     

}