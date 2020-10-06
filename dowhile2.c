int dowhile2(){
    char c;
    int i=1;
    int choice,dummy;
    do{
        printf("Please Enter Choice:");
        printf("\n1.Print Hello");
        printf("\n2.Print Java");
        printf("\n3.Exit");
        printf("\n.Select Choice");
        scanf("%d",&choice);
        i=i+1;
        switch(choice){
        case 1:
            printf("Hello");
            break;
            //default:
            printf("please enter valid choice");
        }
        case 2:
            printf("Java");
            break;
            printf("please enter valid choice");
        }
        case 3:
            exit(0);
            break;
            default:
            printf("please enter valid choice");
        }
        printf("\nDo you want to enter more?");
        scanf("%d",&dummy);
        scanf("%d",&c);
    }
    while(c=='y');
    return 0;
}
