// reading a text file
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
using namespace std;

////////////////////////////////////



string c [] = {"when.txt","how.txt","why.txt","who.txt","what.txt","am.txt","is.txt","are.txt","does.txt","did.txt","do.txt","would.txt","will.txt","have.txt","has.txt","had.txt","can.txt","could.txt","shall.txt","should.txt","normal.txt","answer.txt"};





int i =1 , j=1;
int dif =0 ;

int help =0;



  
  

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

int mohsen (int x , int y , string z , int q);




int main () {
	ina();
	imp();
	Learning("omar.txt");
	
	
	
int tr =0 ;

	cout << "the starting \n";
for(tr=0 ; tr <=10; tr++)
{
	cout<<"omar"<<question[tr]<<"omar" <<"\n"<<answer[tr] << "\n";
}	
	
		cout << "the starting \n";

	checkm();
	int bv=0;
	
	cout << "the starting \n";
	for(bv=0;bv<=10;bv++)
	{
		cout << mat[1][1][bv][1];
		
		cout << mat[1][3][bv][1];
		
	}
	
	for(bv=0;bv<=10;bv++)
	{
		cout << answer[mat[1][1][bv][1]];
		
		cout << answer[mat[1][3][bv][1]];
		
	}
	
	
	hacking();hacking();hacking();hacking();hacking();

	
	
  string line,hack;
  //char xx[20],y[20];
  cout<<"input your word ";
  cin >> hack;
  cout<<hack;
  fstream myfile ("example.txt");
    myfile << "omar\n";
    myfile << "mohsen\n";
    myfile << "shakira\n";
  string mohsen;
  mohsen = func1(hack);
//func2();														***********************
  cout<< "\n this is mohsen : " << mohsen << "\n";
  //myfile.seekg(0,ios::beg);
  
    //while ( getline (myfile,line) )
    //{
		//cout << line << '\n';
    //}
    
    myfile.seekg(0,ios::beg);

  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
		cout<<line;
		int x;
		x = strcmp(line.c_str(),hack.c_str());
		cout << "\t" + x;
		if(!x)
		{
			cout<< "done";
			break;
		}
		else cout<< "fail";
      cout << line << '\n';
    }
    myfile.close();
  }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              

  else cout << "Unable to open file"; 
  
  
  
  
  
  
  //func1(hack);

  return 0;
}


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
	int a =0 ;


int zz=0;
int y0=0,y1=0,y2=0,y3=0,y4=0,y5=0,y6=0,y7=0,y8=0,y9=0,a0=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0;

