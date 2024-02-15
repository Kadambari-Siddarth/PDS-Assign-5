#include <stdio.h>
int main()
{
    int num = 0;
    while (1)
    {
        int n;
        printf("Provide a number : ");
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            num += n;
        }

        char choice;
        printf("Do you want to continue?\n");
        getchar();
        scanf("%c", &choice);
        while (choice != 'Y' && (choice - 'y') && choice != 'n' && choice != 'N')
        {
            printf("Not a valid input\n");
            getchar();
            scanf("%c", &choice);
        }
        if (choice == 'Y' || choice == 'y')
        {
            continue;
        }
        if (choice == 'N' || choice == 'n')
        {
            printf("The sum is : %d ", num);
            break;
        }
    }

    return 0;
}