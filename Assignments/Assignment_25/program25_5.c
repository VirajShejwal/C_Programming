/*Accept division of student from user and depends on the division display
exam timing. there are 4 division in scnool as A,B,C,D.Exam
of divison A at 7Am, B at 8:30AM , C at 9:20 AM and D at 10:30AM
(Application should be case sensitive)

Input : C
Output: Your exam at 9:20 AM
Input: d
Output : Your exam at 10:30 AM*/


#include<stdio.h>

void DisplaySchedule(char ch)
{
    switch(ch)
    {
        case 'A':
            printf("Your exam at 7:00 AM");
            break;

        case 'B':
            printf("Your exam at 8:30 AM");
            break;

        case 'C':
            printf("Your exam at 9:20 AM");
            break;

        case 'D':
            printf("Your exam at 10:30 AM");
            break;

        default:
            printf("Invalid Division");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division : ");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}
