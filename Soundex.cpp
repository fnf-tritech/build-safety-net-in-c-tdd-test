#include "Soundex.h"
int checkForEmptyInput(const char* input){
    if (input[0] == '0')
    {
     return 1;
    
    }
   return 0;
}
void generateSoudex(const char* input,char* soundexCode){
   if (checkForEmptyInput)
    {
        soundexCode[0] = '\0';
    
    }
}
