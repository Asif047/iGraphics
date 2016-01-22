# include "iGraphics.h"
#include<stdlib.h>
int page=1;
void welcome();
void level1();
void menu();
void level2();
void level3();
void level4();
void level5();
void gameover();

void credit();
void instruction();
void levels();
void win();

void inst_level1();
void inst_level2();
void inst_level3();
void inst_level4();
void inst_level5();

//variables for level1() function
int x=90,y=100,a=100,b=130,da,db,p,q,score=0,timer=150,mp,mq;

//variables for level2() function
int xx=0,aa=620,dxx,daa;

//variables for level3() function

int s=193,t=193,ds,dt,m=532,n=532,dm,dn;

//variables for level4() function
int boyX,boyY,cowX,cowY,head3X,head3Y,head4X,head4Y;

//variables for levels lock,unlock system
int unlc_level2=1,unlc_level3=1,unlc_level4=1,unlc_level5=1;

char scoreStr[10];
char timeStr[10];
void scoreUpdate();
void timeupdate();
void setCoordinate();
void setCoordinate1();

/* 
	function iDraw() is called again and again by the system.
	
*/
void iDraw()
{
	//place your drawing codes here	
	iClear();
	if(page==1)welcome();
	else if(page==2)menu();
	else if(page==3)level1();
	else if(page==4)level2();
	else if(page==5)level3();
	else if(page==6)level4();
	else if(page==7)level5();
	else if(page==8)levels();
	else if(page==9)instruction();
	else if(page==10)credit();
	else if(page==11)gameover();
	else if(page==12)win();
	else if(page==13)inst_level1();
	else if(page==14)inst_level2();
	else if(page==15)inst_level3();
	else if(page==16)inst_level4();
	else if(page==17)inst_level5();
}

//for moving 1st cartoon in level 1
void move()
{
	
	a=a+da;
	if(a>=200||a<=100)
	{da=-da;}

}

//for moving 2nd cartoon in level 1
void move1()
{
	b=b+db;
	if(b>=200||b<=110)
	{db=-db;}
}


//for moving the 1st car in level 2

void move3()
{
	xx=xx+dxx;
	if(xx>=830||xx<=-200)
	{dxx=-dxx;}
}

//for moving the 2nd car in level 2
void move4()
{
	aa=aa+daa;
	if(aa>=620||aa<=-200)
	{daa=-daa;}
}

//void move5(),void move6(),void move7(),void move8() are used to move cartoons in level 3

void move5()
{
	s=s+ds;
	if(s>=313||s<=193)
	{ds=-ds;}
}

void move6()
{
	t=t+dt;
	if(t>=313||t<=193)
	{dt=-dt;}
}

void move7()
{
m=m+dm;
	if(m>=540||m<=315)
	{dm=-dm;}
}

void move8()
{
n=n+dn;
	if(n>=540||n<=315)
	{dn=-dn;}
}


