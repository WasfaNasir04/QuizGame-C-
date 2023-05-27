#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char choice;
	char input;
	int score=0;
	int count=0;
	cout<<"     WELCOME TO QUIZ GAME      "<<endl;
	cout<<"_______________________________"<<endl;
	string name;
	cout<<"Enter Name"<<endl;
	cin>>name[count];
	count=count+1;
	if(count==5)
	{
		count=0;
}
do
{
	cout<<"*********************************************************************"<<endl;
	cout<<"                           MENU OF THE GAME                          "<<endl;
	cout<<"*********************************************************************"<<endl;
	cout<<"Press S to start the game"<<endl;
	cout<<"Press V to view the score of All Players"<<endl;
	cout<<"Press T to view the Highest score of the player"<<endl;
	cout<<"Press L to view the Lowest score of the player"<<endl;
	cout<<"Press R to reset the game"<<endl;
	cout<<"Press H for help"<<endl;
	cout<<"Press Q to exit the game"<<endl;
	cout<<"Press any Key to continue..."<<endl;
	getch(),
	system("CLS");
	cout<<"Enter input";
	cin>>input;
	cout<<endl;
	switch(input)
	{
	case's':
	case'S':	
		cout<<"Start the game"<<endl;
		int option[2];
		cout<<name<<",Select an option from the following categories"<<endl;
		cout<<"1.ISLAMIC HISTORY""                    ""2.SPORTS"<<endl;
		cout<<"3.MATHEMATICS""                        ""4.MUSIC"<<endl;
		getch();
		cout<<"Choose an option number"<<endl;
		cin>>option[0];
		getch();
		if(option[0]==1)
		{
		cout<<"ISLAMIC HISTORY";
		int option[4];
		score=0;
		cout<<"Q.1 Who was the First Caliph of Islam?"<<endl;
		cout<<"1.Hazrat Ali(R.A)""                     ""2.Hazrat Abu Bakar(R.A)"<<endl;
		cout<<"3.Hazrat Umer Farooq(R.A)""             ""4.Hazrat Usman(R.A)"<<endl;
		cout<<" "<<endl;
		cout<<"Enter Your Option number"<<endl;
		cin>>option[0];
		if(option[0]==2)
		{
		cout<<"HURRAY!!! Your Answer is Correct!!!"<<endl;
        score=score+100;
    	}
    	else
    	{
    		cout<<"\nSorry,... your answer is wrong"<<" "<<endl;
	        score=score+(-50);
	    }
		cout<<"Press any Key to move to next question"<<endl;
		getch();
		system("CLS");
		cout<<"Q.2 Who was the first muezzin of Islam?"<<endl;
		cout<<"1.Hazrat Bilal(R.A)""                   ""2.Hazrat Umer(R.A)"<<endl;
		cout<<"3.Hazzrat Yousoof(R.A)""                ""4.Hazrat Daud(R.A)"<<endl;
		cout<<" "<<endl;
		cout<<"Enter Your Option number"<<endl;
		cin>>option[1];
		if(option[1]==1)
		{
		cout<<"HURRAY!!! Your Answer is Correct!!!"<<endl;
    	score=score+100;
		}
	    else
	    {
		cout<<"\nSorry,...your answer is wrong"<<" "<<endl;
	    score=score+(-50);
		}
		cout<<"Press any Key to Move to Next question"<<endl;
		getch();
		system("ClS");
		cout<<"Q.3 Where was the Quran Pak revealed?"<<endl;
		cout<<"1.In the cave of Saur""                 ""2.In the cave of Hira"<<endl;
		cout<<"3.In the Masjid-ul-Nabwi""              ""4.In Maidan-e-Arafat"<<endl;
	    cout<<" "<<endl;
		cout<<"Enter Your Option number"<<endl;
		cin>>option[2];
		if(option[2]==2)
		{
		cout<<"HURRAY!!! Your Answer is Correct!!!"<<endl;
	    score=score+100;
		}
	    else
	    {
		cout<<"\nSorry,...your answer is wrong"<<" "<<endl;
	    score=score+(-50);
		}
		cout<<"Press any Key to move to next question"<<endl;
		getch();
		system("CLS");
		cout<<"Q.4 When Muslims perform Hajj?"<<endl;
		cout<<"1.On 8 Zil Hajj""                       ""2.On 11 Zil Hajj"<<endl;
		cout<<"3.On 12 Zil Hajj""                      ""4.On 9 and 10 Zil Hajj"<<endl;
        cout<<" "<<endl;
		cout<<"Enter Your Option number"<<endl;
	    cin>>option[3];
	    if(option[3]==4)
	    {
		cout<<"HURRAY!!! Your Answer is Correct!!!"<<endl;
	    score=score+100;
		}
	    else
	    {
		cout<<"\nSorry,...your asnwer is wrong"<<" "<<endl;
		score=score+(-50);
		cout<<"Your Quiz finished.If you want to continue as user1, Press Y otherwise N"<<endl;
		cin>>choice;
		if(choice=='Y')
		{
			cout<<"If you want to continue as user1";
		}
		else
		{
			cout<<"Quit the Game";
		}
		}
		getch();
		system("CLS");
	}
    else if(option[0]==2)
	    { 
	    cout<<"SPORTS";
	    int option[4];
	    score=0;
		cout<<"Q.1 When did Pakistan won the first T-20 World Cup?"<<endl;
		cout<<"1.In 1991""                               ""2.In 1990"<<endl;
		cout<<"3.In 1994""                               ""4. In 1992"<<endl;
		cout<<" "<<endl;
		cout<<"Enter Your Option number"<<endl;
	    cin>>option[0];
		if(option[0]==4)
		{
		cout<<"HURRAY!!! Your Answer is Correct!!!"<<endl;
	    score=score+100;
		}
	    else
     	{
		cout<<"\nSorry,...your answer is wrong"<<" "<<endl;
    	score=score+(-50);
		}
		cout<<"Press any Key to move to next question"<<endl;
		getch();
		system("CLS");
		cout<<"Q.2 How many players are there in a cricket team?"<<endl;
		cout<<"1. 11""                                    ""2. 12"<<endl;
		cout<<"3. 13""                                    ""4. 15"<<endl;
		cout<<" "<<endl;
		cout<<"Enter Your Option number"<<endl;
		cin>>option[1];
		if(option[1]==1)
		{
		cout<<"HURRAY!!! Your Answer is Correct!!!"<<endl;
    	score=score+100;
		}
    	else
    	{
		cout<<"\nSorry,...your answer is wrong"<<" "<<endl;
	    score=score+(-50);
    	}
		cout<<"Press any Key to move to next question"<<endl;
		getch();
		system("CLS");
		cout<<"Q.3 Who was the caption in 1992 World cup?"<<endl;
		cout<<"1. Inzamam-ul-Haq""                       ""2. Imran Khan"<<endl;
		cout<<"3. Shahid Afridi""                        ""4. Waseem Akram"<<endl;
		cout<<" "<<endl;
		cout<<"Enter Your Option number"<<endl;
		cin>>option[2];
		if(option[2==2])
		{
		cout<<"HURRAY!!! Your Answer is Correct!!!"<<endl;
	    score=score+100;
		}
	    else
	    {
		cout<<"\nSorry,...your answer is wrong"<<" "<<endl;
    		score=score+(-50);
		}
		cout<<"Press any Key to move to next question"<<endl;
		getch();
		system("CLS");
		cout<<"Q.4 What are the tree wooden strumps behind the batsman called?"<<endl;
		cout<<"1. sticks""                                ""2. Wickets"<<endl;
		cout<<"3. Ball""                                  ""4. Rods"<<endl;
		cout<<" "<<endl;
		cout<<"Enter Your Option number"<<endl;
		cin>>option[3];
		if(option[3]==2)
		{
		cout<<"HURRAY!!! Your Answer is Correct!!!"<<endl;
	    score=score+100;
		}
	    else
	    {
		cout<<"\nSorry,...your answer is wrong"<<" "<<endl;
	    score=score+(-50);
	    	cout<<"Your Quiz finished.If you want to continue as user1, Press Y otherwise N"<<endl;
	    cin>>choice;
	    if(choice=='Y')
	    {
	    	cout<<"If you want to continue as user1";
		}
		else
		{
			cout<<"Quit the Game";
		}
		}
		getch();
		system ("CLS");
	}
	else if(option[0]==3)
	{
		cout<<"MATHEMATICS";
		int option[4];
		score=0;
		cout<<"Q.1 What is answer of b^2-4ac<0?"<<endl;
		cout<<"1. roots are real""                        ""2. roots are imaginary"<<endl;
		cout<<"3. roots are unequal and imaginary""       ""4. roots are rational"<<endl;
		cout<<" "<<endl;
		cout<<"Enter Your Option number"<<endl;
		cin>>option[0];
		if(option[0]==3)
		{
		cout<<"HURRAY!!! Your Answer is Correct!!!"<<endl;
	     score=score+100;
		}
	    else
	    { 
		cout<<"\nSorry,...your answer is wrong"<<" "<<endl;
        score=score+(-50);
		}
		cout<<"Press any Key to move to next question"<<endl;
		getch();
		system("CLS");
		cout<<"Q.2 What is the suare root of 256?"<<endl;
		cout<<"1. 15""                                   ""2. 16"<<endl;
		cout<<"3. 14""                                   ""4. 18"<<endl;
		cout<<" "<<endl;
		cout<<"Enter Your Option number"<<endl;
		cin>>option[1];
		if(option[1]==2)
		{
		cout<<"HURRAY!!! Your Answer is Correct!!!"<<endl;
	     score=score+100;
		}
	    else
	    {
		cout<<"\nSorry,...your answer is wrong"<<" "<<endl;
    		score=score+(-50);
		}
		cout<<"Press any Key to move to next question"<<endl;
		getch();
		system("CLS");
		cout<<"Q.3 What is the Formula of (x^2-y^2)=?"<<endl;
		cout<<"1. (x+y)(x-y)""                           ""2. x^4-y^4"<<endl;
		cout<<"3. x^2+2xy+y^2""                          ""4. x-y"<<endl;
		cout<<" "<<endl;
		cout<<"Enter Your Option number"<<endl;
		cin>>option[2];
		if(option[2]==1)
		{
		cout<<"HURRAY!!! Your Answer is Correct!!!"<<endl;
         score=score+100;
	  	}
	    else
    	{
			cout<<"\nSorry,...your answer is wrong"<<" "<<endl;
    		score=score+(-50);
		}
		cout<<"Press any Key to move to next question"<<endl;
		getch();
		system("CLS");
		cout<<"Q.4 What is the answer of log10(1)=?"<<endl;
		cout<<"1. 1""                                    ""2. 0"<<endl;
		cout<<"3. 10""                                   ""4. none"<<endl;
		cout<<" "<<endl;
		cout<<"Enter Your Option number"<<endl;
		cin>>option[3];
		if(option[3]==2)
		{
		cout<<"HURRAY!!! Your Answer is Correct!!!"<<endl;
    	 score=score+100;
		} 
    	else
    	{ 
			cout<<"\nSorry,...your answer is wrong"<<" "<<endl;
    		score=score+(-50);
    			cout<<"Your Quiz finished.If you want to continue as user1, Press Y otherwise N"<<endl;
    		cin>>choice;
    		if(choice=='Y')
    		{
    			cout<<"If you want to continue as user1";
			}
			else
			{
				cout<<"Quit the game";
			}
		}
		getch();
		system("CLS");
    }
	else if(option[0]==4)
	{
		cout<<"MUSIC";
	    int option[4];
	    score=0;
		cout<<"Q.1 Which of these is a song of the movie mohabattian?"<<endl;
		cout<<"1. chand sifarish""                      ""2. humko hmin sy chura lo"<<endl;
		cout<<"3. main hoon na""                        ""4. mitwa"<<endl;
		cout<<" "<<endl;
		cout<<"Enter Your Option number"<<endl;
		cin>>option[0];
		if(option[0]==2)
		{
		cout<<"HURRAY!!! Your Answer is Correct!!!"<<endl;
	     score=score+100;
		}
	     else
	    {
		cout<<"\nSorry,...your answer is wrong"<<" "<<endl;
	    	score=score+(-50);
		}
		cout<<"Press any Key to move to next question"<<endl;
		getch();
		system("CLS");
		cout<<"Q.2 Which of these is a song from jab we met?"<<endl;
		cout<<"1. Ye ishq hai""                         ""2. yaarian"<<endl;
		cout<<"2. Tu hi hai""                           ""4. Tujhe kitna chahny lgy hm"<<endl;
		cout<<" "<<endl;
		cout<<"Enter Your Option number"<<endl;
		cin>>option[1];
		if(option[1]==1)
		{
		cout<<"HURRAY!!! Your Answer is Correct!!!"<<endl;
    	 score=score+100;
		}
    	else
    	{
		cout<<"\nSorry,...your answer is wrong"<<" "<<endl;
	    	score=score+(-50);
		}
		cout<<"Press any Key to move to next question"<<endl;
		getch();
		system("CLS");
		cout<<"Q.3 The dialogue ALL IS WELL if from which movie?"<<endl;
		cout<<"1. Bodyguard""                           ""2. Kabir singh"<<endl;
		cout<<"3. 3 Idots""                             ""4. Fidah"<<endl;
		cout<<" "<<endl;
		cout<<"Enter Your Option number"<<endl;
		cin>>option[2];
		if(option[2]==3)
		{
		cout<<"HURRAY!!! Your Answer is Correct!!!"<<endl;
	     score=score+100;
		}
	    else
	    {
			cout<<"\nSorry,...your answer is wrong"<<" "<<endl;
    		score=score+(-50);
		}
		cout<<"Press any Key to move to next question"<<endl;
		getch();
		system("CLS");
		cout<<"Q.4 What is the name of the Gorilla in the movie Rampage?"<<endl;
		cout<<"1. Jack""                                ""2. John"<<endl;
		cout<<"3. Rock""                                ""4. George"<<endl;
		cout<<" "<<endl;
		cout<<"Enter Your Option number"<<endl;
		cin>>option[3];
		if(option[3]==4)
		{
		cout<<"HURRAY!!! Your Answer is Correct!!!"<<endl;
    	 score=score+100;
		}
    	else
    	{
			cout<<"\nSorry,...your answer is wrong"<<" "<<endl;
     		score=score+(-50);
     			cout<<"Your Quiz finished.If you want to continue as user1, Press Y otherwise N"<<endl;
     		cin>>choice;
     		if(choice=='Y')
     		{
     			cout<<"If you want to continue as user1";
			 }
			 else
			 {
			 	cout<<"Quit the game";
			 }
		 }
		getch();
		system("CLS");
    }
		break;
		case'v':
	    case'V':
	    	cout<<"View the score of the game"<<endl;
	    	cout<<name<<" "<<"has scored"<<" "<<score<<"Marks"<<endl;
	    	break;
	    	case'r':
	    	case'R':
	    		cout<<"Reset the score"<<endl;
	    		score=0;
	    		cout<<"score"<<" "<<"is"<<" "<<"reset"<<endl;
	    		break;
	    		case'h':
	    		case'H':
				    cout<<"We need help"<<endl;
				    cout<<"Here are some of the rules and regulations of the game"<<endl;
				    cout<<"Press any key to continue..."<<endl;
				    getch();
				    cout<<"Firstly,there will be no hooting and shouting while playing the game"<<endl;
				    cout<<"There are 4 categories in the game"<<endl;
				    cout<<"You can choose any of them"<<endl;
				    cout<<"Each category consist of 5 questions"<<endl;
				    cout<<"Each Question carries 100 Marks"<<endl;
				    cout<<"Correct answer will give you +100 and wrong answer will give you -50"<<endl;
				    cout<<"Press any Key to Continue..."<<endl;
				    getch();
					break;
					default:
					cout<<"Quit the game"<<endl;
      				break;	
}
}while(input=='s'||'S'||'v'||'V'||'r'||'R'||'h'||'H'||'q'||'Q');
return 0;
}

