#include <stdio.h>

int main()
{
    int user, english, gujarati, hindi;

    printf("Print 1 for english \n");
    printf("gujarati ke liye 2 dabao \n");
    printf("hindi ke liye 3 dabaye \n");

    printf("-----------------\n");
    scanf("%d" ,&user);
    printf("-----------------\n");

    switch (user)
    {
    case 1:
        printf("Press 1 for Internet Recharge \n");
        printf("Press 2 for top-up Recharge \n");
        printf("Press 3 for Special Recharge \n");

        printf("-----------------");
        scanf("%d" ,&english);
        printf("-----------------");

        switch (english)
        {
        case 1:
            printf("You have successfully done Internet Recharge");
            break;
        case 2:
            printf("You have Successfully done Top-up Recharge ");
            break;
        case 3:
            printf("You have successfully done Special Recharge");
            break;
        default:
            printf("please try again");
            break;
        }
        break;
    case 2:
        printf("Internet Recharge mate 1 dabavo \n");
        printf("Top-up Recharge mate 2 dabavo \n");
        printf("Special Recharge mate 3 dabavo \n");

        printf("----------------- \n");
        scanf("%d" ,&gujarati);
        printf("----------------- \n");

          switch (gujarati)
        {
        case 1:
            printf("Tame safaltapurvak Internet Recharge kri lidhu che");
            break;
        case 2:
            printf("Tame safaltapurvak Top-up Recharge kri lidhu che");
            break;
        case 3:
            printf("Tame safaltapurvak Special Recharge kri lidhu che");
            break;
        default:
            printf("please try again");
            break;
        }
        break;

    case 3:
        printf("Internet Recharge ke liye 1 dabaye \n");
        printf("Top-up Recharge ke liye 2 dabaye \n");
        printf("Special Recharge ke liye 3 dabaye \n");

        printf("---------------- \n");
        scanf("%d" ,hindi);
         printf("---------------- \n");

        switch (hindi)
        {
       case 1:
            printf("Apne safaltapurvak Internet Recharge kar liye hai");
            break;
        case 2:
            printf("Apne safaltapurvak Top-up Recharge kar liya hai");
            break;
        case 3:
            printf("Apne safaltapurvak Special Recharge kar liya hai");
            break;
        default:
            printf("please try again");
            break;
        }
        break;
        
        default:
        printf("please try again");
        break;
        }
   
    }

