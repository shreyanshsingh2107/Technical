#include<stdio.h>
#include<stdio.h>

int  Students(){

}

int  Trainer(){

}

int  TrainerLead(){

}

int  ProjectManager(){

}

int  ProjectHead(){

}

int  Director(){

}

int  ProVC(){

}

int main(){
    int choice, num; 
    printf("Press 1 to Check Students\n"); 
    printf("Press 2 to Check Trainer\n");
    printf("Press 3 to Check TrainerLead\n");
    printf("Press 4 to Check ProjectManager\n");
    printf("Press 5 to Check ProjectHead\n");
    printf("Press 6 to Check Director\n");
    printf("Press 7 to Check ProVc\n");

    printf("Enter your choice: "); 
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        Students();
        break;
    case 2:
        Trainer();
        break;
    case 3:
        TrainerLead();
        break;
    case 4:
        ProjectManager();
        break;
    case 5:
        ProjectHead();
        break; 
    case 6:
        Director();
        break;
    case 7:
        ProVC();
        break;
    
    default:
        printf("INVALID CHOICE");
        break;
    }

    return 0;
}