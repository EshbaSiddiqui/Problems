int main() 
{

    char Type,Size;


        printf("Enter the type of coffee (B/b for Black and W/w for White): ");
        scanf(" %c",&Type);

        printf("Enter the size of coffee (D/d for Double and S/s for Single): ");
        scanf(" %c",&Size);
    switch (Type) 
    {
        case 'B':
        case 'b':
                switch (Size) 
                {
                case 'D':
                case 'd':
                     printf(" Put Water: 30 min\n Sugar : 30 min\n Mix Well: 37.5 min\n Add Coffee 22.5 min\n Add Milk - \n Mix Well 37.5 min\n"); 
                     printf("Total Time: 157.5 min\n");   
                     printf("Double ");
                     break;

                    case 'S':
                    case 's':
                     printf(" Put Water: 20 min\n Sugar : 20 min\n Mix Well: 25min\n Add Coffee 15min\n Add Milk - \n Mix Well 25min\n");
                     printf("Total Time: 105 min\n"); 
                     printf("Single ");
                     break;

                     default:
                     printf("Invalid Size\n");
                }
                    printf("Black Coffee Ready!\n");
                    break;

        case 'W':
        case 'w':
                switch (Size)
                {
                case 'D':
                case 'd':
                     printf(" Put Water: 22.5 min\n Sugar : 22.5 min\n Mix Well: 30min\n Add Coffee 3min\n Add Milk 3min\n Mix Well 30min\n"); 
                      printf("Total Time: 111 min\n");
                     printf("Double ");
                     break;

                    case 'S':
                    case 's':
                     printf(" Put Water: 15 min\n Sugar : 15 min\n Mix Well: 20min\n Add Coffee 2min\n Add Milk 2min\n Mix Well 20min\n");
                     printf("Total Time: 74 min\n");
                      printf("Single ");
                     break;

                     default:
                     printf("Invalid Size\n");
                }
                    printf("White Coffee Ready!\n");
                    break;
   
   
           default:
           printf("Invalid Type\n");
        }
    

    return 0;
    }


