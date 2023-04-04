#include<stdio.h>
int main()
{
        int tk;
        // scan user value
        scanf("%d", &tk);
        // checking the condition
        // buy gucci bag if i have 10k or more
        if (tk>= 10000)
        {
            printf("Gucci Bag");
            // checking tk is more than 20k or not
            if(tk>20000)
            {
                printf("\nGucci Belt");
            }
        }
        // if tk more then 5k then buy Levis bag
        else if (tk > 5000)
        {
            printf("Levis Bag");
        }
        // other wise buy something from New market.
        else
        {
            printf("Something");
        }
        
        return 0;
}