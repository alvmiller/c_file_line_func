#include <stdio.h>

void func0()
{
    printf("\n\t%s | %d | %s\n\n", __FILE__, __LINE__, __func__);
    return;
}

int main()
{
    printf("\n\t%s | %d | %s\n\n", __FILE__, __LINE__, __func__);
    func0();

    return 0;
}
