#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct {
    char int_name[32];
    int (*isr)();

}isr_t;
int keyboard_interrupt()
{
    printf("generate keyboard\n");
}
int mouse_interrupt()
{
    printf("generate mouse_interrupt\n");
}
int rtc_interrupt()
{
    printf("generate rtc_interrupt\n");
}
int i2c_interrupt()
{
    printf("generate i2c_interrupt\n");
}

isr_t ivt[]={

    {"isr0", keyboard_interrupt},
       { "isr1", mouse_interrupt},
        {"isr2", rtc_interrupt},
        {"isr3", i2c_interrupt},
    };

int main()
{
    while(1)
    {
        (ivt[rand()%4].isr)();
        //sleep(1);
    }
}
#if 0

generate keyboard
generate mouse_interrupt
generate rtc_interrupt
generate i2c_interrupt
#endif // 0




