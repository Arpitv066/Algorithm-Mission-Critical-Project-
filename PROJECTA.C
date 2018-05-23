#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


int matrix[25][25],visited_cities[10],limit,cost=0;
int tsp(int c)
{
	int count,nearest_city=999;
	int minimum=999,temp;
	for(count=0;count<limit;count++)
	{
		if((matrix[c][count]!=0)&&(visited_cities[count]==0))
		{
			if(matrix[c][count]<minimum)
			{
				minimum=matrix[count][0]+matrix[c][count];
			}
			temp=matrix[c][count];
			nearest_city=count;
		}
	}
	if(minimum!=999)
	{
		cost=cost+temp;
	}
	return nearest_city;
}
void minimum_cost(int city)
{
	int nearest_city;
	visited_cities[city]=1;
	printf("%d",city+1);
	nearest_city=tsp(city);
	if(nearest_city==999)
	{
		nearest_city=0;
		printf("%d",nearest_city+1);
		cost=cost+matrix[city][nearest_city];
		return;
	}
	minimum_cost(nearest_city);
}





























void knapsack(int n, float weight[], float profit[], float capacity) {
   float x[20], tp = 0;
   int i, j, u;
   u = capacity;

   for (i = 0; i < n; i++)
      x[i] = 0.0;

   for (i = 0; i < n; i++) {
      if (weight[i] > u)
	 break;
      else {
	 x[i] = 1.0;
	 tp = tp + profit[i];
	 u = u - weight[i];
      }
   }

   if (i < n)
      x[i] = u / weight[i];

   tp = tp + (x[i] * profit[i]);



   printf("\nMaximum profit is:- %f", tp);

}