void matrix (int x1, string x2 , int x3)
{
	cout<<"hdsaadsasdads";
	if(x1==1)
	{
	
		
		if (x3==0)
		{
			if(mohsen(1,1,x2,0)==0)
			{y0++;
				writing ("what.txt" ,x2 );
			mat[1][1][0][y0] = i;
			question[i]=x2;	dif=x1; }
			}
		else 
		{
			
			
				writing ("answer.txt" ,x2 );
			mat[1][1][mohsen(1,1,x2,1)][1] = j;
			
			answer[j]=x2;	 }
		}
	else if(x1==2)
	{
		if(mohsen(1,2,x2,0)==0)
			{
		if (x3==0)
		{y1++;
		writing ("who.txt" ,x2 );
		
			mat[1][2][0][y1] = i;
			question[i]=x2;	dif=x1;}
		}
		else 
		{				writing ("answer.txt" ,x2 );

			mat[1][2][1][y1] = j;
			answer[j]=x2;	}
			}
	
	else if(x1==3)
	{
		if(mohsen(1,3,x2,0)==0)
			{
		if (x3==0)
		{writing ("how.txt" ,x2 );
					//	cout << question[mat[1][z][0][o]]<<"\n"<<cout << answer[mat[1][z][1][o]]<<"\n";



y3++;
			mat[1][3][0][y3] = i;
			question[i]=x2; cout<<"hacking";	dif=x1;}
		}
		else 
		{				writing ("answer.txt" ,x2 );

			mat[1][3][1] [y3]= j;
			answer[j]=x2;	}
		}
	
	else if(x1==4)
	{
		if(mohsen(1,4,x2,0)==0)
			{
		if (x3==0)
		{writing ("why.txt" ,x2 );
		y4++;
			mat[1][4][0] [y4]= i;
			question[i]=x2;	dif=x1;}}
		else 
		{writing ("answer.txt" ,x2 );
			mat[1][4][1] [y4]= j;
			answer[j]=x2;}
		
	
}
	else if(x1==5)
	{
		if(mohsen(1,5,x2,0)==0)
			{
		if (x3==0)
		{writing ("when.txt" ,x2 );
	y5++;
			mat[1][5][0][y5] = i;
			question[i]=x2;	dif=x1;}
		}
		else 
		{writing ("answer.txt" ,x2 );
			mat[1][5][1][y5] = j;
			answer[j]=x2;}
		
	}
	
	else if(x1==6)
	{
	if(mohsen(2,1,x2,0)==0)
			{
		if (x3==0)
		{	writing ("do.txt" ,x2 );
	y6++;
			mat[2][1][0][y6] = i;
			question[i]=x2;	dif=x1;}
		}
		else 
		{writing ("answer.txt" ,x2 );
			mat[2][1][1][y6] = j;
			answer[j]=x2;	}
		
	}
	
	else if(x1==7)
	{
		if(mohsen(2,2,x2,0)==0)
			{
		if (x3==0)
		{writing ("does.txt" ,x2 );
	y7++;
			mat[2][2][0][y7] = i;
			question[i]=x2;	dif=x1;}
		}
		else 
		{writing ("answer.txt" ,x2 );
			mat[2][2][1][y7] = j;
			answer[j]=x2;	}
		
	}
	
	
	else if(x1==8)
	{
	if(mohsen(2,3,x2,0)==0)
			{
		if (x3==0)
		{	writing ("did.txt" ,x2 );
	y8++;
			mat[2][3][0][y8] = i;
			question[i]=x2;	dif=x1;}
	}
		else 
		{writing ("answer.txt" ,x2 );
			mat[2][3][1] [y8]= j;
			answer[j]=x2;	}
		
	}
	
	
	else if(x1==9)
	{
	if(mohsen(3,1,x2,0)==0)
			{
		if (x3==0)
		{	writing ("have.txt" ,x2 );
	y9++;
			mat[3][1][0] [y9]= i;
			question[i]=x2;	dif=x1;}
		}
		else 
		{writing ("answer.txt" ,x2 );
			mat[3][1][1] [y9]= j;
			answer[j]=x2;}
		
	}
	
	else if(x1==10)
	{
		if(mohsen(3,2,x2,0)==0)
			{
		if (x3==0)
		{writing ("has.txt" ,x2 );
	a0++;
			mat[3][2][0] [a0]= i;
			question[i]=x2;	dif=x1;}
		}
		else 
		{writing ("answer.txt" ,x2 );
			mat[3][2][1][a0] = j;
			answer[j]=x2;}
		
	}
	
	else if(x1==11)
	{
	if(mohsen(3,3,x2,0)==0)
			{
		if (x3==0)
		{	writing ("had.txt" ,x2 );
	a1++;
			mat[3][3][0] [a1]= i;
			question[i]=x2;	dif=x1;}
		}
		else 
		{writing ("answer.txt" ,x2 );
			mat[3][3][1] [a1]= j;
			answer[j]=x2;	}
		
	}
	
	else if(x1==12)
	
	{
	if(mohsen(4,1,x2,0)==0)
			{
		if (x3==0)
		{	writing ("am.txt" ,x2 );
	a2++;
			mat[4][1][0][a2] = i;
			question[i]=x2;	dif=x1;}
		}
		else 
		{writing ("answer.txt" ,x2 );
			mat[4][1][1][a2] = j;
			answer[j]=x2;	}
		
	}
	
	else if(x1==13)
	{
	if(mohsen(4,2,x2,0)==0)
			{
		if (x3==0)
		{	writing ("is.txt" ,x2 );
	a3++;
			mat[4][2][0] [a3]= i;
			question[i]=x2;	dif=x1;}
		}
		else 
		{writing ("answer.txt" ,x2 );
			mat[4][2][1] [a3]= j;
			answer[j]=x2;	}
		
	}
	
	else if(x1==14)
	{
	if(mohsen(4,3,x2,0)==0)
			{
		if (x3==0)
		{a4++;	writing ("are.txt" ,x2 );
	
			mat[4][3][0][a4] = i;
			question[i]=x2;	dif=x1;}
		}
		else 
		{writing ("answer.txt" ,x2 );
			mat[4][3][1] [a4]= j;
			answer[j]=x2;}
		
	}
	
	else if(x1==15)
	{
	if(mohsen(5,1,x2,0)==0)
			{
		if (x3==0)
		{	a5++; writing ("will.txt" ,x2 );
	
			mat[5][1][0][a5] = i;
			question[i]=x2;	dif=x1;}
		}
		else 
		{writing ("answer.txt" ,x2 );
			mat[5][1][1][a5] = j;
			answer[j]=x2;	}
		
	}
	else if(x1==16)
	{
	
	if(mohsen(5,2,x2,0)==0)
			{
		if (x3==0)
		{	writing ("would.txt" ,x2 );
	a6++;
			mat[5][2][0] [a6]= i;
			question[i]=x2;	dif=x1;}
		}
		else 
		{writing ("answer.txt" ,x2 );
			mat[5][2][1][a6] = j;
			answer[j]=x2;	}
		
	}
	else if(x1==17)
	{
	if(mohsen(6,1,x2,0)==0)
			{
		if (x3==0)
		{a7++;	writing ("can.txt" ,x2 );
	
			mat[6][1][0] [a7]= i;
			question[i]=x2;	dif=x1;}
		}
		else 
		{writing ("answer.txt" ,x2 );
			mat[6][1][1] [a7]= j;
			answer[j]=x2;	}
		
	}
	else if(x1==18)
	{
	if(mohsen(1,1,x2,0)==0)
			{
		if (x3==0)
		{a8++;	writing ("could.txt" ,x2 );
	
			mat[6][2][0][a8] = i;
			question[i]=x2;	dif=x1;}
		}
		else 
		{writing ("answer.txt" ,x2 );
			mat[6][2][1] [a8]= j;
			answer[j]=x2;	 }
		
	}
	else if(x1==19)
	{
	if(mohsen(7,1,x2,0)==0)
			{
		if (x3==0)
		{a9++;	writing ("shall.txt" ,x2 );
	
			mat[7][1][0] [a9]= i;
			question[i]=x2;	dif=x1;}
		}
		else 
		{writing ("answer.txt" ,x2 );
			mat[7][1][1] [a9]= j;
			answer[j]=x2;	 }
		
	}
	else if(x1==20)
	{
	if(mohsen(7,2,x2,0)==0)
			{
		if (x3==0)
		{a10++;
				writing ("should.txt" ,x2 );
	
			mat[7][2][0] [a10]= i;
			question[i]=x2;	dif=x1;}
		}
		else 
		{writing ("answer.txt" ,x2 );
			mat[7][2][1] [a10]= j;
			answer[j]=x2;	}
		
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


int mohsen (int x , int y ,string z , int q)
{int b =0;

cout << "\n******************************************************************\n";

	if(q==0)
	{
	for (a=0;a<=10; a++)
	{//fe 7alat el so2al
	cout << a <<"\t"; 
		if(func3(question[a],z))
		{
			cout<<"find question in number " << a << "\t";
			return a;		
		}
		else
		{
			
			
			cout<<"didnt find questions &&&&&&&&7 \t";
		if(a==10)
		{a=0 ; dif=0; return 0 ;}
	}
	}
}
	else if (q==1)
	{
		cout << "%%%%%%%%%%%%%%%%%%%%%% a = " << a << "\n" ;
	for (b=0;b<=10; b++)
	{//fe 7alat el so2al 
	cout<<b << "\t" <<mat[x][y][b][a] << "\t" ;
		if(mat[x][y][b][a]==0)
		{
			cout<<"$$$$$$$$$$$$$$$$ done in "<<b <<"\t" << a << "\t" << z << "\t";
			return b;		
		}
		else
		{
			cout<< " wrong $%^&# \t";
		}
		
	}
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
			//cout<< "done";
		return 1;	
		}
		else
		{ //cout<< "fail";
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
				 cout<<"round \n";
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
	
	
	cout<< "omar\n";
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
			 
			// cout<< "\n" << pos2 << " " << pos3 <<"\t";
			 if(pos2<pos3)
			{ out = bc.substr(pos+1,pos2-pos-x);
			 cout<< "2";
			 }
			 else
			 {out = bc.substr(pos+1,pos3-pos-x);
			cout<< "3";
			 }

			 cout <<"***" << out;
			
			cout << "\t"  ;
			
			string first = func1(out);
			 
			 first = eraseq(".",first);
			 first = eraseq(",",first);
			 cout<<first<<"\n";
			
			 // المفروض دلؤقتي الكلمه الي بترجعلي الي هيا اول كلمة .. المفروض يقؤم يشيل منها . , عشان نعرف نشتغل صح و يسجلها عنده ..
			cout<<first;
			
			int cc = clas ( first);
			cout << "\n the number is " << cc ;
			
			
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
				
				matrix(cc,out,0);
				i++;
				cout<< "question number " << i << "\n" ;
				
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
  	cout << "\n\nfunc1\n"<<omar;
				 omar = eraseq("\"",omar);
cout <<omar<<"\n";
	string first = func1(omar);
cout << "\nclas\n";
	int cc = clas ( first);
cout << "\nreference\n";
	
	cc = reference (cc);
	
	cout<< "done funcions ";
		for(z=0;z<=100;z++)	
	{//cout << "\nfunc3\n";
			cout <<question[z]<<"\n";
		if(func3(omar,question[z]))
		{
			cout <<question[z]<<"\n";
			int o=0;
			for(o=0;o<=100;o++)
			{
			if(mat[help][cc][0][o]==z)
			{
				cout << answer[mat[help][cc][1][o]]<<"\n";return 0;
			}
		}
		}
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



