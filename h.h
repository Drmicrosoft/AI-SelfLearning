// reading a text file
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;

////////////////////////////////////



string c [] = {"when.txt","how.txt","why.txt","who.txt","what.txt","am.txt","is.txt","are.txt","does.txt","did.txt","do.txt","would.txt","will.txt","have.txt","has.txt","had.txt","can.txt","could.txt","shall.txt","should.txt","normal.txt","answer.txt"};



int a =0;
int bb =0;

int i =1 , j=1;
int dif =0 ;

int help =0;



  
  
int mohsen (int x , int y ,string z , int q);
int mat [100] [100] [100] [100] ;

string question [100000];
string answer [10000000];

  
  
  
  /////////////////////////////////

void imp (void);


string func1 (string omar);

void matrix (int x1, string x2 , int x3);

int func3 (string line,string hack);


void Learning (string path );

int clas (string first);


void writing (string x1 , string x2);

string eraseq (string x , string y);

int hacking ();
int reference (int n);
void checkm ();

void ina ();




// Input .. string // output first word in the string !!

// to the another words we will put 'for' or make a public variable to put in it the all of the word ..



void ina ()
{
	int a , b , c , d ;
	for (a=0;a<=15;a++)
	for (b=0;b<=15;b++)
	for (c=0;c<=1;c++)
	for (d=0;d<=15;d++)
	{
		mat[a][b][c][d]=0;
	}
	
	for (a=0;a<=100;a++)
	{
		question[a]="0";
		answer[a]="0";
	}
	
}

void imp (void)
{
	int i=0;
	for(i=0; i<=21 ; i++)
	{
	std::ofstream ofs;
  ofs.open (c[i].c_str(), std::ofstream::out | std::ofstream::app);

  ofs << "\n";

  ofs.close();

  //return 0;
}
}



string func1 (string omar)
{
	//cout<<"start";
	
	//int i =0;
	//char *x;
	
	  char * x = new char [omar.length()+1];
	
	strcpy (x, omar.c_str());
	//x=omar.c_str();
	// cout<<"coping done \t ";
	
	string hacker;
	
	hacker = strtok(x," ");
	//cout<<"string token\t";
	//cout<<hacker<<"\t"<<x;
	
	return hacker;
		
	
	
}
int u =0;





// how to insert data to files 



/*
* wh 1
* what 1.1 
* who 1.2
* how 1.3
* why 1.4 
* when 1.5
* 
* do 2
* do 2.1
* does 2.2
* did 2.3
* 
* have 3
* have 3.1
* has 3.2
* had 3.3
* 
* be 4
* am 4.1
* is 4.2
* are 4.3
* 
* will 5 
* will 5.1
* wont 5.2
* would 5.3
* 
* can 6
* can 6.1
* could 6.2
* 
* should 7 
* shall 7.1
* should 7.2
* 
* what 1.1 
* who 1.2
* how 1.3
* why 1.4 
* when 1.5
* 
* 
*/


int xz=0;

int mohsen (int x , int y ,string z , int q)
{int b =0;

dif=x;
	if(q==0)
	{
		//cout << "\nstart for q = zero \n";

	for (a=0;a<=10; a++)
	{//fe 7alat el so2al
	//cout << a <<"\t"; 
		if(func3(question[a],z))
		{xz=a+1;
			//cout<<"\nfind question in number " << a+1 << "\n";
			
			return a+1;		
		}
		else
		{
			
			
		//	cout<<question[a] <<"\ndidnt find questions \n";
		if(a==10)
		{  return 0 ;}
	}
	}
}
	else if (q==1&&a!=10)
	{
		
		
		
//cout << "\nstart for q = 1 \n";

for(u=0;u<=10;u++)
{
	if(mat[x][y][0][u]==a)
	{
	//	cout << "the hell question is number "<< u ;
		break;
	}
}


	//	cout << "%%%%%%%%%%%%%%%%%%%%%% a = " << a << "\n" ;
	for (b=1;b<=10; b++)
	{//fe 7alat el so2al 
//	cout<<b << "checking the answer \n " <<answer[mat[x][y][b][u]] << "\n" ;
		if(mat[x][y][b][u]==0)
		{
			
	//		cout<<"for "<<x <<" "<<y<<" "<<b<<" "<<u<<" " <<"done in "<<b;
		//	cout<<"$$$$$$$$$$$$$$$$ done in "<<b <<"\t" << a << "\t" << z << "\t";
			return b;		
		}
		else
		{
		//	cout<< " wrong $%^&# \t";
		}
		
	}
}
else
return 0;
}

