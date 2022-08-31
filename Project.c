#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>
#include <graphics.h>
char sent5[]="STOP WATCH";
char sent4[]="Press 2 to reset it";
char sent[]="Press 0 to start the stopwatch";
char sent2[]="Press any key to pause it";
char sent3[]="Press 1 to continue after pausing";
char az[]="Hrs  Min  Sec  Milli";
int ans=0,answer=0;
void timer(void );
void *threaddd(void*ptrrr);
void digital_watch(void);
void stop_watch(void);
void stopwatch(int,int,int,int);
void *threatdd(void*ptrrr);
int siignal=0;
void shedule(void);
int main()
{
	int temp=0;
	int a,b,c,gm,gd=0,result=0;
	 int ww=1;
	 char de[1000],df[1000];
	 FILE *ps;
	 if (siignal==0)
	 {
	 pthread_t threadd;
	 pthread_create(&threadd,NULL,threatdd,NULL);}
	FILE *fp;
	fp=fopen("event.txt","r");
	if (fp==NULL)
	{
	}
		fscanf(fp,"%d",&a);
		fscanf(fp,"%d",&b);
		fscanf(fp,"%d",&c);
		fscanf(fp,"%s",&de);
		fscanf(fp,"%s",&df);
		if (fp!=NULL)
		{

					while (!feof(fp))
	{

		temp=temp+1;
		fscanf(fp,"%d",&a);
		fscanf(fp,"%d",&b);
		fscanf(fp,"%d",&c);
		fscanf(fp,"%s",&de);
		fscanf(fp,"%s",&df);
	}}


    int year1=0;
	char z[1000];
	if (ans==0)
	{time_t now;
	time(&now);
	struct tm *local = localtime(&now);
	 year1 = local->tm_year + 1900;}
    else
        year1=answer;

	int s;
	int i,leapdays=0,days,year,month,l,j,h[12],q;
	int e=-2,f=-1,g=0;
	float p;
	year=year1;

	printf("\n");
    for (i=1900;i<year;i++)
	   {
	   	      if (i%4==0)
	   	      {
	   	      	   leapdays=leapdays+1;
			  }
	   }
	days=year-1900;
	days=days*365;
	days=days+leapdays;
	int d=days;
	p=days;
	days=days/7;
	p=(p/7)-days;

	p=p*7;
	   int m[13];
    m[1]=p;
    if (p>((float)m[1]+0.5)&&p<((float)m[1]+1))
        {
	    	m[1]=m[1]+1;

		}
    int month1[]={1,31,28,31,30,31,30,31,31,30,31,30,31};
    if (year%4==0)
	    {
	    	month1[2]=29;
		}

        for (j=1;j<=9;j+=1)
	{
	if (j<4 || j>6)
	{
	for (i=0;i<168;i+=1)
	printf ("*");}
	else if (j==4 || j==6)
		{
	for (i=0;i<168;i+=1)
	printf (" ");}
	else
		{
	for (i=0;i<168;i+=1)
	if (i==77)
	{
		printf ("SMART CALANDER(%d)",year);
	i+=19;}
	else
	printf (" ");}}
printf ("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tReminders:");
    for(i=1;i<=4;i++)
	    {
	    	printf("\n");
	    	for (j=(i-1)*3+1;j<=i*3;j++)
	    	{
			h[j]=1;

	switch(j)
    {
	case 1:
	       printf("January                            ||    ");

	       break;
	case 2:
	       printf("February                           ||    ");
	       break;
	case 3:
	       printf("March                              ||    ");
	       break;
	case 4:
	       printf("April                              ||     ");
	       break;
	case 5:
	       printf("May                               ||     ");
	       break;
	case 6:
	       printf("June                              ||     ");
	       break;
	case 7:
	       printf("July                               ||     ");
	       break;
	case 8:
	       printf("August                            ||     ");
	       break;
	case 9:
	       printf("September                         ||     ");
	       break;
	case 10:
	       printf("October                            ||     ");
	       break;
	case 11:
	       printf("November                          ||     ");
	       break;
	case 12:
	       printf("December                          ||     ");
	       break;
    }

}



		int dd=1;

	    if (ww<=temp)
	    {
  if (fp!=NULL)
             {

	    	rewind(fp);


	    	while(!feof(fp))
	    	{

	   	      fscanf(fp,"%d",&a);
		      fscanf(fp,"%d",&b);
		      fscanf(fp,"%d",&c);
		      fscanf(fp,"%s",&df);
		      fscanf(fp,"%s",&de);
		      if 	(dd==ww)
		       {




		        	printf("\t\b->::%s of %s",&df,&de);


		       }


		       	dd=dd+1;
		       }
		       ww=ww+1;
		   }
	    }
	printf("\n");
printf ("__________________________________ ||    _________________________________  ||     __________________________________||\n");
     for (s=1;s<=3;s++)
   printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat  ||    " );

          dd=1;


	    if (ww<=temp)
	    {
  if (fp!=NULL)
             {

	    	rewind(fp);


	    	while(!feof(fp))
	    	{

	   	      fscanf(fp,"%d",&a);
		      fscanf(fp,"%d",&b);
		      fscanf(fp,"%d",&c);
		      fscanf(fp,"%s",&df);
		      fscanf(fp,"%s",&de);
		      if 	(dd==ww)
		       {




		        	printf("\t\b->::%s of %s",&df,&de);


		       }


		       	dd=dd+1;
		       }
		       ww=ww+1;
		   }}
   printf("\n");
   e=e+3;
   f=f+3;
   g=g+3;



   int t=1;
   int w=1;
   while (w<=6 )
   {

   for (q=(i-1)*3+1;q<=i*3;q++)
   {

   if (h[q]==1)
   {


   for (l=1 ;l <= t+(m[q]*5);l++)
	   	{
	    	printf(" ");


		}

		t=t-1;

}
rewind(fp);
	for (j=h[q];j<=50;j++)
	    {
	    	if (j<=month1[q])
	    	{
			  fscanf(fp,"%d",&a);

		      fscanf(fp,"%d",&b);

		      fscanf(fp,"%d",&c);

		      fscanf(fp,"%s",&df);
		      fscanf(fp,"%s",&de);
if (fp!=NULL)
	while (!feof(fp))
	{

		if (year==a && b==q&& c==j)
		{
		//printf("%d",a);
         static char aa='a';
		printf("\b->");
		aa=aa+1;

	   }

	          fscanf(fp,"%d",&a);
		      fscanf(fp,"%d",&b);
		      fscanf(fp,"%d",&c);
		      fscanf(fp,"%s",&df);
		      fscanf(fp,"%s",&de);

	}
	rewind(fp);

	    	printf("%2d", j );
	    }
	    else
	    {
	    	printf("  ");
		}

	    	if ((j+m[q])%7==0)
	    		{
	    			h[q]=j+1;
	    			break;

				}
			else
				{
					printf("   " );
				}

		}

          	if (h[q]<=8)
          	{


          	d=d+month1[q];
	        days=d;
	        p=days;
	        days=days/7;
	        p=(p/7)-days;
	        p=p*7;
	        m[q+1]=p;
	        if (p>((float)m[q+1]+0.5)&&p<((float)m[q+1]+1))
	           {
	    	       m[q+1]=m[q+1]+1;
		       }

		   }
		   printf("         ");

		}

		int dd=1;

	    if (ww<=temp)
	    {

	    	rewind(fp);


	    	while(!feof(fp))
	    	{

	   	      fscanf(fp,"%d",&a);
		      fscanf(fp,"%d",&b);
		      fscanf(fp,"%d",&c);
		      fscanf(fp,"%s",&df);
		      fscanf(fp,"%s",&de);
		      if 	(dd==ww)
		       {




		        	printf("\t\b->::%s of %s",&df,&de);


		       }


		       	dd=dd+1;




			}
			ww=ww+1;
		}

		printf("\n ");
		w=w+1;

	}

}
int zas;
if (ans==1)
   {

   printf ("\nEnter 6 to return to main page :");
    scanf("%d",&result);
    while (result!=6){
        system("cls");
        main ();
    }
    ans=0;
    answer=0;
    main();
   }

if (ans==0){
printf ("Enter 1 to search a year\n");
printf ("Enter 2 to access digital watch\n");
printf ("Enter 3 to access the stop watch\n");
printf ("Enter 4 to set an alarm\n");
printf ("Enter 5 to add a schedule :");

scanf ("%d",&zas);
switch (zas)
{
case 1:
     system("cls");
     printf ("Enter the year :");
    scanf("%d",&answer);
    ans=1;
    main();
    break;
case 2:
    digital_watch();
    break;
case 3:

    stop_watch();
    break;
case 4:
    timer();
    main ();
    break;
case 9 :
    exit (1);
case 5 :
	shedule();
	break;

default :
	system("cls");
    main();
    break;
}}
main(); }
void shedule (void)
{
	system("cls");
	int m;
	FILE *fp,*fp1;
	fp=fopen("event1.txt","a+");
	fp1=fopen("event.txt","a+");
	if (fp==NULL||fp1==NULL)
	{
		printf("error");
		exit(0);
	}
	int yevent,devent;
	char mevent[20],ch;
	char eevent[1000],efvent[1000];
	printf("Enter the year :");
	scanf("%d",&yevent);
	printf("Enter the month name with first letter in capital\nFor example December :");
	scanf("%s",&mevent);
	printf("Enter the date :");
	scanf("%d",&devent);
	printf("Enter the event\nFot example birthday or anniversery :");
	scanf("%s",eevent);
	printf("Enter the name :");
	scanf("%s",&efvent);
	if (yevent!=0 &&mevent!=0&&devent!=0)
	{
	fprintf(fp,"%d ",yevent);

	fprintf(fp,"%s ",mevent);
	if (devent>0&&devent<=9)
	fprintf(fp,"0");
	fprintf(fp,"%d",devent);
	fprintf (fp,"-");
	fprintf(fp,"%s ",eevent);
	fprintf(fp,"%s",efvent);
	fprintf (fp,"\n");
	fprintf(fp1,"%d\n",yevent);
	if (strcmp(mevent,"January")==0)
    m=1;
    if (strcmp(mevent,"Febuary")==0)
    m=2;
    if (strcmp(mevent,"March")==0)
    m=3;
    if (strcmp(mevent,"April")==0)
    m=4;
    if (strcmp(mevent,"May")==0)
    m=5;
    if (strcmp(mevent,"June")==0)
    m=6;
    if (strcmp(mevent,"July")==0)
    m=7;
    if (strcmp(mevent,"August")==0)
    m=8;
    if (strcmp(mevent,"September")==0)
    m=9;
    if (strcmp(mevent,"October")==0)
    m=10;
    if (strcmp(mevent,"November")==0)
    m=11;
	if (strcmp(mevent,"December")==0)
    m=12;
	fprintf(fp1,"%d\n",m);
	fprintf(fp1,"%d\n",devent);
	fprintf(fp1,"%s\n",eevent);
	fprintf(fp1,"%s\n",efvent);

    }
   fclose(fp);
	fclose(fp1);
	siignal=1;
	printf ("Do you want to add another event :");
	scanf (" %c",&ch);
	if (ch=='y')
	shedule();

else {

 pthread_t threadd;
pthread_create(&threadd,NULL,threatdd,NULL);
       system("cls");
}
}
void *threatdd(void *ptrrr)
{
 time_t t;
	 char a[100],b[100],ch,c;
	 int i=0,record=1,m=0,n=0,counter=0,j;
	 FILE *ptr,*ptrr;
	 if ((ptr=fopen("event1.txt","r"))==NULL)
    {
    }
	time(&t);
	struct tm *locltime=localtime(&t);
	strftime(a,100,"%Y %B %d",locltime);
	c=fgetc(ptr);
	while (c!=EOF)
	{
		if (c=='\n')
		record+=1;
		c=fgetc(ptr);
	}
	rewind(ptr);
	char s[record][20],l[record][20];
	int k=0;
		for (i=0;i<record;i+=1)
	{
		for (k=0;k<20;k+=1)
		s[i][k]='\0';
	}
		for (i=0;i<record;i+=1)
	{
		for (k=0;k<20;k+=1)
		l[i][k]='\0';
	}
	k=0,i=0;
	while ((ch=fgetc(ptr))!=EOF)
	{
		if (ch=='-')
		{
			k+=1;
			i=0;
		while ((ch=fgetc(ptr))!='\n')
		{
			l[m][n]=ch;
			n+=1;
		}
		m+=1;
		n=0;
		ch=fgetc(ptr);
			s[k][i]=ch;
			i+=1;
		}
	else
	{
		s[k][i]=ch;
		i+=1;}
	}
	counter=0;
	while (counter!=1)
	{
	for (j=0;j<record;j+=1)
	{
	if (strcmp (s[j],a)==0)
	{
		counter+=1;
		printf ("\a");
		ptrr=fopen("oscar.txt","w");
		for (k=0;k<record-1;k+=1)
			{
				if (k!=j)
				{
				fprintf (ptrr,"%s",s[k]);
				fprintf (ptrr,"-");
				fprintf (ptrr,"%s",l[k]);
				fprintf (ptrr,"\n");}
			}

			fclose (ptrr);
			fclose (ptr);
    remove("event1.txt");
    rename ("oscar.txt","event1.txt");
	}
}}fclose (ptr);
}
void timer(void )
{
char sen1[]="ALARM";
char sen2[]="Enter space to increase time";
char sen3[]="Enter 1 to move to next section";
char sen4[]="Enter 0 to set alarm";
char sen5[]="HOURS  MIN   SEC";
	int sec1=0,sec2=0,min1=0,min2=0,hour1=0,hour2=0;
	char arr[12],d1='A',d2='M';
	char ch='a';
	int gd=0,gm,a=1,count=1;
	initgraph(&gd,&gm,"");
	system("cls");
	 settextstyle(10,HORIZ_DIR,5);
	sprintf(arr,"%d%d:%d%d:%d%d:%c%c",hour1,hour2,min1,min2,sec1,sec2,d1,d2);
	while(count!=4)
    {
         sprintf(arr,"%d%d:%d%d:%d%d:%c%c",hour1,hour2,min1,min2,sec1,sec2,d1,d2);
            setcolor(3);
            settextstyle(10,HORIZ_DIR,5);
            outtextxy(180,150,arr);
            settextstyle(10,HORIZ_DIR,2);
            outtextxy(180,200,sen5);
            settextstyle(10,HORIZ_DIR,8);
            setcolor(4);
            outtextxy(200,50,sen1);
            settextstyle(10,HORIZ_DIR,2);
            outtextxy(80,260,sen2);
            outtextxy(80,280,sen3);
            outtextxy(80,300,sen4);
            system("cls");
            ch=getch();
         if (ch==13)
            {count+=1;
            continue;}
         else if(ch==32 && count==1)
        {
               hour2+=1;
               if (hour2>9)
              {
                hour1=1;
                hour2=0;}
                if (hour1==1 && hour2>2)
               {hour1=0;
               hour2=0;
                   if(d1=='A')
                d1='P';
                else d1='A';
              }
           }

           else if (ch==32 && count==2)
           {
               min2+=1;
               if(min2>9)
                {min2=0;
                min1+=1;}
                if (min1==6&& min2==0)
                    {min1=0;
                    min2=0;}
           }
           else if (ch==32 && count==3)
           {
               sec2+=1;
               if(sec2>9)
                {sec2=0;
                sec1+=1;}
                if (sec1==6 && sec2==0)
                    {sec1=0;
                    sec2=0;}
           }
    }

    while((ch=getch())!='0');
    closegraph();
     pthread_t threadd;
	pthread_create(&threadd,NULL,threaddd,arr);
        main ();
        pthread_join(threadd,NULL);


}
void *threaddd(void *ptrrr)
{
     char *pt=(char *)ptrrr;
    int i;
char arr[12];
    for (i=0;i<12;i+=1){
    arr[i]=*pt;
    pt++;}
    char az[12];
    while (strcmp(arr,az)!=0)
    {
        time_t t;
        time(&t);
        struct tm *tme=localtime(&t);
        strftime(az,12,"%I:%M:%S:%p",tme);
    }
printf ("\a");
return NULL;
}
void digital_watch(void)
{int i;
	int gd=0,gm;
	char a[100],f;
	time_t t;
	initgraph (&gd,&gm," ");
while (!kbhit())
	{
	time(&t);
	struct tm *time=localtime (&t);
	strftime (a,100,"%I:%M:%S:%p",time);
	setcolor (11);
	settextstyle (4,HORIZ_DIR,5);
	outtextxy(150,100,a);
	strftime(a,100,"%a %d %b %Y",time);
	settextstyle(9,HORIZ_DIR,3);
	outtextxy(205,150,a);

}
getch();
closegraph();
system("cls");
}
void stop_watch(void)
{

	int sec=0,min=0,hour=0,milli=0,gd,gm=0;
    system ("clear");
     initgraph(&gd,&gm," ");
	char arr[6],p='a';
	sprintf(arr,"%d: %d: %d: %d",hour,min,sec,milli);
	setcolor(3);
	settextstyle(10,HORIZ_DIR,5);
        outtextxy(200,150,arr);
         settextstyle(4,HORIZ_DIR,2);
        setcolor(5);  outtextxy(200,210,az);
         setcolor(4);
         settextstyle(10,HORIZ_DIR,2);

        outtextxy(30,250,sent);
        outtextxy(30,270,sent2);
        outtextxy(30,290,sent3);
        outtextxy(30,310,sent4);
        settextstyle(4,HORIZ_DIR,4);
        setcolor(5);
        outtextxy(160,90,sent5);
        p=getch();
        while (p!='0' && p!='3')
           {
           	if (p=='3')
           	{
           		system ("cls");
           		main ();
			   }
			   else
			p=getch();}
        stopwatch(hour,min,sec,milli);
}
void stopwatch(int hour, int min, int sec, int milli)
{
    char ch,s,arr[7];
    system("cls");
    while(!kbhit())
    {
        setcolor(3);
        sprintf(arr,"%d: %d: %d: %d",hour,min,sec,milli);
        settextstyle(10,HORIZ_DIR,5);
        outtextxy(200,150,arr);
        system("cls");
        if(milli>98)
		{
			sec+=1;
			milli=0;
		}
		if(sec>59)
		{
			sec=0;
			min+=1;
		}
		if(min>59)
		{
			sec=0;
			min=0;
			hour+=1;
		}
		milli+=3;
    }
   ch=getch();
    s=getch();
   while (s!='1' && s!='2' && s!='3')
   {s=getch();}
       if (s=='2')
        {closegraph();
            stop_watch ();}
    else if(s=='1')
        stopwatch(hour,min,sec,milli);
       else if (s=='3')
        {closegraph();
        system("cls");
        }
}










