#include<iostream>
#include<fstream>
#include<string>
using namespace std;


class newcity
{
   // all the variables needeed for taking input
    float literacy,electricity,parking,no_trees,traffic,crime_rate,budget,healthcare,infrastructure,transportation,energy,
health_care,building,technology,citizen,sustainibility,quality_oflife,smartness,society,enviroment,services,government;

   string name,password;

   string fname = name+"p";

    // for basic choices

    int a,b,c,d,e;
public:

    newcity(string ne,string pas):name(ne),password(pas){}

    void in()
    {


        cout<<"\nTHANK YOU FOR YOUR INTEREST IN OUR SMART CITY RANKING SYSTEM\n"
        <<"YOU MAY OR MAY NOT BE SELECTED FOR SMART CITY \n"
        <<"PLEASE ENETR ALL THE NECESSARY INFORMATION PROVIDED ACCURATELY FOR BEST RESULT\n"
        <<"LETS START WITH COMPONENTS\n"
        // entry starts
        <<"ENTER THE QUALITY OF YOUR INFRASTRUCTURE (1-10)\n";

        cin>>infrastructure;

        cout<<"\n ENTER THE AVERGE BUILDING AGE\n";

        cin>>building;

        cout<<"ENTER YOUR COMMON TRANSPORTATION SYSTEM\n 1.FOR PUBLIC \n2.FOR PRIVATE\n";

        cin>>transportation;

        cout<<"\n ENTER YOUR MAIN SOURCE OF ENERGY\n 1. FOR RENEWABLE \n 2. FOR NON RENEWABLE\n";

        cin>>energy;

        cout<<"\n ENTER YOUR HEALTH CARE FACILITIES RATING(1-10)\n";

        cin>>health_care;

        cout<<"ENTER THE AMOUNT OF TECHNOLOGY YOU USE IN YOUR CITY(1-10)\n";

        cin>>technology;

        cout<<"ENTER THE QUALITY AND STABILITY OF YOUR GOVERNMENT(1-10)\n";

        cin>>government;

        cout<<"ENTER THE LITERACY RATE(1-10)\n";

        cin>>literacy;

        cout<<"\n ENTER THE SATISFACTION LEVEL OF YOUR CITIZENS(1-10)\n";

        cin>>citizen;

        cout<<"\nTHIS MARKS THE END  OF COMPONENTS\n\n"

        <<"NOW START WITH THE ATTRIBUTES OF SMART CITY\n";

        cout<<"ENTER THE SUSTANINBLITY OF YOUR CITY(1-10)\n";

        cin>>sustainibility;

        cout<<"\n ENTER QUALITY OF  LIFE (1-10)\n";

        cin>>quality_oflife;

        cout<<"\nENTER THE ADAPTABILITY OR SMARTNESS OF YOUR CITY(1-10)\n";

        cin>>smartness;

        cout<<"ENTER THE TOTAL NO SERVICES OF YOU PROVIDE\n";

        cin>>services;

        cout<<"\n THIS MARKS THE END FOR ATTRIBUTES FOR YOUR CITY\n\n";

        cout<<"NOW START WITH THE IMPORTANT STUFFS\n";

        cout<<"DO YOU HAVE SMART PARKING AVAILABLE \n 1. FOR YES \n 2. FOR NO\n";

        cin>>parking;

        cout<<"\nENTER NUMBER OF TREES PER KM \n";

        cin>>no_trees;

        cout<<"\nUSE OF SOLAR POWER \n 1. FOR YES \n 2. FOR NO\n";

        cin>>electricity;

        cout<<"\nDO YOU HAVE YOUR PARKING CONTROLLED 55% OF THE TIME\n1. FOR YES \n 2. FOR NO\n";

        cin>>parking;

        cout<<"\nTOTAL NO OF RECORDED CRIME FOR PAST 1 YEAR\n";

        cin>>crime_rate;

        cout<<"\nYOUR BUDGET FOR CURRENT FISCAL YEAR\n";

        cin>>budget;

        // entry ends

        // to check the most basic condition for smart city approval

        if((infrastructure >=5.5)&& (building<=70)&& (transportation== 1)&& (energy== 1)&&(health_care>=5.5)&&(technology>=5.5)&& (government>=5.5)&&(literacy>=6.5)&&(citizen>=6.5)

           &&(sustainibility>=5.5)&&(quality_oflife>=6.8)&&(smartness>=7.0)&&(services>=75)&&(parking ==1)&&(no_trees>=25)&&(electricity==1)&&(parking==1)&&

           (crime_rate<=75)&&(budget>=100000000))

        {

            // if condition ok then write into the file

                ofstream new1;
                ofstream new2;

        new1.open(name);

        new1<<"budget= "<<budget<<" infrastructure= "<<infrastructure<<" bulding= "<<building<<" transportation= "<<transportation<<" energy= "<<energy<<" health_care= "<<health_care<<" technology= "

        <<technology<<" government= "<<government<<" literacy= "<<literacy<<" citizen= "<<citizen<<" sustainibility= "<<sustainibility<<" quality_of_life = "<<quality_oflife

        <<" smartness= "<<smartness<<" services= "<<services<<" no_trees= "<<no_trees<<" electricity= "<<electricity<<" parking= "<<parking;



        new2.open(fname);
        new2<<password;

        new2.close();
        new1.close();





            cout<<"\nYOU ARE SELECTED FOR OUR SMART CITY RETURN TO SCREEN AND CHECK YOUR RATING\n";


        }


        // if not then do nothing

        else

        {

            cout<<"SORRY YOU WERE NOT SELECTED FOR OUR SMART CITY PROJECT THIS YEAR\n";


        }


        // this marks the end of if else consition
    }

