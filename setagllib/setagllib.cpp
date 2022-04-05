#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <ctime>

typedef unsigned char BYTE;


static BYTE satan[9] = { 0x73, 0x65, 0x74, 0x61, 0x67, 0x6c, 0x6c, 0x69, 0x62 };
void satanic();
void gibberish();
void fakehash();
std::string RandomNumeric(int len);
std::string RandomString(int len);
int main()
{

    srand(static_cast<unsigned int>(time(NULL))<<10);


    /** backup cout buffer and redirect to out.txt **/
    std::ofstream out("out.txt");

    auto* coutbuf = std::cout.rdbuf();
    std::cout.rdbuf(out.rdbuf());

    for (size_t i = 0; i < 100; i++)
    {
     //   satanic();
     //   gibberish();
        fakehash();

    }
    system("pause");
    
    
}
void satanic() {
    char str[sizeof(satan) + 1];
    memcpy(str, satan, sizeof(satan));
    str[sizeof(satan)] = '\0';

    if ((rand() % 2) + 1 == 2) {
        std::reverse(str, str + strlen(str));
    }
    std::cout << str << std::endl;
}
    // std::cout << str+ std::string("\n");     


void gibberish() {

  //  char hell[20] = "";

    for (size_t i = 0; i < 1; i++)
    {
 //       hell[i] << (char)RandomString(!);
          std::cout << RandomString(10) << std::endl;
          std::cout << RandomNumeric(10) << std::endl;
    //    satanic();
    }

 //   std::cout << hell;
   
}
void fakehash() {
    std::cout << RandomString(1000) << std::endl;
}

std:: string RandomNumeric(int len)
{
    std::string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    std::string newstr;
    int pos;
    while (newstr.size() != len) {
        pos = ((rand() % (str.size() - 52)));
        newstr += str.substr(pos, 1);
    }
    return newstr;
    
}

std::string RandomString(int len)
{
    std::string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    std::string newstr;
    int pos;
    while (newstr.size() != len) {
        pos = ((rand() % (str.size())));
        newstr += str.substr(pos, 1);
    }
    return newstr;
}