/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mp, int mq)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
		p=mp;
		q=mq;
	
			
			    if(page==1)
				{
					if(p>=278&&p<=532&&q>=55&&q<=112)//mouse clicking system for starting page
						page=2;

					
				}



				else if(page==2)//that's the menu page
				{
					if(p>=330&&p<=488&&q>=263&&q<=300)
					{
						page=13;
						
					}
					else if(p>=710&&p<=788&&q>=10&&q<=50)
						exit(0);

					else if(p>=360&&p<=450&&q>=198&&q<=234)
						page=8;

					else if(p>=328&&p<=486&&q>=130&&q<=165)
						page=9;
					
					else if(p>=358&&p<=450&&q>=67&&q<=98)
					page=10;

				}


				else if(page==3)// page 3 is for level 1 of the game
					{
					
				if((p>=110&&p<190)&&(q>=200&&q<=a+70))
				{
				printf("score:%d\a",score);
				score=score+5;
                
				//for getting in next level
				if(score>179)
				{
					page=14;
					
				}
				

				}
				else if((p>=510&&p<=590)&&(q>=200&&q<=b+70))
				{
					printf("score:%d\a",score);
					score=score+5;

                //for getting in next level
			     	if(score>179)
					{
						page=14;
						score=0;
						timer=180;
					}
					

				}
				else if(mp>=25&&mp<=95&&mq>=25&&mq<=65)
				{
					page=2;
					score=0;
				
				}
				
				}


				else if(page==4)//page 4 is for level 2
				{
					
				if((p>=xx+50&&p<=xx+130)&&(q>=130&&q<=200))
				{
				printf("score:%d\a",score);
				score=score+5;

				// getting in next level
					if(score>179)
					{
						page=15;
						
					}

				}
				else if((p>=aa+50&&p<=aa+130)&&(q>=330&&q<=400))
				{
				printf("score:%d\a",score);
				score=score+5;

				//for getting in next level
					if(score>179)
					{
						page=15;
					
					}
                
				}
				else if(mp>=25&&mp<=95&&mq>=0&&mq<=40)//that's the back option
				{
					page=13;
					
				}

				}






				else if(page==5)//page 5 is for level 3
				{
					if((p>=s&&p<=285)&&(q>=290&&q<=360))
				{
				printf("score:%d\a",score);
				score=score-5;
				

					

				}
				

					else if((p>=t&&p<=285)&&(q>=120&&q<=190))
				{
				printf("score:%d\a",score);
				score=score+5;

				//for getting in next level
					if(score>179)
					{
						page=16;
					
						
					}

				}

					else if((p>=532&&p<=m+80)&&(q>=290&&q<=360))
				{
				printf("score:%d\a",score);
				score=score+10;

				//for getting in next level
					if(score>179)
					{
						page=16;
						
						
					}

				}

						else if((p>=532&&p<=n+80)&&(q>=120&&q<=190))
				{
				printf("score:%d\a",score);
				score=score-5;

				

				}

						else if((p>=25&&p<=95)&&(q>=0&&q<=40))//that's the back option
						{
						page=14;
						
						}

				}





				else if(page==6)//page 6 is for level 4
				{
					
				
					

					if(timer>100&&timer<=200)
					{

		
			   if(p>=boyX&&p<=boyX+80&&q>=boyY&&q<=boyY+70)
			   {

				   	if((cowX>boyX+80||cowX<boyX-80)&&(cowY>boyY+80||cowY<boyY-80))
					{printf("score:%d\a",score);
					score=score-5;}

				
			   }

						

			   else if(p>=cowX&&p<=cowX+80&&q>=cowY&&q<=cowY+70)
			
			   {
			    printf("score:%d\a",score);
				score=score+5;

				if(score>99)
					{
						page=17;
						
						
						
					}
			   }


			   else if((p>=25&&p<=95)&&(q>=0&&q<=40))
						{
						page=15;
					
						}



					}


					



				else if(timer>0&&timer<=100)
				{

			      if(p>=head3X&&p<=head3X+80&&q>=head3Y&&q<=head3Y+70)
			
			   {

					 	 if((head4X>head3X+80||head4X<head3X-80)&&(head4Y>head3Y+80||head4Y<head3Y-80))
						{printf("score:%d\a",score);
						score=score-5;}

			
			   }

				
			    else if(p>=head4X&&p<=head4X+80&&q>=head4Y&&q<=head4Y+70)
			
			   {
			    printf("score:%d\a",score);
				score=score+5;
				
				//for getting in next level

				if(score>99)
					{
						page=17;
					
						
						
					}
			   }


				else if((p>=25&&p<=95)&&(q>=0&&q<=40))//that's the back option
						{
						page=15;
						
						}



				}

				


				

					


			

				}





				else if(page==7)//page 7 is for level 5
				{
					if((timer>=180&&timer<=200)||(timer>=120&&timer<=140))
					{
						if(((p>=220&&p<=300)&&(q>=160&&q<=230))||((p>=480&&p<=560)&&(q>=380&&q<=450)))
						{	printf("score:%d\a",score);
						    score=score+5;
						}


							else if((p>=350&&p<=430)&&(q>=270&&q<=340))
						{	printf("score:%d\a",score);
						    score=score-5;
						}



							else if((p>=25&&p<=95)&&(q>=0&&q<=40))
						{
						page=16;
						
						}


					}



					else if((timer>=160&&timer<=180)||(timer>=100&&timer<=120))
					{
						if(((p>=220&&p<=300)&&(q>=380&&q<=450))||((p>=480&&p<=560)&&(q>=160&&q<=230)))
						{	printf("score:%d\a",score);
						    score=score+5;
						}


							else if((p>=350&&p<=430)&&(q>=270&&q<=340))
						{	printf("score:%d\a",score);
						    score=score-5;
						}



							
							else if((p>=25&&p<=95)&&(q>=0&&q<=40))
						{
						page=16;
						
						}



					}


						else if(timer>=140&&timer<=160)
					{
						if(((p>=220&&p<=300)&&(q>=380&&q<=450))||((p>=480&&p<=560)&&(q>=160&&q<=230)))
						{	printf("score:%d\a",score);
						    score=score+5;
						}


							else if(((p>=480&&p<=560)&&(q>=380&&q<=450))||((p>=220&&p<=300)&&(q>=160&&q<=230)))
						{	printf("score:%d\a",score);
						    score=score-5;
						}


							
							else if((p>=25&&p<=95)&&(q>=0&&q<=40))
						{
						page=16;
						
						}




					}



							else if(timer>=80&&timer<=100)
					{
						if((p>=480&&p<=560)&&(q>=380&&q<=450))
						{	printf("score:%d\a",score);
						    score=score+5;
						}


							else if((p>=220&&p<=300)&&(q>=160&&q<=230))
						{	printf("score:%d\a",score);
						    score=score-5;
						}


							
							else if((p>=25&&p<=95)&&(q>=0&&q<=40))
						{
						page=16;
					
						}




					}



								else if(timer>=60&&timer<=80)
					{
						if((p>=350&&p<=430)&&(q>=380&&q<=450))
						{	printf("score:%d\a",score);
						    score=score+5;

							if(score>199)
								page=12;
						}


							else if((p>=350&&p<=430)&&(q>=160&&q<=230))
						{	printf("score:%d\a",score);
						    score=score-5;
						}


							
							else if((p>=25&&p<=95)&&(q>=0&&q<=40))
						{
						page=16;
					
						}




					}



								
								else if(timer>=40&&timer<=60)
					{
						if((p>=220&&p<=300)&&(q>=270&&q<=340))
						{	printf("score:%d\a",score);
						    score=score+5;

							if(score>199)
								page=12;
						}


							else if((p>=480&&p<=560)&&(q>=270&&q<=340))
						{	printf("score:%d\a",score);
						    score=score-5;
						}


							
							else if((p>=25&&p<=95)&&(q>=0&&q<=40))
						{
						page=16;
						
						}




					}


									
								else if(timer>=20&&timer<=40)
					{
						if((p>=350&&p<=430)&&(q>=270&&q<=340))
						{	printf("score:%d\a",score);
						    score=score+15;


							if(score>199)
								page=12;
						}


							else if(((p>=220&&p<=300)&&(q>=380&&q<=450))||((p>=480&&p<=560)&&(q>=380&&q<=450))||((p>=220&&p<=300)&&(q>=160&&q<=230))||((p>=480&&p<=560)&&(q>=160&&q<=230)))
						{	printf("score:%d\a",score);
						    score=score-5;
						}


							
							else if((p>=25&&p<=95)&&(q>=0&&q<=40))
						{
						page=16;
						
						}




					}



								else if(timer>=0&&timer<=20)
					{
						if((p>=480&&p<=560)&&(q>=160&&q<=230))
						{	printf("score:%d\a",score);
						    score=score+5;



							if(score>199)
								page=12;
						}


							else if((p>=220&&p<=300)&&(q>=380&&q<=450))
						{	printf("score:%d\a",score);
						    score=score-5;
						}

							
							else if((p>=25&&p<=95)&&(q>=0&&q<=40))
						{
						page=16;
						
						}




					}

							

						


				}




				else if(page==8)
				{
					if(p>=710&&p<=788&&q>=10&&q<=50)
					 page=2;

					else if(p>=355&&p<=460&&q>=310&&q<=338)
					{
					 page=13;
					 
					}


						else if(p>=355&&p<=464&&q>=250&&q<=278)
					{
							if(unlc_level2>1)
					 page=14;
					 
					}


							else if(p>=355&&p<=460&&q>=187&&q<=214)
					{
								if(unlc_level3>2)
					 page=15;
					 
					}


								else if(p>=355&&p<=460&&q>=120&&q<=150)
					{
									if(unlc_level4>3)
					 page=16;
					
					}


									else if(p>=355&&p<=460&&q>=58&&q<=88)
					{
										if(unlc_level5>4)
					 page=17;
					 
					}




					
				}


				else if(page==9)
				{
					if(p>=710&&p<=788&&q>=10&&q<=50)
					 page=2;

				}

					else if(page==10)
				{
                 if(p>=710&&p<=788&&q>=10&&q<=50)
					 page=2;

				}


				else if(page==11)
				{

                  if(p>=625&&p<=786&&q>=6&&q<=50)
				{
					page=1;
					
				}

				}

				else if(page==12)
				{
					 if(p>=625&&p<=786&&q>=6&&q<=50)
				{
					page=1;
					score=0;
					
				}

				}


					else if(page==13)
				{
					 if(p>=710&&p<=788&&q>=10&&q<=50)
				{
					page=3;
					score=0;
					timer=220;
					
				}

				}



					else if(page==14)
				{
					 if(p>=710&&p<=788&&q>=10&&q<=50)
				{
					page=4;
					score=0;
					timer=180;

					unlc_level2=2;
					
				}

				}



					else if(page==15)
				{
					 if(p>=710&&p<=788&&q>=10&&q<=50)
				{
					page=5;
					score=0;
					timer=200;

					unlc_level3=3;
					
				}

				}




						else if(page==16)
				{
					 if(p>=710&&p<=788&&q>=10&&q<=50)
				{
					page=6;
					score=0;
					timer=200;

					unlc_level4=4;
					
				}

				}



							else if(page==17)
				{
					 if(p>=710&&p<=788&&q>=10&&q<=50)
				{
					page=7;
					score=0;
					timer=200;

					unlc_level5=5;
					
				}

				}


			


		scoreUpdate();
		timeupdate();
		setCoordinate();
		setCoordinate1();
									
								
								
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	if(key == 'q')
	{
		//do something with 'q'
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0)	;
	}
	//place your codes for other keys here
}



