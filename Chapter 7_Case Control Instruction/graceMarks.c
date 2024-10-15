#include <stdio.h>

int main()
{
    int class, subjectsFailed;
    
    printf("\nEnter the class obtained: ");
    scanf("%d", &class);

    printf("\nEnter the number of subjects failed: ");
    scanf("%d", &subjectsFailed);

    switch(class)
    {
        case 1:            
            if(class == 1 && subjectsFailed > 3)
            {
                printf("No grace marks allotted\n");
            }
            else
            {
                printf("Grace marks allotted is %d", 5 * subjectsFailed);
            } 
            break;

        case 2:
            if(class == 2 && subjectsFailed > 2)
            {
                printf("No grace marks allotted\n");
            }
            else
            {
                printf("Grace marks allotted is %d\n", 4 * subjectsFailed);
            } 
            break;

        case 3:
            if(class == 3 && subjectsFailed > 1)
            {
                printf("No grace marks allotted\n");
            }
            else
            {
                printf("Grace marks allotted is %d\n", 5 * subjectsFailed);
            } 
            break;
            
        default:
            printf("Wrong class entered\n");
    }

    return 0;
}