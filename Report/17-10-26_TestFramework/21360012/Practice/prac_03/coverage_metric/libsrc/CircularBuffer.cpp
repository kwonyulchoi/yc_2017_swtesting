#include "CircularBuffer.h"

CircularBuffer::CircularBuffer(int _capacity) :
    index(0), outdex(0), capacity(_capacity), empty(true), full(false)
{
    buffer = new int[this->capacity];
}

CircularBuffer::~CircularBuffer()
{
    delete[] buffer;
}

bool CircularBuffer::IsEmpty()
{
    return empty;
}

bool CircularBuffer::IsFull()
{
    return full;
}

void CircularBuffer::Put(int i)
{
    empty = false;
    buffer[index] = i;
    index = Next(index);
    if (full) outdex = Next(outdex);
    else if (index == outdex) full = true;
}

int CircularBuffer::Get()
{
    int result = -1;
    full = false;

    if (!empty) {
        result = buffer[outdex];
        outdex = Next(outdex);
        if (outdex == index) empty = true;
    }
    return result;
}

int CircularBuffer::Capacity()
{
    return capacity;
}

int CircularBuffer::Next(int i)
{
    if (++i >= capacity) i = 0;
    return i;
}

void CircularBuffer::Print()
{
    printf("\033[1;32mCircular buffer content:\033[m\n");

    int printIndex = outdex;
    int count = index - outdex;

    if (!empty && (index <= outdex)) count = capacity - (outdex - index);

    for (int i = 0; i < count; i++) {
        printf("\033[1;32m[%d] \033[m",buffer[printIndex]);
        printIndex = Next(printIndex);
        if (i + 1 != count) printf(", ");
    }
    printf(">\n");
}

#if 1 // :x: 
struct fred_t {
	int x;
};
struct fred_t *fred1;
char str[256];
int do_something(int x) {
	return 12;
}
void f1(struct fred_t *p)
{
    char a[10];
    a[10]='c';


    // dereference p and then check if it's NULL
    int x = p->x;
    if (p)
        do_something(x);
}

char f2()
{
    const char *p = NULL;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            p = str + i;
            break;
        }
    }

    // p is NULL if str doesn't have a space. If str always has a
    // a space then the condition (str[i] != '\0') would be redundant
    return p[1];
}

void f3(int a)
{
    struct fred_t *p = NULL;
    if (a == 1)
        p = fred1;

    // if a is not 1 then p is NULL
    p->x = 0;
}
#endif // :x: for test