    // marks the end for input thingy

    void rankprj()

    {

        float forrnk[18];
        string just;
        float s1;

        ifstream frrnk;
        frrnk.open(name);

        ofstream rank1;
        rank1.open("rankfile",ios::app);

        for(int forra = 0;forra<19;forra++)
        {
            frrnk>>just;
            frrnk>>forrnk[forra];


        }


        if((forrnk[1]<=6.2) &&(forrnk[5]<=6.2)&&(forrnk[6]<=6.2)&&(forrnk[7]<=6.2)&&(forrnk[8]<=7.0)&&(forrnk[9]<=7.0)&&(forrnk[10]<=6.2)&&(forrnk[11]<=7.0))
        {

            rank1<<" "<<name<<" "<<"6";



        }

        else if((forrnk[1]<=7.0) &&(forrnk[5]<=7.0)&&(forrnk[6]<=7.0)&&(forrnk[7]<=7.0)&&(forrnk[8]<=7.5)&&(forrnk[9]<=7.5)&&(forrnk[10]<=7.0)&&(forrnk[11]<=7.5))
        {

            rank1<<" "<<name<<" "<<"7";

        }
        else if((forrnk[1]<=7.5) &&(forrnk[5]<=7.5)&&(forrnk[6]<=7.5)&&(forrnk[7]<=7.5)&&(forrnk[8]<=8.0)&&(forrnk[9]<=8.0)&&(forrnk[10]<=7.5)&&(forrnk[11]<=8.0))
        {

            rank1<<" "<<name<<" "<<"8";


        }
        else if((forrnk[1]<=8.0) &&(forrnk[5]<=8.0)&&(forrnk[6]<=8.0)&&(forrnk[7]<=8.0)&&(forrnk[8]<=8.0)&&(forrnk[9]<=8.0)&&(forrnk[10]<=8.0)&&(forrnk[11]<=8.0))
        {

            rank1<<" "<<name<<" "<<"8";


        }
        else if((forrnk[1]<=9.5) &&(forrnk[5]<=9.5)&&(forrnk[6]<=9.5)&&(forrnk[7]<=9.5)&&(forrnk[8]<=9.5)&&(forrnk[9]<=9.5)&&(forrnk[10]<=9.5)&&(forrnk[11]<=9.5))
        {

            rank1<<" "<<name<<" "<<"9";


        }
        else if((forrnk[1]>9.5) &&(forrnk[5]>9.5)&&(forrnk[6]>9.5)&&(forrnk[7]>9.5)&&(forrnk[8]>9.5)&&(forrnk[9]>9.5)&&(forrnk[10]>9.5)&&(forrnk[11]>9.5))
        {

            rank1<<" "<<name<<" "<<"9.5";


        }



        frrnk.close();
    }
// marks the end of function


};




class editing
{
public:
    open1(string namefredt)
    {
        //local variables
        int a;
        string b,c;// for taking new inputs
        string q,w,e,r,space,t[100];
        e= "budget=";
        r = "building=";

 // to  put space betn characters

        space = " ";


        cout<<"\n1. IF YOU WANT TO MODIFY BUDGET\n2. IF YOU WANT TO MODIFY AVERAGE BUILDING AGE\nHOWEVER NOTE THAT EDITING WILL NOT CHANGE YOUR RATING\n";
        cin>>a;
            switch(a)
                {
                case(1):
                    {

                        cout<<"\nENTER NEW BUDGET\n";
                        cin>>b;
                        // editing module starts
                        ifstream foredit;
                        foredit.open(namefredt);
                        foredit.seekg(ios::beg);

                        while(!foredit.eof())
                        {
                            for(int ct = 0;ct<36;ct++)
                            foredit>>t[ct];

                        }
                        foredit.close();

                        t[1] = b;

                        ofstream foreplace;
                        foreplace.open(namefredt);
                        for(int ro =0;ro<36;ro++)
                        {
                           foreplace<<t[ro]<<space;
                        }

                        foreplace.close();
                        break;
        }
                case(2):
                    {
                        cout<<"\nENTER NEW BUILDING AGE\n";
                        cin>>c;
                        ifstream foredit1;
                        foredit1.open(namefredt);
                        foredit1.seekg(ios::beg);

                        while(!foredit1.eof())
                        {
                            for(int ct = 0;ct<36;ct++)
                            foredit1>>t[ct];
                        }
                        foredit1.close();

                        t[5] = c;

                        ofstream foreplace;
                        foreplace.open(namefredt);
                        for(int ro =0;ro<36;ro++)
                        {
                           foreplace<<t[ro]<<space;
                        }

                        foreplace.close();
                        break;

                    }
                default:
                    cout<<"ERROR ";

                    }// for switch
                }// for fucntion

};