void count_frequency(char str[],int s[])
{
    int i=0,j,count;
    while(str[i]!='\0')
    {
	j=0;
	count=0;
	while(str[j]!='\0')
	{
	    if(str[i]==str[j])
		count++;
	    j++;
	}

	s[str[i]-97]=count;
	i++;
    }
}
void main()
{
int cost[10][10],path[10][10],n,z,v,p,i,j,row,column,min,index=1;
int distance[10];
 char str1[]="thermo",str2[100];
    int flag=1,s1[26]={0},s2[26]={0};


float weight[20], profit[20], capacity;
   int num;
   float ratio[20], temp;






clrscr();
printf("\t\t==============The mISsIon=========\n");
printf("\nCaptain Ajay Lala Pratap is on the mission in which he has to destroy the\n");
printf("\PAK headquarters in order to get intels\n");
printf("\nHIS first mission is to find shortest path to reach ISI hq\n\n");
printf("\nTHE intelligence department....R.A.W...... named different cities as different codes\n\n\n");
delay(20000);
printf("\n01=>Firozpur{++++LAUNCHING PAD++++++}");
printf("\n\t02=>Lahore");
printf("\n\t\t03=>Abbotabad");
printf("\n\t\t\t04=>Islamabad");
printf("\n\t\t\t\t05=>KARACHI(ISI HQ)");
printf("\n\n");

printf("\nNOW to reach there Enter the information regarding cities...\n");
printf("\nand their distances");
printf("\n============->JAI HIND<-==============");

delay(5000);

printf("\n \t\t\t\t\t[Firozpur]\n");
printf("\t\t\t\t\t/\t\\\n");
printf("\t\t\t\t.....4km\t8km\n");
printf("\t\t\t\t..   /..\t...\\  \n");
printf("\t\t\t\t..[Lahore] \t[Isalamabad]----7km----[Karachi] \n");
printf("\t\t\t\t.... \\\t\t../ \n");
printf("\t\t\t\t....3km\t\t4km\n");
printf("\t\t\t\t........\\....../ \n");
printf("\t\t\t\t\t[Abbotabad]\n");











printf("\nEnter no of (pathways)\n========>");
scanf("%d",&n);
printf("\nEnter distance calculation list.....\n");
for(i=1;i<=n;i++)
{
printf("\n");
for(j=1;j<=n;j++)
{

scanf(" %d",&cost[i][j]);
}
}
printf("\nEnter city id  to visit ==\n");
scanf("%d",&v);
printf("\nEnter no of  paths for selected city....\n====>");
scanf("%d",&p);
printf("\nEnter path matrix\n");
for(i=1;i<=p;i++)
{

for(j=1;j<=n;j++)
{
scanf("%d",&path[i][j]);
}
}

for(i=1;i<=p;i++)
{
distance[i]=0;
row=1;
for(j=1;j<=n;j++)
{
if(row!=v)
{
column=path[i][j+1];
distance[i]=distance[i]+cost[row][column];
}

row=column;
}
}
min=distance[1];
for(i=1;i<=p;i++)
{
if(distance[i]<=min)
{
min=distance[i];
index=i;
}
}
printf("\n.....THE min distance to reach ISI-HQ is %d",min);
printf("\nTHE best way to reach Enemy HEADQUARTERS is\n" );
for(i=1;i<=n;i++)
{
if(path[index][i]!=0)
{
printf("\t\t--->%d",path[index][i]);
}
}
   delay(4000);
 printf("\n Now he has reached the ISI HEADQURARTERS, but to enter inside headquarters \n");
printf("He has to crack the password.........");
    delay(3000);

printf("\n\n--------------------------------------------------------------");
printf("\nSolve the Sequrity Qus first....or its Anagram to enter inside(6 letters)\n\n");

    delay(4000);
    l1:printf("\t\t\tWhenever I am in pain....");
    printf("\n\t\t\tI call your name.......\n");
    delay(2000);
    printf("\nEnter Your Answer........\t");
     scanf("%s",str2);
delay(4000);
printf("\nwait_______system is analysing.....password\n");
delay(5000);

    if(strlen(str1)!=strlen(str2))
    {
	printf("\nStrings are not anagrams");
	exit(0);
    }

    count_frequency(str1,s1);
    count_frequency(str2,s2);

    for(i=0;i<26;++i)
    {
	if(s1[i]!=s2[i])
	{
	    flag=0;
	    break;
	}
    }

    if(flag)
    {
	printf("\nPassword is matched.....,You are allowed to be in...");
	}
    else
    {
	printf("\nWRONG PASSWORD ...........");
	printf("\nYou are caught and over......");

	delay(3000);

	goto l1;
   }
    delay(4000);

printf("\nCaptain is now inside HQ,his next task is to collect information\n");
printf("\nnow he has information of intels and a hard disk to store the information");
printf("\nNOw he has to get maximum profit......\n\n");
printf("\-------------------------------------------------------------------------\n");
printf("\n\t\t\t\tTHE R.A.W INFORMATION\n");
printf("---------------------------------------------------------------------------\n");
printf("\nIntel\t\tProfit\t\tTotal Size\n");
printf("Inter.A\t\t00003\t\t290 G.B\n");
printf("\nexter.A\t\t0004\t\t500 G.B\n");
printf("\ndefence\t\t0005\t\t200 G.B\n");
printf("\nArmy.F\t\t00006\t\t350 G.B\n");
printf("\nNavy.F\t\t0007\t\t600 G.B\n");
printf("\nAir.Fc\t\t0010\t\t400 G.B\n");

delay(3000);

printf("\n......Now enter the information to get Maximum data value \n");

delay(3000);



   printf("\n\tEnter the no. of intel sections:- \n");
   scanf("%d", &num);

   printf("\nEnter the size of intels and profit associated with each intel:- \n");
   for (i = 0; i < num; i++)
    {
      scanf("%f %f", &weight[i], &profit[i]);
   }

   printf("\nEnter the capacity of hard disk in terms of GB's :- ");
   scanf("\n%f", &capacity);

   for (i = 0; i < num; i++)
 {
      ratio[i] = profit[i] / weight[i];
   }

   for (i = 0; i < num; i++) {
      for (j = i + 1; j < num; j++) {
	 if (ratio[i] < ratio[j]) {
	    temp = ratio[j];
	    ratio[j] = ratio[i];
	    ratio[i] = temp;

	    temp = weight[j];
	    weight[j] = weight[i];
	    weight[i] = temp;

	    temp = profit[j];
	    profit[j] = profit[i];
	    profit[i] = temp;
	 }
      }
   }

   knapsack(num, weight, profit, capacity);


delay(4000);

printf("\nWell Done ,Captain Ajay you have now maximum information.....\n");
delay(2000);
printf("\nyour next task is to destroy the remaining sections of ISI HQ...\n");
delay(2000);
printf("\nYou have to Plant Bomb in such a way that you will cover minimum distance ...\n");
delay(2000);
printf("\nand come back to your starting point........\n");
delay(2000);

printf("\nCaptain Ajay has found the map in which the distance from different locations\n");
printf("\nare given..............\n");

delay(3000);

printf("\n====@@@@@@@... wait............ .MAP is LOADING\n");
delay(5000);
printf("\n\n");


printf("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("-------------------------MAP OF HQ ------------------------------\n");
printf("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");


printf("\n\tOfficial.cabins----4km-----community.halls");
printf("\n\t\t|   \\            /  |   ");
printf("\n\t\t|    2km       /    |   ");
printf("\n\t\t5km      \\ 3km    3km  ");
printf("\n\t\t|        / \\        |");
printf("\n\t\t|      /      \\     |");
printf("\n\t\t|    /           \\  |");
printf("\n\tAdministrator");
printf("-----4km----Database ");


delay(4000);
printf("\n\n\n");


printf("\nNow using Map ,He has to fit bomb so that he will cover min distance\n");


printf("\n\t\t\tFill the information below.........\n");




printf("\n Enter total locations where you have to fit time bomb \t");
	scanf("%d",&limit);
	printf("\n Enter the distance matrix  for locations\n");

	for(i=0;i<limit;i++)
	{
		printf("\n Enter %d elements in row[%d]\n",limit,i+1);
		for(j=0;j<limit;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
		visited_cities[i]=0;
	}
	delay(2000);
	printf("\nThe data Inserted..............\n");
	printf("\n Entered distance matrix \n");
	for(i=0;i<limit;i++)
	{
		printf("\n");
		for(j=0;j<limit;j++)
		{
			printf("%d",matrix[i][j]);
		}
	}
	printf("\n\nSuitable path for you:\t");
	minimum_cost(0);



delay(4000);

printf("\nSUPERB............well done Captain,Time bombs has been planted.");
delay(2000);
printf("\All tasks are completed,now you have to escape from that place......");
delay(3000);
printf("\n==================================================================\n");
printf("\nAt Administrator Block ,Captain Ajay finds a MAP SECTION.....");
delay(2000);
printf("\nIn that Section , he selects 5 maps in which one map will lead him...\n");
printf("towards escape from ISI headquartes.....\n");
delay(3000);
printf("\nNOW HIS NEXT TASK IS TO FIND THE RIGHT MAP TO ESCAPE.......\n");
delay(2000);
printf("\nWAIT-----MAPS ARE LOADING");
delay(4000);

printf("\n|||||||||||||||||  MAP 1  ||||||||||||||||||||||||||||||||||||||||||||\n");
printf("\n                   *******Sewage Pipelines N/W Of ISI HQ*******");
printf("\n                   |__________________________________________|");
printf("\n                                                     ");
printf("\n                                                     ");
printf("\n ---------------------------------------|                       ");
printf("\n -----------------|   |--------------|  |                       ");
printf("\n -----------------|   |--------------|  |______________________");
printf("\n _________________________   __________________________________#");
printf("\n                          | |________________________________");
printf("\n                          |_________________________  _______#");
printf("\n                                                   / /                  ");
printf("\n ________________________________________________/ /");
printf("\n _________________________________  _____________/");
printf("\n                                  ||      ");
printf("\n                                  ||____________________________");
printf("\n                                  |_____________________________");
printf("\n                                                                ");
printf("\n                                                                ");
printf("\n 		     *******SIGN CONVENTION IS AS FOLLOWS******* ");
printf("\n	             --   >Weak walls");
printf("\n 	             __   >Reinforced concrete walls");
printf("\n                   #   >Permanent Blockades\n\n\n");
delay(4000);
printf("\n||||||||||||||||||||||   MAP 2   |||||||||||||||||||||||||||||||||||||||||\n");

printf("\n\tofficial.cabins----4km-----community.halls");
printf("\n\t\t|   \\            /  |   ");
printf("\n\t\t|    2km       /    |   ");
printf("\n\t\t5km      \\ 3km    3km  ");
printf("\n\t\t|        / \\        |");
printf("\n\t\t|      /      \\     |");
printf("\n\t\t|    /           \\  |");
printf("\n\tAdministrator");
printf("-----4km----Database \n\n\n");

delay(4000);

printf("\n|||||||||||||||||||||||||  MAP 3  |||||||||||||||||||||||||||||||||||||||||||||||||\n");

printf("\n*******Secret Tunnel N/W Of ISI For Special Serveillance Missions*******");
printf("\n|_________________________________________________________________________|");
printf("\n                                                                              ");
printf("\n                                                                              ");
printf("\n  ____________________/------------------------\__________________");
printf("\n->_______:_   _________________/ /--------------\_________________:");
printf("\n  	    ! !	        / /_________________________________________");
printf("\n 	    ! !	      /____________________  __________________  ___::");
printf("\n     	    ! !                           / /                  / /" );
printf("\n	    ! !__________________________/_/_________  _______/ /");
printf("\n	    ! _______________________________  ____________::_______/");
printf("\n_________________________________________   \\   \\escape"         );
printf("\n________________________________________/     \\    \\ "      );
printf("\n                                                \\    \\                           ");
printf("\n                                                   \\    \\                         \n ");

printf("\n sign convention is as follows \n");
printf("\n :    ->Constructed valves");
printf("\n ::   ->Unconstructed valves");
printf("\n __   ->Reinforced concrete walls");
printf("\n --   ->Weak & old concrete walls");
printf("\n |    ->Blockades\n\n\n");


delay(4000);

printf("\||||||||||||||||||||||||||||||| MAP 4 |||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");


printf("\n _____________MAP OF WATER SUPPLY______________\n");
printf("\ntank-----------------------cleaners\n");
printf(" | \\                         /       \n");
printf(" |    \\                    /       \n");
printf(" |      \\                /       \n");
printf(" |        S.T.P        / \n");
printf(" |                   / \n");
printf(" |                 /  \n");
printf("geysers--------water\n");


delay(4000);

printf("\n||||||||||||||||||||||||||||||| MAP 5 ||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");

printf("\n \t\t\t\t[Discuss.Room]\n");
printf("\t\t\t\t/\t\\\n");
printf("\t\t\t........\t\n");
printf("\t\t\t..   /..\t...\\  \n");
printf("\t\t\t..[Food.dept] \t[Dining Room]--------[examine.hall] \n");
printf("\t\t\t.... \\\t\t../ \n");
printf("\t\t\t....  \\\t\t /\n");
printf("\t\t\t........\\....../ \n");
printf("\t\t\t\t[Maszid]\n");

delay(3000);

printf("\nNow Choose the Right Map to exit from ISI headquarters.............\n");
delay(2000);

l2:printf("\nEnter the right map no --->\n");
scanf("%d",&z);
printf("\nWait...........System is Analysing Your Result\n");
delay(4000);
if(z==3)
{
printf("\Well done ,you have chosen the right map......Go Ahead.....");
}
else
{
printf("\nOOPS.....Wrong MAP.......");
goto l2;
}
printf("\nWELL DONE CAPTAIN,NOW TRIUMPH Will be YOURS...............");

delay(3000);
printf("CAPTAIN Is now moving towards India after completing his MISSION........\n");
delay(3000);
printf("\n\t\tISI HEADQUARETERS\n");
delay(2000);
printf("\n\t\t|    |\n");
delay(2000);
printf("\n\t\t |    |\n");
delay(2000);
printf("\n\t\t  |    |            P A K I S T A N                       \n");
delay(1000);
printf("\n\t\t |    |\n");
printf("\n\t\t|    |");
delay(2000);
printf("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
printf("\                            B O R D E R                                          ");
printf("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
printf("\n                                                                              \n");
delay(2000);
printf("\n\t\t|    |      V I C T O R Y                                              \n");
delay(2000);
printf("\n\t\t |    |");
delay(2000);
printf("\n*******************   I N D I A  ********************************\n");
printf("\n CONGRATULATIONS SIR YOU HAVE COMPLETED THE MISSION..............");






















   getch();
}