int qa=0;

int zz=0;
int y0=0,y1=0,y2=0,y3=0,y4=0,y5=0,y6=0,y7=0,y8=0,y9=0,a0=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0;

void matrix (int x1, string x2 , int x3)
{
	//cout<<"hdsaadsasdads";
	if(x1==1)
	{
	
		
		if (x3==0)
		{
			if(mohsen(x1,0,x2,0)==0)
			{
				writing ("what.txt" ,x2 );
			mat[1][1][0][y0] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(1,1,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	cout<<"("<<qa<<","<<u<<")"<<"\n";

		mat[1][1][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
					cout<<"("<<1<<","<<y0<<")"<<"\n";

			mat[1][1][1][y0] = j;
			
			answer[j]=x2;	y0++; dif=0;
		}
			}
		}
	else if(x1==2)
	{
	
		
		if (x3==0)
		{
			
			if(mohsen(x1,1,x2,0)==0)
			{
				writing ("how.txt" ,x2 );
			mat[1][2][0][y1] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(1,2,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	
				mat[1][2][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
					cout<<"("<<1<<","<<y1<<")"<<"\n";

				mat[1][2][1][y1] = j;
			
			answer[j]=x2;	y1++; dif=0;
		}
			}
			}
	
	else if(x1==3)
	{
		
		if (x3==0)
		{
			if(mohsen(x1,0,x2,0)==0)
			{
				writing ("who.txt" ,x2 );
			mat[1][3][0][y2] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(1,3,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	
				mat[1][3][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
				mat[1][3][1][y2] = j;
			
			answer[j]=x2;	y2++; dif=0;
		}
			}
		}
	
	else if(x1==4)
	{
				if (x3==0)
		{
			if(mohsen(x1,0,x2,0)==0)
			{
				writing ("why.txt" ,x2 );
			mat[1][4][0][y3] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(1,4,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	
				mat[1][4][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
				mat[1][4][1][y3] = j;
			
			answer[j]=x2;	y3++; dif=0;
		}
			}

	}
	
	else if(x1==5)
	{
				if (x3==0)
		{
			if(mohsen(x1,0,x2,0)==0)
			{
				writing ("when.txt" ,x2 );
			mat[1][5][0][y4] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(1,5,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	
				mat[1][5][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
				mat[1][5][1][y4] = j;
			
			answer[j]=x2;	y4++; dif=0;
		}
			}

	}
	
	else if(x1==6)
	{
				if (x3==0)
		{
			if(mohsen(x1,0,x2,0)==0)
			{
				writing ("do.txt" ,x2 );
			mat[2][1][0][y5] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(2,1,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	
				mat[2][1][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
				mat[2][1][1][y5] = j;
			
			answer[j]=x2;	y5++; dif=0;
		}
			}

	}
	
	else if(x1==7)
	{
				if (x3==0)
		{
			if(mohsen(x1,0,x2,0)==0)
			{
				writing ("does.txt" ,x2 );
			mat[2][2][0][y6] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(2,2,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	
				mat[2][2][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
				mat[2][2][1][y6] = j;
			
			answer[j]=x2;	y6++; dif=0;
		}
			}

	}
	
	
	else if(x1==8)
	{
	
				if (x3==0)
		{
			if(mohsen(x1,0,x2,0)==0)
			{
				writing ("did.txt" ,x2 );
			mat[2][3][0][y7] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(2,3,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	
				mat[2][3][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
				mat[2][3][1][y7] = j;
			
			answer[j]=x2;	y7++; dif=0;
		}
			}

	}
	
	
	else if(x1==9)
	{
	
				if (x3==0)
		{
			if(mohsen(x1,0,x2,0)==0)
			{
				writing ("have.txt" ,x2 );
			mat[3][1][0][y8] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(3,1,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	
				mat[3][1][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
				mat[3][1][1][y8] = j;
			
			answer[j]=x2;	y8++; dif=0;
		}
			}

	}
	
	else if(x1==10)
	{
		
				if (x3==0)
		{
			if(mohsen(x1,0,x2,0)==0)
			{
				writing ("has.txt" ,x2 );
			mat[3][2][0][y9] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(3,2,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	
				mat[3][2][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
				mat[3][2][1][y9] = j;
			
			answer[j]=x2;	y9++; dif=0;
		}
			}
	}
	
	else if(x1==11)
	{
	
				if (x3==0)
		{
			if(mohsen(x1,0,x2,0)==0)
			{
				writing ("had.txt" ,x2 );
			mat[3][3][0][a0] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(3,3,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	
				mat[3][3][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
				mat[3][3][1][a0] = j;
			
			answer[j]=x2;	a0++; dif=0;
		}
			}
	}
	
	else if(x1==12)
	
	{
	
				if (x3==0)
		{
			if(mohsen(x1,0,x2,0)==0)
			{
				writing ("am.txt" ,x2 );
			mat[4][1][0][a1] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(4,1,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	
				mat[4][1][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
				mat[4][1][1][a1] = j;
			
			answer[j]=x2;	a1++; dif=0;
		}
			}
	}
	
	else if(x1==13)
	{
	
				if (x3==0)
		{
			if(mohsen(x1,0,x2,0)==0)
			{
				writing ("is.txt" ,x2 );
			mat[4][2][0][a3] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(4,2,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	
				mat[4][2][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
				mat[4][2][1][a3] = j;
			
			answer[j]=x2;	a3++; dif=0;
		}
			}
	}
	
	else if(x1==14)
	{
	
				if (x3==0)
		{
			if(mohsen(x1,0,x2,0)==0)
			{
				writing ("are.txt" ,x2 );
			mat[4][3][0][a4] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(4,3,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	
				mat[4][3][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
				mat[4][3][1][a4] = j;
			
			answer[j]=x2;	a4++; dif=0;
		}
			}
	}
	
	else if(x1==15)
	{
	
				if (x3==0)
		{
			if(mohsen(x1,0,x2,0)==0)
			{
				writing ("will.txt" ,x2 );
			mat[5][1][0][a5] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(5,1,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	
				mat[5][1][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
				mat[5][1][1][a5] = j;
			
			answer[j]=x2;	a5++; dif=0;
		}
			}
	}
	else if(x1==16)
	{
	
	
				if (x3==0)
		{
			if(mohsen(x1,0,x2,0)==0)
			{
				writing ("would.txt" ,x2 );
			mat[5][2][0][a6] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(5,2,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	
				mat[5][2][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
				mat[5][2][1][a6] = j;
			
			answer[j]=x2;	a6++; dif=0;
		}
			}
	}
	else if(x1==17)
	{
	
				if (x3==0)
		{
			if(mohsen(x1,0,x2,0)==0)
			{
				writing ("can.txt" ,x2 );
			mat[6][1][0][a7] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(6,1,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	
				mat[6][1][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
				mat[6][1][1][a7] = j;
			
			answer[j]=x2;	a7++; dif=0;
		}
			}
	}
	else if(x1==18)
	{
	
				if (x3==0)
		{
			if(mohsen(x1,0,x2,0)==0)
			{
				writing ("could.txt" ,x2 );
			mat[6][2][0][a8] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(6,2,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	
				mat[6][2][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
				mat[6][2][1][a8] = j;
			
			answer[j]=x2;	a8++; dif=0;
		}
			}
		
	}
	else if(x1==19)
	{
	
				if (x3==0)
		{
			if(mohsen(x1,0,x2,0)==0)
			{
				writing ("shall.txt" ,x2 );
			mat[7][1][0][a9] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(7,1,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	
				mat[7][1][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
				mat[7][1][1][a9] = j;
			
			answer[j]=x2;	a9++; dif=0;
		}
			}
	
	}
	else if(x1==20)
	{
	
				if (x3==0)
		{
			if(mohsen(x1,0,x2,0)==0)
			{
				writing ("should.txt" ,x2 );
			mat[7][2][0][a10] = i;
			question[i]=x2;	}
		}
		else 
		{
				qa=mohsen(7,2,x2,1);
				writing ("answer.txt" ,x2 );
			if (qa!=0)
			{	
				mat[7][2][qa][u] = j;answer[j]=x2;	dif=0;}
			else
			{
				mat[7][2][1][a10] = j;
			
			answer[j]=x2;	a10++; dif=0;
		}
			}
	
	}
	else
	{
		writing ("normal.txt" ,x2 );
	
		if (x3==0)
		{
			cout<< "error";
		}
		else 
		{
			mat[8][0][0] [zz]= j;
			answer[j]=x2;zz++;	dif=0;}
		
	}
	
	
	
	

}



void writing (string x1 , string x2)
{
	fstream how ;
	how.open(x1.c_str());
how.seekg(0,ios::end);

	how <<"\n" << x2;
	
	
	
	
	how.seekg(0,ios::beg);
	//how << x2;
	
	
	how.close();
	
}




// to make comparasion between two strings 


int func3 (string line,string hack)
{
	
  
	int x;
		x = strcmp(line.c_str(),hack.c_str());
		//cout << "\t" + x;
		if(!x)
		{
			//cout<< "\t func3 done \t";
		return 1;	
		}
		else
		{ //cout<< "\t fail \t";
      //cout << line << '\n';
      return 0;
		}
		
		
		


	
	
	
	
	
	
	
}



string eraseq (string x , string y)
{
	
	unsigned pos4;
	int a = x.length();
			 int cxc=1;
			 while (cxc)
			 {
				// cout<<"round \n";
				 pos4 =y.find(x);
			 if(pos4<=y.length())
			 {
				y.erase (y.begin()+pos4+a-1);            
			 }
			 else
			 {cxc=0;return y;}
		 }
	
	
}




void Learning (string path )
{
	
	
	//cout<< "omar\n";
	fstream l1;
	l1.open(path.c_str());
	
	//int x=1 ;
	unsigned pos,pos2,pos3, x=1 ;
	string bc ;
	string out ;
	int nn=0;
	
	while (  getline (l1,bc)  )
		{
			if(bc!="")
			{
			 
			cout <<nn;
			
			
			nn++;
			//cout << bc ; 
			cout<< "\n";
			//cout <<nn;
			
			 //getline (l1,bc);
			 pos =bc.find("\"");
			 pos2 =bc.find(".\"");
			 pos3 =bc.find("?\"");
			 
			 cout<< "\n" << pos2 << " " << pos3 <<"\t";
			 if(pos2<pos3)
			{ out = bc.substr(pos+1,pos2-pos-x);
			 cout<< "2";
			 }
			 else
			 {out = bc.substr(pos+1,pos3-pos-x);
			cout<< "3";
			 }

			 //cout <<"***" << out;
			
		cout << "\t"  ;
			
			string first = func1(out);
			 
			 first = eraseq(".",first);
			 first = eraseq(",",first);
			 cout<<first<<"\n";
			
			 // المفروض دلؤقتي الكلمه الي بترجعلي الي هيا اول كلمة .. المفروض يقؤم يشيل منها . , عشان نعرف نشتغل صح و يسجلها عنده ..
			cout<<first;
			
			int cc = clas ( first);
			cout << "\n the number is " << cc ;
			
			int vv = 0;
			
			/*

	func3("Who are you",first);
				
	func3("When are you",first);
				
	func3("What is your name",first);
				*/
			
			cout << "\n"  ;
			
			if(cc==0&&dif!=0)
			{
				
				matrix(dif,out,1);
				j++;
				cout<< "\n"<<"answer number " << j << "\n" ;
				
			}
			else if(cc==0&&dif==0)
			{
				matrix(100,out,1);
				j++;
				cout<<"\n"<< "answer number " << j << "\n" ;
				
			}
			
			else if (cc!=0)
			{
				
				//vv = mohsen(cc,0,first,0);
				
				//if(vv==0)
				{
				matrix(cc,out,0);
				i++; 
				cout<< "question number " << i << "\n" ;
			} 
			}
			
			
		}
		else
		cout << "hacker\n" ;}
	
	
	
	l1.close();
	
	
	
	
	
	
	
}





/*
* wh 1
* what 1.1 
* who 1.2
* how 1.3
* why 1.4 
* when 1.5
* 
* do 2
* do 2.1
* does 2.2
* did 2.3
* 
* have 3
* have 3.1
* has 3.2
* had 3.3
* 
* be 4
* am 4.1
* is 4.2
* are 4.3
* 
* will 5 
* will 5.1
* would 5.2
*  
* can 6
* can 6.1
* could 6.2
* 
* should 7 
* shall 7.1
* should 7.2
* 
* 
* 
*/


int clas (string first)
{
	if(func3(first,"What"))
	{return 1;}
	else	if(func3(first,"How"))
	{return 2;}
	else	if(func3(first,"Who"))
	{return 3;}
	else	if(func3(first,"Why"))
		{return 4;}
	else	if(func3(first,"When"))
		{return 5;}
	else	if(func3(first,"Do"))
		{return 6;}
	else	if(func3(first,"Does"))
		{return 7;}
	else	if(func3(first,"Did"))
		{return 8;}
	else	if(func3(first,"Have"))
		{return 9;}
	else	if(func3(first,"Has"))
		{return 10;}
	else	if(func3(first,"Had"))
		{return 11;}
	else	if(func3(first,"Am"))
		{return 12;}
	else	if(func3(first,"Is"))
		{return 13;}
	else	if(func3(first,"Are"))
		{return 14;}
	else	if(func3(first,"Will"))
		{return 15;}
	else	if(func3(first,"Would"))
		{return 16;}
	else	if(func3(first,"Can"))
		{return 17;}
	else	if(func3(first,"Could"))
		{return 18;}
	else	if(func3(first,"Shall"))
		{return 19;}
	else	if(func3(first,"should"))
		{return 20;}
	else
	return 0;
	
} 




// most important function ^_^ 

int hacking ()
{
	
	int z =0;

	string omar ; 
	cout << "Hi .. \n"; 
  getline (cin,omar);
  	//cout << "\n\nfunc1\n"<<omar;
				 omar = eraseq("\"",omar);
//cout <<omar<<"\n";
	string first = func1(omar);
//cout << "\nclas\n";
	int cc = clas ( first);
//cout << "\nreference\n";
	
	cc = reference (cc);
	
	//cout<< "done funcions ";
		for(z=0;z<=100;z++)	
	{//cout << "\nfunc3\n";
		//	cout <<question[z]<<"\t";
		if(func3(omar,question[z]))
		{
			//cout <<question[z]<<"\n";
			int o=0;
			for(o=0;o<=100;o++)
			{
			if(mat[help][cc][0][o]==z)
			{
				//			cout<<"for "<<help <<cc<<"1"<<o <<"done ";

				cout << answer[mat[help][cc][1][o]]<<"1\n";
							cout<<"for "<<help<<cc<<"2"<<o <<"done" <<answer[mat[help][cc][2][o]]<<"2\n";
							cout<<"for "<<help<<cc<<"3"<<o <<"done" <<answer[mat[help][cc][3][o]]<<"2\n";
							cout<<"for "<<help<<cc<<"4"<<o <<"done" <<answer[mat[help][cc][4][o]]<<"2\n";return a;
			}
			else cout<<"\n"<<"down";
		}
		}
		else 
		cout<<"error\n";
	}
	
	
	
	
}


int reference (int n)
{
	switch (n)
		{
			case 1 :
			{help =1 ;return 1;}
			case 2 :
			{help =1 ;return 2;}
			case 3 :
			{help =1 ;return 3;}
			case 4 :
			{help =1 ;return 4;}
			case 5 :
			{help =1 ;return 5;}
			case 6 :
			{help =2 ;return 1;}
			case 7 :
			{help =2 ;return 2;}
			case 8 :
			{help =2 ;return 3;}
			case 9 :
			{help =3 ;return 1;}
			case 10 :
			{help =3 ;return 2;}
			case 11 :
			{help =3 ;return 3;}
			case 12 :
			{help =4 ;return 1;}
			case 13 :
			{help =4 ;return 2;}
			case 14 :
			{help =4 ;return 3;}
			case 15 :
			{help =5 ;return 1;}
			case 16 :
			{help =5 ;return 2;}
			case 17 :
			{help =6 ;return 1;}
			case 18 :
			{help =6 ;return 2;}
			case 19 :
			{help =7 ;return 1;}
			case 20 :
			{help =7 ; return 2;}
		}
}



void checkm ()
{
	int z=0;
	for(z=1;z<=5;z++)	
	{//cout << "\nfunc3\n";
	//		cout <<question[z]<<"\n";
			int o=0;
			for(o=0;o<=10;o++)
			{
				cout << question[mat[1][z][0][o]]<<"\n"<<cout << answer[mat[1][z][1][o]]<<"\n";
			}
		}
	}


