#include <stdio.h>
#include <stdlib.h>
#define MAX 320		//is the max value of string expressions in c


int main()
{
    char dizi[MAX];	//is the sentence received
    int i;		//to be used when creating password
    int ret;		//we will use it when choosing which application to do

    printf("Please enter the sentence you want to create the password:\n");
    fgets(dizi,sizeof(dizi),stdin);		//take the sentence
    printf("your sentence: \n\"%s\"",dizi);	//show the sentance
    //printf("\ncumleyi onaylamiyorsaniz (h) diyerek programi sonlandirabilirsiniz\n");
    
    printf("\n");
    printf("if you want long password press (1), else if you want short password press (2)");
    printf("\n");
    scanf("%d",&ret);		//taking what action to take


    if(ret == 1)		// it goes into action if ret is 1
    {
    	printf("\n");
        printf("your password:");
        printf("\n");
        for(i=0; dizi[i+1] !='\0'; i++)		//Examining letter by letter string
        {
            int chhar = dizi[i];		//the letter value is synchronized to the asci code of the "i" of the sequence
            chhar = chhar-96;		//Since the letter "a" is 97, it helps us to subtract 96 and see how many letters it is.
            if(chhar<0)		//if the ASCI code of the letter is less than 96
                chhar = (chhar* -1);		//Getting the positive value
            //printf("%c\n",dizi[i]);		//if desired, this process can be displayed letter by letter
            printf("%d",chhar);		//the alphabetic order of the letter is pressed to the screen
            //printf("\n\n\n");
        }
    }
    else if(ret == 2)		//it goes into action if the ret is 2
    {
        int total=0;		//Starting from the total value 0
        for(i=0; dizi[i+1] !='\0'; i++)		//examining the ASCI code of all letters
        {
            int chhar = dizi[i];		//the letter value is synchronized to the asci code of the "i" of the sequence
            chhar = chhar-96;		//Since the letter "a" is 97, it helps us to subtract 96 and see how many letters it is.
            if(chhar<0)		//if the ASCI code of the letter is less than 96
                chhar = (chhar* -1);		//Getting the positive value
            total+=chhar;		//adding the value of the new letter to the total value
        }
        printf("\n");
        printf("your password:");
        printf("\n");
        printf("%d",total);
    }
    else		//If ret is different from 1 or 2, it goes into action
    {
	printf("\n");
	printf("error");
    	printf("\n");
    	printf("wrong login");
    	printf("\n");
    	printf("finishing program");
	}
    
    return 0;
}
