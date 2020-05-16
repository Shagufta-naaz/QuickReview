#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
int main()
{	int o1,key=0;
	string s1,p;
	cout<<"1.sign in\n2.sign up\n";
	cin>>o1;
	switch(o1)
	{	case 1:
		{	ifstream fptr("megh.txt");
			cout<<"Enter user name\n";
			cin>>p;
			while(!fptr.eof())
			{	getline(fptr,s1);
				if (s1==p)
				{	cout<<"Enter Password\n";
					cin>>p;
					getline(fptr,s1);
					if(p==s1)
					{	cout<<"WELCOME TO OUR PAGE\n";
						key=1;
					}
					break;
				}	
			}
			if(!key)
				cout<<"Invalid Username or Password\n";
			fptr.close();
		}
		break;
		case 2:
			ofstream file("megh.txt",ios::app);
			cout<<"Enter Username\n";
			cin>>s1;
			file<<s1<<endl;
			cout<<"Enter Password\n";
			cin>>s1;
			file<<s1<<endl;
			cout<<"WELCOME TO OUR PAGE\n";
			file.close();
			key=1;
		break;	
	}
	if(key){
	while(1){
	string s;
	int o;
	cout<<"1.Movies\n2.TV series\n3.Kids entertainment\n4.Talk shows\n5.Gadgets\n6.Exit\n";
	cout<<"Choose the category you want:\n";
	cin>>o;
	switch(o)
	{	case 1:
		{	ifstream file("REVIEWS.txt");
			cout<<"Choose the language of your choice:\n1.Telugu\n2.Hindi\n3.English\n";
			cin>>o;
			switch(o)
			{	case 1:
				{	cout<<"Choose the genre of your choice:\n1.Sci-fi\n2.Horror\n3.Comedy\n";
					cin>>o;
					switch(o) 
					{	case 1:
						{	cout<<"Select the movie of your choice:\n1.24\n2.Robot\n";
							cin>>o;
							if(o==1)
							{	for(int i=0;i<11;i++)
								{	getline(file,s);
									cout<<s<<endl;
								}
							}
							else
							{	for(int i=0;i<12;i++)
									getline(file,s);
								for(int i=0;i<10;i++)
								{	getline(file,s);
									cout<<s<<endl;
								}
							}
						}break;	
						case 2:
						{	cout<<"Select the movie of your choice:\n1.Bhaagamathie\n2.Raju Gari Gadhi\n";
							cin>>o;
							if(o==1)
							{	for(int i=0;i<23;i++)
									getline(file,s);
								for(int i=0;i<9;i++)
								{	getline(file,s);
									cout<<s<<endl;
								}
							}
							else
							{	for(int i=0;i<34;i++)
									getline(file,s);
								for(int i=0;i<9;i++)
								{	getline(file,s);
									cout<<s<<endl;
								}
							}
						}break;
						case 3:
						{	cout<<"Select the movie of your choice:\n1.Pelli Choopulu\n2.Kick\n";
							cin>>o;
							if(o==1)
							{	for(int i=0;i<44;i++)
									getline(file,s);
								for(int i=0;i<10;i++)
								{	getline(file,s);
									cout<<s<<endl;
								}	
							}
							else
							{	for(int i=0;i<54;i++)
									getline(file,s);
								for(int i=0;i<10;i++)
								{	getline(file,s);
									cout<<s<<endl;
								}
							}
						}break;
					}
				}break;
				case 2:
				{	cout<<"Choose the genre of your choice:\n1.Action\n2.Horror\n3.Comedy\n";
                                 	cin>>o;
                                 	switch(o)
                                        {       case 1:
                                                {       cout<<"Select the movie of your choice:\n1.Baaghi\n2.Tiger zinda hai\n";
                                                        cin>>o;
                                                        if(o==2)
                                                        {	for(int i=0;i<65;i++)
																getline(file,s);
															for(int i=0;i<10;i++)
															{	getline(file,s);
																cout<<s<<endl;
															}
														}
														else
														{	for(int i=0;i<77;i++)
																getline(file,s);
															for(int i=0;i<9;i++)
															{	getline(file,s);
																cout<<s<<endl;
															}
														}
                                                }break;
                                                case 2:
                                                {       cout<<"Select the movie of your choice:\n1.Pari\n2.Raaz Reboot\n";
                                                        cin>>o;
                                                        if(o==1)
                                                        {	for(int i=0;i<87;i++)
																getline(file,s);
															for(int i=0;i<10;i++)
															{	getline(file,s);
																cout<<s<<endl;
															}
														}
														else
														{	for(int i=0;i<98;i++)
																getline(file,s);
															for(int i=0;i<10;i++)
															{	getline(file,s);
																cout<<s<<endl;
															}
														}
                                                }break;
                                                case 3:
                                                {       cout<<"Select the movie of your choice:\n1.Hera-Pheri\n2.3 Idiots\n";
                                                        cin>>o;
                                                        if(o==1)
                                                        {	for(int i=0;i<109;i++)
																getline(file,s);
															for(int i=0;i<10;i++)
															{	getline(file,s);
																cout<<s<<endl;
															}
														}
														else
														{	for(int i=0;i<120;i++)
																getline(file,s);
															for(int i=0;i<10;i++)
															{	getline(file,s);
																cout<<s<<endl;
															}
														}
                                                }break;
                                        }
				}break;
				 case 3:
                                {       cout<<"Choose the genre of your choice:\n1.Action\n2.Sci-fi\n3.Comedy\n";
                                        cin>>o;
                                        switch(o)
                                        {       case 1:
                                                {       cout<<"Select the movie of your choice:\n1.Dunkirk\n2.xXx:Return of Xander cage\n";
                                                        cin>>o;
                                                        if(o==1)
                                                        {	for(int i=0;i<131;i++)
																getline(file,s);
															for(int i=0;i<9;i++)
															{	getline(file,s);
																cout<<s<<endl;
															}
														}
														else
														{	for(int i=0;i<141;i++)
																getline(file,s);
															for(int i=0;i<9;i++)
															{	getline(file,s);
																cout<<s<<endl;
															}
														}
                                                }break;
                                                case 2:
                                                {       cout<<"Select the movie of your choice:\n1.Inception\n2.Interstellar\n";
                                                        cin>>o;
                                                        if(o==1)
                                                        {	for(int i=0;i<151;i++)
																getline(file,s);
															for(int i=0;i<8;i++)
															{	getline(file,s);
																cout<<s<<endl;
															}
														}
														else
														{	for(int i=0;i<160;i++)
																getline(file,s);
															for(int i=0;i<8;i++)
															{	getline(file,s);
																cout<<s<<endl;
															}
														}
                                                }break;
                                                case 3:
                                                {       cout<<"Select the movie of your choice:\n1.Rush Hour\n2.The Hangover\n";
                                                        cin>>o;
                                                        if(o==1)
                                                        {	for(int i=0;i<169;i++)
																getline(file,s);
															for(int i=0;i<9;i++)
															{	getline(file,s);
																cout<<s<<endl;
															}
														}
														else
														{
													    	for(int i=0;i<179;i++)
																getline(file,s);
															for(int i=0;i<9;i++)
															{	getline(file,s);
																cout<<s<<endl;
															}
													    }
                                                }break;
                                        }
                                }break;
			}
		}break;
		case 2:
		{	cout<<"Choose the language of your choice:\n1.Telugu\n2.Hindi\n3.English\n";
			cin>>o;
			ifstream ser("series.txt");
			switch(o)
			{	case 1:
				{	cout<<"Select the program of your choice:\n1.Bigg Boss\n2.Dhee\n3.Mee lo evaru Koteshwarudu\n";
					cin>>o;
					if(o==1)
					{	for(int i=0;i<8;i++)
						{	getline(ser,s);
							cout<<s<<endl;
						}
					}
					else if(o==2)
					{	for(int i=0;i<9;i++)
							getline(ser,s);
						for(int i=0;i<7;i++)
						{	getline(ser,s);
							cout<<s<<endl;
						}
					}
					else
					{	for(int i=0;i<17;i++)
							getline(ser,s);
						for(int i=0;i<6;i++)
						{	getline(ser,s);
							cout<<s<<endl;
						}
					}
				}break;
				case 2:
				{	cout<<"Select the program of your choice:\n1.CID\n2.Sacred Games\n3.Koun Banega Crorepati\n";
					cin>>o;
					if(o==1)
					{	for(int i=0;i<24;i++)
							getline(ser,s);
						for(int i=0;i<8;i++)
						{	getline(ser,s);
							cout<<s<<endl;
						}
					}
					else if(o==2)
					{	for(int i=0;i<33;i++)
							getline(ser,s);
						for(int i=0;i<9;i++)
						{	getline(ser,s);
							cout<<s<<endl;
						}
					}
					else
					{	for(int i=0;i<43;i++)
							getline(ser,s);
						for(int i=0;i<7;i++)
						{	getline(ser,s);
							cout<<s<<endl;
						}
					}
				}break;
				case 3:
				{	cout<<"Select the program of your choice:\n1.F.R.I.E.N.D.S\n2.House of Cards\n3.Suits\n";
					cin>>o;
					if(o==1)
					{	for(int i=0;i<51;i++)
							getline(ser,s);
						for(int i=0;i<7;i++)
						{	getline(ser,s);
							cout<<s<<endl;
						}
					}
					else if(o==2)
					{	for(int i=0;i<59;i++)
							getline(ser,s);
						for(int i=0;i<8;i++)
						{	getline(ser,s);
							cout<<s<<endl;
						}
					}
					else
					{	for(int i=0;i<68;i++)
							getline(ser,s);
						for(int i=0;i<8;i++)
						{	getline(ser,s);
							cout<<s<<endl;
						}
					}
				}break;
			}
		}break;
		case 3:
		{	cout<<"Select the cartoon of your choice\n1.Shinchan\n2.Tom & Jerry\n3.Pokemon\n";
			cin>>o;
			ifstream meg("kids.txt");
			if(o==3)
			{	for(int i=0;i<7;i++)
					getline(meg,s);
				for(int i=0;i<9;i++)
				{	getline(meg,s);
					cout<<s<<endl;
				}
			}
			else if(o==1)
			{	for(int i=0;i<6;i++)
				{	getline(meg,s);
					cout<<s<<endl;
				}
			}
			else
			{	for(int i=0;i<17;i++)
					getline(meg,s);
				for(int i=0;i<10;i++)
				{	getline(meg,s);
					cout<<s<<endl;
				} 
			}
		}break;
		case 4:
		{	cout<<"Choose the language of your choice\n1.Telugu\n2.Hindi\n3.English\n";	
			cin>>o;
			ifstream show("shows.txt");
			switch(o)
			{	case 1:
				{	cout<<"Select the show of your choice\n1.Open Heart with RK\n2.No.1 Yaari\n3.Ramuism\n";
					cin>>o;
					if(o==1)
					{	for(int i=0;i<6;i++)
						{	getline(show,s);
							cout<<s<<endl;
						}
					}
					else if(o==2)
					{	for(int i=0;i<7;i++)
							getline(show,s);
						for(int i=0;i<5;i++)
						{	getline(show,s);
							cout<<s<<endl;
						}
					}
					else
					{	for(int i=0;i<13;i++)
							getline(show,s);
						for(int i=0;i<5;i++)
						{	getline(show,s);
							cout<<s<<endl;
						}
					}
				}break;	
				case 2:
				{	cout<<"Select the show of your choice\n1.Koffee with Karan\n2.Satyameva Jayate\n3.Aap ki Adaalat\n";
					cin>>o;
					if(o==1)
					{	for(int i=0;i<19;i++)
							getline(show,s);
						for(int i=0;i<6;i++)
						{	getline(show,s);
							cout<<s<<endl;
						}
					}
					else if(o==2)
					{	for(int i=0;i<26;i++)
							getline(show,s);
						for(int i=0;i<8;i++)
						{	getline(show,s);
							cout<<s<<endl;
						}
					}
					else
					{	for(int i=0;i<35;i++)
							getline(show,s);
						for(int i=0;i<7;i++)
						{	getline(show,s);
							cout<<s<<endl;
						}
					}
				}break;
				case 3:
				{
					cout<<"Select the show of your choice\n1.The Ellen DeGeners Show\n2.Jimmey Kimmel Live\n3.The Oprah Winfrey Show\n";
					cin>>o;
					if(o==1)
					{	for(int i=0;i<43;i++)
							getline(show,s);
						for(int i=0;i<7;i++)
						{	getline(show,s);
							cout<<s<<endl;
						}
					}
					else if(o==2)
					{	for(int i=0;i<51;i++)
							getline(show,s);
						for(int i=0;i<7;i++)
						{	getline(show,s);
							cout<<s<<endl;
						}
					}
					else
					{	for(int i=0;i<59;i++)
							getline(show,s);
						for(int i=0;i<7;i++)
						{	getline(show,s);
							cout<<s<<endl;
						}
					}
				}break;
			}
		}break;
		case 5:
		{	cout<<"Select the gadgets of you choice:\n1.Apple Airpods\n2.Intel Credit Card sized Computer\n3.Amazon Echo\n4.Play Station VR\n";
			cin>>o;
			ifstream gad("gadget.txt");
			if(o==1)
			{	for(int i=0;i<25;i++)
					getline(gad,s);
				for(int i=0;i<8;i++)
				{	getline(gad,s);
					cout<<s<<endl;
				} 	
			}
			else if(o==3)
			{	for(int i=0;i<8;i++)
				{	getline(gad,s);
					cout<<s<<endl;
				} 
			}
			else if(o==4)
			{	for(int i=0;i<9;i++)
					getline(gad,s);
				for(int i=0;i<7;i++)
				{	getline(gad,s);
					cout<<s<<endl;
				} 
			}
			else
			{	for(int i=0;i<17;i++)
					getline(gad,s);
				for(int i=0;i<7;i++)
				{	getline(gad,s);
					cout<<s<<endl;
				} 
			}
		}break;
		case 6:
			exit(0);
	}
	}
	}
	return 0;
}



						

			
