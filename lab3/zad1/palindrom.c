#include <strings.h>
#include <stdbool.h>
#include <string.h>

bool palindrom(char napis[])
{
    int len = strlen(napis);
    for(int i = 0 ; i < len;i++)
    {
        if (napis[i]!=napis[len-(i+1)])
        return false;
    }
    return true;
}