/* used to rank
need to call after every new or edition dont forget
*/



 int main()
 {
     string namefornew;
     string for_re,pwd_for,for_f;
     int a;
cout<<"**************WELCOME TO SMART SYSTEM MANAGEMENT SYSTEM************\n";
cout<<"PRESS 1. TO ENTER NEW CITY\n"
    <<"PRESS 2. TO MODIFY EXISTING RECORDS\n"
    <<"PRESS 3. TO VIEW YOUR CITY RATING\n"
    <<"PRESS 4. TO RANK ALL THE CITIES\n";


    cin>>a;


    switch(a)
    {

    case(1):
        {

            // used for new city only
            cout<<"ENTER NAME OF THE CITY\n";
            cout<<"ENTER PASSWORD FOR LATER EDITING\n";
            cin>>namefornew;
            string pwd;
            cin>>pwd;

            newcity n1(namefornew,pwd);
            n1.in();
            n1.rankprj();
            break;
        }

    case(2):

        {
            // used for editing info
            cout<<"ENTER NAME OF THE CITY\n";
            cin>>for_re;
            cout<<"\n ENTER YOUR PASSWORD\n";
            cin>>pwd_for;

            ifstream ok4;
        string a;
        for_f  = for_re+"p";

        ok4.open(for_f);

        ok4>>a;
        //  main for log in dont forget
        if((a.compare(pwd_for))==0){


            editing c1;
            c1.open1(for_re);

            ok4.close();
            break;

            }
            else
            {

cout<<"INCORRECT CREDENTIALS START AGAIN";


            }
            break;
        }
    case(3):
        {
            string forrating,forrating1;
            cout<<"ENTER YOU CITY";
            cin>>forrating;
            ifstream f1;
            f1.open("rankfile");
            while(!f1.eof())
            {
                f1>>forrating1;
                if(forrating1.compare(forrating)==0)
                {
                    f1>>forrating1;
                    cout<<forrating<<" rating is "<<forrating1<<endl;

                }

            }
            f1.close();
            break;
        }

    case(4):

        {
            string *forranking = new string[200];
            ofstream forrnk1;
            forrnk1.open("rankfile",ios::app);
            forrnk1<<" "<<"0";
            forrnk1.close();

            string forrnl;
            int countfrrnk=0;

            ifstream forrrnk;
            forrrnk.open("rankfile");

            // to input every file in an dynamically allocates array file

            while(!forrrnk.eof())
            {
               forrrnk>> *(forranking+countfrrnk);
               countfrrnk++;
            }
            forrrnk.close();

            //linear sorting used

            for(int forr=1;*(forranking+forr)!="0" ;forr= forr+2)
            {

                if(*(forranking+forr)<*(forranking+forr+2))
            {
                string tempfor,tempfor1;

                tempfor = *(forranking+forr);

                tempfor1 = *(forranking+forr-1);

                *(forranking+forr) = *(forranking+ forr+2);

                *(forranking+forr-1) = *(forranking+forr+1);

                *(forranking+forr+2) = tempfor;

                *(forranking+forr+1) = tempfor1;

            }
            }
            cout<<"RANKED IN ASCENDING ORDER\n\n\n\n\n";

            for(int forprint = 0;forprint<countfrrnk-2;forprint = forprint+2)
            {
                 cout<<*(forranking+forprint)<<"          "<<*(forranking+forprint+1)<<endl;
            }


                ofstream forrecopy;
                forrecopy.open("rankfile");

            for(int recopy = 0;recopy<countfrrnk-2;recopy  =recopy+2)
            {

                forrecopy<<" "<<*(forranking+recopy)<<" "<<*(forranking+recopy+1);

            }
            forrecopy.close();
            delete []forranking;


break;
        }// for case 3

    default:
        cout<<"ERROR INCORRECT CASE ENTERED ";
        }// for switch


    }



