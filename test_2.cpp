#include "h.h" 

int main ()
{
	ina();
	
	
	int tr,tr1;
	Learning ("omar.txt");
	
for(tr=0 ; tr <=10; tr++)
{
	cout<<"("<<tr<<","<<tr1<<")"<<"\n";
	cout<<" "<<question[tr]<<" " <<answer[tr] << "\n";
}	
for(tr1=0 ; tr1 <=10; tr1++)
for(tr=0 ; tr <=3; tr++)
{
		cout<<"("<<tr1<<","<<tr<<")"<<"\n";

cout<< mat [1] [1] [tr] [tr1] ;
	
}	
cout<< "for 1,1 " << answer[mat [1] [1] [1] [1]] << "\n" ;
	
	
	/////////////////
	
	
for(tr1=0 ; tr1 <=10; tr1++)
for(tr=0 ; tr <=3; tr++)
{
		cout<<"("<<tr1<<","<<tr<<")"<<"\n";

cout<< mat [1] [2] [tr] [tr1] ;
	
}	
cout<< "for 1,0 " << answer[mat [1] [2] [1] [0]] << "\n" ;

cout<< "for 2,0 " << answer[mat [1] [2] [1] [0]] << "\n" ;


for(tr=0 ; tr <=20; tr++)
{
if(func3("omar1 ",answer[tr]))
{
	cout << "\n omar1 found in " << tr;
	break;
}	
else 
{
	cout << "not yet " ;
}
}	

	string x1,x2,x3;
	x1=hacking();
	x2=hacking();
	x2=hacking();
	x2=hacking();
	x2=hacking();
	//x3=hacking();
	if(func3(x1,x2))
	{
		cout << x1 << " \t" << x2 << "are similar" ;
	}
	else 
	cout <<"error";	
}
