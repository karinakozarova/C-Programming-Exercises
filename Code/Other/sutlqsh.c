#include <stdio.h>
#include <math.h>
#include <string.h>
void menu();

int main(){
        char choice;
        int eggs,answer=0,food;
        int infinity=1;
        menu();
        scanf("%c",&choice);
        if(choice=='a')
        {
            for(;infinity;) printf("Are you serious?!\n");
        }

        else if(choice=='b')
        {
                printf("\nWhat do you want?(press 1 or 2)\n1.Omelette\n2.Pancakes\n\nMy choice is:");
                scanf("%d",&eggs);
                printf("\nEggtastic choice!Here is the recipe:\n");
            if(eggs==1)
                {

                printf("\n\nCrack the eggs into a mixing bowl. Beat well with a fork.\nHeat a small knob of butter in a small frying pan, add the eggs.\nUsing a spatula, ease around the edges of the omelette, then fold it over in half. \nNow eat your delicious eggs.");
                }
            else if(eggs==2)
                {
                printf("\n\nPut the flour, eggs, milk and a pinch of salt into a bowl or large jug, then whisk to a smooth batter.Pour it all in a pan and cook each pancake for 1min per side.Voila!Now eat your awesome pancakes.");
                }
            else printf("You are not getting a recipe if you can't press only 1 or 2 on your keyboard!");

        }

        else if(choice=='c')
        {
            printf("\nAre you a zombie?Press 1 if you're a fucking zombie.\n");
            scanf("%d",&answer);
            if(answer==1) printf("\nThen go eat brains!\n");
            else printf("\nFor a moment I got quite scared.Go eat salad like a good not brain eating creature\n");
        }
        else if(choice=='d')
        {
            printf("\nPress 1 or 2 or 3 and I will tell you what to eat\n\n");
            scanf("%d",&food);
            if(food==1) printf("Go eat lutenitza cause lutenitza is lof,lutenitza is life\n");
            else if(food==2) printf("Go eat a steak\n");
            else if(food==3) printf("Go eat dogs you little china man\n");
            else printf("You must be really desperate.Go for a shot of vodka\n");
        }
        else printf("\nYou should have entered a/b/c/d.Sorry,dude,no second chance for you!\n");

return 0;
}

void menu(){
 printf("\nWhat should I eat:\n(press a,b,c,d on your keyboard)\n\na.People\nb.Eggs\nc.Brains\nd.Don't know\n\nI choose:");
}
