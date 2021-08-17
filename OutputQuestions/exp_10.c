#include <stdio.h>

/ Function declarations /
void greetMorning();
void greeEvening();
void greetNight();
void greet(void (*greeter)());

int main()
{
// Pass pointer to greetMorning function

// Pass pointer to greetEvening function

// Pass pointer to greetNight function

return 0;
}