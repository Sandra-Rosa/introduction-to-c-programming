#include <stdio.h>
#include <stdlib.h>

int main (void){
    int limit,i,values[100],searchkey,flag=0;
    printf("Enter limit");
    scanf("%d",&limit);
    printf("Enter values");
    for(i=0;i<imit;i++){
        scanf("%d",&values[i];)
    }
    printf("Please enter searchkey");
    scanf("%d",&searchkey);
    for(i=0;i<limit;i++){
        if(searchkey==values[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Value found at position %d",i+1);}
    else{
        printf("value not found");
    }
}
return EXIT_SUCCESS;
}