int main()
{
	//place your own initialization codes here. 
	iSetTimer(124,move);
	da=10;
	iSetTimer(124,move1);
	db=10;
	
	
   
	iSetTimer(124,move3);
	dxx=10;
	iSetTimer(124,move4);
	daa=-10;

	iSetTimer(124,move5);
	ds=10;

	iSetTimer(124,move6);
	dt=15;

	iSetTimer(124,move7);
	dm=-15;

    iSetTimer(124,move8);
	dn=-10;

	iSetTimer(124,timeupdate);
	iInitialize(800, 600, "Shooting Game");

	iSetTimer(124,setCoordinate);

	iSetTimer(124,setCoordinate1);
	
	return 0;
}


void scoreUpdate(){

	sprintf(scoreStr ,"%d", score);
}


void welcome()
{

iShowBMP(0,0,"Title_Page.bmp");

}


void menu()
{
	//place your drawing codes here	

iShowBMP(0,0,"Menu_Page.bmp");
}



void level1()
{
	iShowBMP(0,0,"background_1.bmp");

	iShowBMP(110,a,"cow.bmp");
	iShowBMP(510,b,"head4.bmp");
	iSetColor(255,0,0);
	iFilledRectangle(x,y,120,100);
	iFilledRectangle(x+400,y,120,100);
	iSetColor(0,0,0);
	iFilledCircle(p,q,5);
	
	iSetColor(255,0,0);
	iText(650, 500, "SCORE :", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(750, 500, scoreStr,GLUT_BITMAP_TIMES_ROMAN_24 );
	iText(50, 500, "TIME : ",GLUT_BITMAP_TIMES_ROMAN_24 );
	iText(150, 500, timeStr,GLUT_BITMAP_TIMES_ROMAN_24 );
	iSetColor(255, 0, 0);
	iText(25, 25, "BACK", GLUT_BITMAP_TIMES_ROMAN_24);

	iText(400, 500, "Level 1",GLUT_BITMAP_TIMES_ROMAN_24 );
}




void level2()
{
	iShowBMP(0,0,"Road.bmp");
	iSetColor(255,255,0);
	iFilledCircle(xx+45,50,15);
	iFilledCircle(xx+125,50,15);
	iSetColor(176,23,31);
	iFilledRectangle(xx,50,180,80);
	iShowBMP(xx+50,130,"head4.bmp");
	iFilledRectangle(xx+30,130,10,90);
	iFilledRectangle(xx+30,210,120,10);
	iFilledRectangle(xx+140,130,10,90);

    
	iSetColor(255,255,0);
	iFilledCircle(aa+45,250,15);
	iFilledCircle(aa+125,250,15);
    iSetColor(176,23,31);
	iFilledRectangle(aa,250,180,80);
	iFilledRectangle(aa+30,250+80,10,90);
	iFilledRectangle(aa+30,250+80+80,120,10);
	iFilledRectangle(aa+140,250+80,10,90);
	iShowBMP(aa+50,330,"man.bmp");
	iSetColor(0,0,0);
	iFilledCircle(p,q,5);
	iSetColor(255,0,0);
	iText(650, 500, "SCORE :",GLUT_BITMAP_TIMES_ROMAN_24 );
	iText(750, 500, scoreStr,GLUT_BITMAP_TIMES_ROMAN_24 );
	iText(50, 500, "TIME : ",GLUT_BITMAP_TIMES_ROMAN_24 );
	iText(150, 500, timeStr,GLUT_BITMAP_TIMES_ROMAN_24 );
	iSetColor(0, 255, 0);
	iText(25, 0, "BACK", GLUT_BITMAP_TIMES_ROMAN_24);

	iText(400, 500, "Level 2",GLUT_BITMAP_TIMES_ROMAN_24 );

}

void level3()
{

	iShowBMP(0,0,"Game_Page_Level_3.bmp");
	
	
	iSetColor(109,110,113);

    iShowBMP(s,292,"babyface_1.bmp");
	
    iShowBMP(t,122,"cow.bmp");
	iShowBMP(m,292,"head4.bmp");
	iShowBMP(n,122,"boy.bmp");
	iFilledRectangle(285,292,247,72);
	iFilledRectangle(285,122,247,72);
	iSetColor(255,0,0);
	iText(650, 575, "SCORE :",GLUT_BITMAP_TIMES_ROMAN_24 );
	iText(750, 575, scoreStr ,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(50, 575, "TIME : " ,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(150, 575, timeStr,GLUT_BITMAP_TIMES_ROMAN_24 );
	iSetColor(255,0,0);
	iText(25, 0, "BACK", GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0,0,0);
	iFilledCircle(p,q,5);

	iText(400, 500, "Level 3",GLUT_BITMAP_TIMES_ROMAN_24 );
}


void level4()
{
	iShowBMP(0,0,"empty.bmp");
	iSetColor(0, 0, 0);


	if(timer>100&&timer<=200)
	{
	iShowBMP(cowX,cowY,"cow.bmp");

	if((cowX>boyX+80||cowX<boyX-80)&&(cowY>boyY+80||cowY<boyY-80))
	iShowBMP(boyX,boyY,"boy.bmp");

	void setCoordinate();

	}



	
else if(timer>0&&timer<=100)
	{
		boyX=1000;
		cowX=1000;
		
		
	    iShowBMP(head4X,head4Y,"head4.bmp");

		if((head4X>head3X+80||head4X<head3X-80)&&(head4Y>head3Y+80||head4Y<head3Y-80))

		iShowBMP(head3X,head3Y,"babyface_1.bmp");
		void setCoordinate1();

	}



		
	iSetColor(255,0,0);

	iText(650, 575, "SCORE :",GLUT_BITMAP_TIMES_ROMAN_24 );
	iText(750, 575, scoreStr ,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(50, 575, "TIME : " ,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(150, 575, timeStr,GLUT_BITMAP_TIMES_ROMAN_24 );

	iSetColor(0,0,0);
	iText(25, 0, "BACK", GLUT_BITMAP_TIMES_ROMAN_24);

	iText(400, 500, "Level 4",GLUT_BITMAP_TIMES_ROMAN_24 );

	
	iFilledCircle(p,q,5);



}




void level5()
{
	iShowBMP(0,0,"empty.bmp");

	iSetColor(255,0,0);
	iFilledRectangle(200,150,10,340);
	iFilledRectangle(210,150,380,10);
    iFilledRectangle(590,150,10,340);
	iFilledRectangle(210,480,380,10);
	iFilledRectangle(330,160,10,320);
	iFilledRectangle(460,160,10,320);
	iFilledRectangle(210,260,380,10);
	iFilledRectangle(210,370,380,10);


	if((timer>=180&&timer<=200)||(timer>=120&&timer<=140))
	{
		iShowBMP(220,160,"cow.bmp");
		iShowBMP(350,270,"boy.bmp");
		iShowBMP(480,380,"head4.bmp");
	}


	else if((timer>=160&&timer<=180)||(timer>=100&&timer<=120))
	{
		iShowBMP(220,380,"cow.bmp");
		iShowBMP(350,270,"boy.bmp");
		iShowBMP(480,160,"head4.bmp");
		
	}



	else if(timer>=140&&timer<=160)
	{
		iShowBMP(220,380,"cow.bmp");
		iShowBMP(480,380,"boy.bmp");
		iShowBMP(220,160,"babyface_1.bmp");
		iShowBMP(480,160,"head4.bmp");
		
	}



		else if(timer>=80&&timer<=100)
	{
		iShowBMP(480,380,"cow.bmp");
		iShowBMP(220,160,"boy.bmp");
	
		
	}


			else if(timer>=60&&timer<=80)
	{
		iShowBMP(350,380,"cow.bmp");
		iShowBMP(350,160,"boy.bmp");
	
		
	}


				else if(timer>=40&&timer<=60)
	{
		iShowBMP(220,270,"cow.bmp");
		iShowBMP(480,270,"boy.bmp");
	
		
	}


					else if(timer>=20&&timer<=40)
	{
		iShowBMP(220,380,"boy.bmp");
		iShowBMP(480,380,"babyface_1.bmp");
		iShowBMP(220,160,"babyface_2.bmp");
		iShowBMP(480,160,"babyface_3.bmp");
		iShowBMP(350,270,"Monster.bmp");
	
		
	}

						else if(timer>=00&&timer<=20)
	{
		
		iShowBMP(220,380,"boy.bmp");
		iShowBMP(480,160,"cow.bmp");
	
		
	}


	iText(650, 575, "SCORE :",GLUT_BITMAP_TIMES_ROMAN_24 );
	iText(750, 575, scoreStr ,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(50, 575, "TIME : " ,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(150, 575, timeStr,GLUT_BITMAP_TIMES_ROMAN_24 );


	iSetColor(0,0,0);
	iText(25, 0, "BACK", GLUT_BITMAP_TIMES_ROMAN_24);

	iSetColor(0,0,0);
	iFilledCircle(p,q,5);

	iText(400, 500, "Level 5",GLUT_BITMAP_TIMES_ROMAN_24 );


}

void timeupdate()
{
    sprintf(timeStr ,"%d", timer);
	if((page==3||page==4||page==5||page==6||page==7)&&timer==0)/*if in level-1,2,3,4,5 the time ends before completing the target score,
															   then it go to the game over page*/
		
		page=11;
	timer=timer--;//time will decrease whenever this function is called
}

void gameover()
{
  iShowBMP(0,0,"Game_Over_Page.bmp");
  
}

void credit()
{
	
iShowBMP(0,0,"Credit_Page.bmp");
}


void instruction()
{
	

iShowBMP(0,0,"Instruction_Page.bmp");
}

void levels()
{
	
iShowBMP(0,0,"levels.bmp");

if(unlc_level2!=2)
{

	iSetColor(0,255,0);
	iFilledCircle(325,324,10);
	iSetColor(255,0,0);
	iFilledCircle(325,264,10);
	iFilledCircle(325,200,10);
	iFilledCircle(325,135,10);
	iFilledCircle(325,73,10);

}


else if(unlc_level2==2&&unlc_level3!=3)
{

	iSetColor(0,255,0);
	iFilledCircle(325,324,10);
	
	iFilledCircle(325,264,10);

	iSetColor(255,0,0);
	iFilledCircle(325,200,10);
	iFilledCircle(325,135,10);
	iFilledCircle(325,73,10);


}


else if(unlc_level3==3&&unlc_level4!=4)
{

	iSetColor(0,255,0);
	iFilledCircle(325,324,10);
	
	iFilledCircle(325,264,10);

	
	iFilledCircle(325,200,10);
	iSetColor(255,0,0);
	iFilledCircle(325,135,10);
	iFilledCircle(325,73,10);


}


else if(unlc_level4==4&&unlc_level5!=5)
{

	iSetColor(0,255,0);
	iFilledCircle(325,324,10);
	
	iFilledCircle(325,264,10);

	
	iFilledCircle(325,200,10);
	
	iFilledCircle(325,135,10);
	iSetColor(255,0,0);
	iFilledCircle(325,73,10);


}


else if(unlc_level5==5)
{

	iSetColor(0,255,0);
	iFilledCircle(325,324,10);
	
	iFilledCircle(325,264,10);

	
	iFilledCircle(325,200,10);
	
	iFilledCircle(325,135,10);

	iFilledCircle(325,73,10);


}






}

void win()
{
	//place your drawing codes here	
iShowBMP(0,0,"You_Win_Page.bmp");
}

void inst_level1()
{
	//place your drawing codes here	

iShowBMP(0,0,"Level_1.bmp");
}

void inst_level2()
{
	//place your drawing codes here
iShowBMP(0,0,"Level_2.bmp");
}


void inst_level3()
{
	//place your drawing codes here	
iShowBMP(0,0,"Level_3.bmp");
}

void inst_level4()
{
	//place your drawing codes here	

iShowBMP(0,0,"Level_4.bmp");
}


void inst_level5()
{
	//place your drawing codes here	

iShowBMP(0,0,"Level_5.bmp");
}

void setCoordinate()
{

	//random function is used to change the co-ordinates of the cartoons
	boyX = rand()%500 +100;
	boyY = rand()%300 +100;

	cowX = rand()%500 +100;
	cowY = rand()%400 +100;


}


void setCoordinate1()
{

		//random function is used to change the co-ordinates of the cartoons
	head3X = rand()%500+100;
	head3Y = rand()%300+100;

	head4X = rand()% 400+100;
	head4Y = rand()%300+100;


}

