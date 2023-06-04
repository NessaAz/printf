#include "main.h"

#define BUFFER_SIZE 1024

/**
 * local_buffer - uses local buffer to call write
 * @c: character to be written
 * @count: pointer to the count of characters written
 * @buffer: pointer to the local buffer
 * @buffer_index: pointer to the buffer index
 */

void local_buffer(char c, int *count, char *buffer, int *buffer_index)
{
    buffer[*buffer_index] = c;
    (*count)++;
    (*buffer_index)++;

    if (*buffer_index == BUFFER_SIZE)
    {
        write(1, buffer, BUFFER_SIZE);
        *buffer_index = 0;
    }
}
