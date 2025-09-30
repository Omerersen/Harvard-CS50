#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int cash = get_int("Enter you payment: ");
    int price = get_int("Enter product price: ");
    int change = (cash - price);
    if(cash > price)
    {
        printf("%i\n", change );
    }
    else
    {
        printf("Your payment is not enough please pay more\n");
    }

    int change25 = (change / 25);
    int change25plus = (change - change25 * 25);

    int change10 = (change / 10);
    int change10plus = (change - change10 * 10);

    int change5 = (change / 5);
    int change5plus = (change - change5 * 5);

    int change1 = (change / 1);
    int change1plus = (change - change1 * 1);

    if(change25plus == 0)
    {
        printf("%i\n", change25);
    }
    else if(change10plus == 0)
    {
        int toplam = change25 + ((change-(change25 * 25)) / 10);
        printf("%i\n", toplam);
    }
    else if(change5plus == 0)
    {
        int toplam = change25 + ((change-(change25 * 25)) / 10) + ((change-(change10 * 10)) / 5);
        printf("%i\n", toplam);
    }
    else if(change1plus == 0)
    {
        int toplam = change25 + ((change-(change25 * 25)) / 10) + ((change-(change10 * 10)) / 5) + ((change-(change5 * 5)) / 1);
        printf("%i\n", toplam);
    }
}
