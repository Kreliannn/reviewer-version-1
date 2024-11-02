#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void Reviewer(),RandomQ();
string A[21];
string Q[21];
int Rc[21];
int limit = 20;

void AssignValue(){
		
//question 1
A[1] = "1";
Q[1] = "11";

//question 2
A[2] = "2";
Q[2] = "22";

//question 3
A[3] = "3";
Q[3] = "33";

//question 4
A[4] = "4";
Q[4] = "44";

//question 5
A[5] = "5";
Q[5] = "55";

//question 6
A[6] = "6";
Q[6] = "66";

//question 7
A[7] = "7";
Q[7] = "77";

//question 8
A[8] = "8";
Q[8] = "88";

//question 9
A[9] = "9";
Q[9] = "99";

//question 10
A[10] = "10";
Q[10] = "110";

//question 11
A[11] = "11";
Q[11] = "111";

//question 12
A[12] = "12";
Q[12] = "112";

//question 13
A[13] = "13";
Q[13] = "113";

//question 14
A[14] = "14";
Q[14] = "114";

//question 15
A[15] = "15";
Q[15] = "115";

//question 16
A[16] = "16";
Q[16] = "116";

//question 17
A[17] = "17";
Q[17] = "117";

//question 18
A[18] = "18";
Q[18] = "118";

//question 19
A[19] = "19";
Q[19] = "119";

//question 20
A[20] = "20";
Q[20] = "120";
}

void Rc0(){
Rc[1] = 0;Rc[2] = 0;Rc[3] = 0;
Rc[4] = 0;Rc[5] = 0;Rc[6] = 0;Rc[7] = 0;
Rc[8] = 0;Rc[9] = 0;Rc[10] = 0;
Rc[11] = 0;Rc[12] = 0;Rc[13] = 0;Rc[14] = 0;
Rc[15] = 0;Rc[16] = 0;Rc[17] = 0;
Rc[18] = 0;Rc[19] = 0;Rc[20] = 0;	
}



int main()
{
	AssignValue();
	Rc0();
	Reviewer();
    RandomQ();
}



void Reviewer(){	
	cout<<"════════════════════⊹⊱≼≽⊰⊹════════════════════════════\n"<<endl;
	for(int i = 1; i <= 20; i++)
	{
		textcolor(3);
        cout<<A[i]<<endl;
        textcolor(7);
        cout<<"-"<<Q[i]<<endl;
         cout<<endl;	
	}
cout<<"════════════════════⊹⊱≼≽⊰⊹════════════════════════════\n"<<endl;
system("pause");
system("cls");
}

int R, v = 0;

void RandomChecker(){
	 
	 if(v == limit){
	 	Rc0();
		v -= v;
		}	
	 
	 do{	 	
	 
	 srand(time(0));
	  R = 1 + rand()%limit;
	  
	 }while(R == Rc[1] || R == Rc[2] || R == Rc[3] || R == Rc[4] || R == Rc[5] || R == Rc[6] || R == Rc[7] || R == Rc[8] || R == Rc[9] || R == Rc[10] || R == Rc[11] || R == Rc[12] || R == Rc[13] || R == Rc[14] || R == Rc[15] || R == Rc[16] || R == Rc[17] || R == Rc[18] || R == Rc[19] || R == Rc[20]);
	 
	 v++;
	 Rc[v] = R;
}



void RandomQ(){
	   	 
	   RandomChecker();
	   
	   string Question = Q[R];
	   string Answer = A[R];
	  
	    string a;
	
	    textcolor(3);
	    cout<<endl;
		cout<<"Question: ";
		textcolor(7);
		cout<<Question<<endl;
		cout<<endl;
		textcolor(3);
		cout<<"answer: ";
		textcolor(7);
		getline(cin,a);
		textcolor(3);
		if(a == Answer)
		{ 
		   cout<<endl;
		   textcolor(2);
		   cout << "CORRECT\n"<<endl;
		   textcolor(8);
		   system("pause");
		   system("cls");
		   RandomQ();
		}else{	
		   textcolor(4);
			cout<<"\nWRONG\n"<<endl;
			textcolor(6);
cout<<"correct answer is "<< Answer <<endl;
			cout<<endl;
			textcolor(8);
			system("pause");
			system("cls");
			v -= v;
	        main();
					
		}
						
}
   	

	