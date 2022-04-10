int init_2(int a, int b, unsigned long time)
{
    unsigned long TIME = 0;

    while (a != b) {
        if (TIME > time) {
            my_printf("TIME :%d\n", TIME);
            my_printf("SECURE ABORT /!\\\n");
            exit("");
        }
        TIME ++;
        my_printf("TIME :%d\n", TIME);
    }
    TIME = 0;
    return (0);
}
