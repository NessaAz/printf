#include "main.h"

/**
 * local_buffer - uses local buffer to call write
 * @c: character to be written
 * @i: integer to be written
*/

void local_buffer(char c, int i)
{
    /* remember betty*/
    i = 0;
    char buffer[1024];

    /* given index 1024 */
    if (i == 1024)
    {
        write(1, buffer, i);
    }
    
    buffer[i++];
}