#include<iostream>
#include<string>
#include<fstream>
using namespace std;
string name,password,location,fname,aadhar_card;  // for new user
string Name,pwd;
string for_carn;
long long int mobile_no,no_of_people,crime_info;
float income,price;  // for returning user


class SmrtmngmtR
{
 string ans1,insurance;
 int n; //electricity bill  current info about you
public:
    void open1(string Name)
    {


        cout<<"\nPRESS 1 TO VIEW ALL INFORMATION\n;

        <<"PRESS 2 UPDATE YOU INFORMATION\n";
        cin>>n;
        switch(n)
        {
        case(1):
            {
                string recov;
                ifstream naam;
                naam.open(Name);
                while(naam>>recov)
                {
                   cout<<recov<<endl;

                }
                naam.close();
                break;

            }


        case(2):
            {
                int q;
                   cout<<"1. TO UPDATE PASSWORD \n"
                    <<"2. TO UPDATE LOCATION\n"
                    <<"3. TO UPDATE ELECTRICITY BILL\n";
            cin>>q;
            switch(q)    // switch inside switch
            {
           case(1):
            {


                string newna,newnb,newnc;
                string newp;
                string oldp;
                newp =Name+"p";

                cout<<"ENTER YOUR OLD PASSWORD";
                cin>>newna;
                ifstream edit;
                edit.open(newp);
                edit>>oldp;
                edit.close();

                if(newna.compare(oldp) == 0 )
                {
                    ofstream now_to_edit;
                    now_to_edit.open(newp);
                    cout<<"ENTER YOUR NEW PASSWORD";
                    cin>>newna;
                    now_to_edit<<newna;
                    cout<<"PASSWORD CHANGED SUCCESSFULLY";
                    now_to_edit.close();



                }
                else{


                    cout<<"INCORRECT PASSWORD ENTERED";
                    break;
                }

break;
            }






        default:
            cout<<"ENTER VALID NUMBER";
        }
    }
        }
    }





};
class SmrtmngmtN
{

     string ans1,ans2,ans3,ans4,ans5,ans6,ans7,insurance;
 int no_of_trees,no_of_pets,no_of_children,no_of_vehicles;
int frst;
 public:
     void in(string namen)
     {
       cout<<"WELCOME TO THE CITY \n"
       <<"AS YOU ALREADY KNOW EVERYTHIN IS BEING UPDATED IN BACKGROUND"
       <<"\n AND YOUR DEFAULT METER READING VALUE IS 2000\n";
       cout<<"PRESS 1 IF YOU ACCEPT ALL THE TERMS AND CONDITIONS"
       <<"\n PRESS 2 IF YOU DONT";

        cin>>frst;
        if(frst== 1)
        {
            ofstream ok3;
            ok3.open(namen,ios::app);

            cout<<"THANK YOU FOR YOUR PATIENCE \n"
            <<"PLEASE ENTER ALL THE DETAILS  AS MENTIONED\n";
        cout<<"\nENTER NO OF PETS YOU HAVE\n";
        cin>>no_of_pets;
        cout<<"\nENTER TOTAL NO OF CHILDREN\n";
        cin>>no_of_children;
        cout<<"\nENTER NO OF VEHICLES\n";
        cin>>no_of_vehicles;
        cout<<"THANK YOU FOR YOUR INPUT \n .......... UPDATING NOW ";
        ok3<<" pets= "<<no_of_pets<<" electricity= 255"<<" vehicles= "<<no_of_vehicles<<" children= "<<no_of_children;
        ok3.close();
        cout<<"UPDATE COMPLETE\n"
        <<"PLEASE NOTICE THAT WE WILL CALL IF YOU ARE SELECTED\n";



            }
            else
            cout<<"ERROR YOU SHOULD ACCEPT ALL TERMS AND CONDITIONS";


        }


};


int main()
{
    int a,b,c,d,e;
cout<<"   ***********WELCOME TO THE SMART CITY MANAGEMENT SYSTEM*********\n"
<<"TOGETHER FOR A SMARTER COMMUNITY\n\n\n\n";
cout<<"\n  ****** PRESS 1 IF YOU WANT A NEW HOME  \n ****** PRESS 2 IF YOU ARE LOOKING TO LOG IN ********\n"
        <<"PRESS 3  FOR JUST CHECKING YOUR ELECTRICITY UNIT\n";
cin>>a;
switch(a)
{
/*
this is to help the new user to create a account
*/
case 1:
    {



    cout<<"THANK YOU FOR YOUR INTEREST\n"
    <<"PLEASE FILL ALL THE INFORMATION CORRECTLY\n";
    cout<<"ENTER YOU NAME AND PASSWORD FOR YOUR LOGIN INFO\n";

                ofstream ok;
                ofstream ok1;
                cin>>name>>password;
                fname = name+"p";
                ok.open(name.c_str());
                ok1.open(fname.c_str());
                ok<<name;
                ok1<<password;
                cout<<"\n PLEASE REMEMBER YOU LOGIN INFO AS YOU WILL NEED IT FURTHER\n"<<"username\n"<<name<<endl<<"password\n"<<password<<endl;
                cout<<"PLEASE ENTER POLICE RECORD 1 FOR YES \n 2 FOR NO \n "
                <<"YOUR ANNUAL INCOME MINUS TAX\n"
                <<"YOUR AADHAR CARD NO \n"
                <<"MOBILE NO \n"
                <<"TOTAL OF PEOPLE\n"
                <<"YOUR EXPECTED PRICE FOR A HOUSE\n"
                <<"YOU LOCATION\n";

                ok<<" crime info = "<<"none"<<" income is "<<income<<" aadhar card no is "<<aadhar_card<<" mobile no = "<<mobile_no<<" no of people = "<<no_of_people<<" expected price = "<<price;
                fflush(stdin);
                getline(cin,location);

                if(crime_info == 1 || no_of_people >5 || income<500000 || price<250000)
                {

                    cout<<"SORRY YOU WEREN'T SELECTED THIS TIME \n"
                    <<"PLEASE TRY NEXT TIME\n";
                    ok.close();
                    ok1.close();

                }
                else
                {
                    ok<<" "<<income<<" "<<aadhar_card<<" "<<mobile_no<<" "<<no_of_people;
                    ok.close();
                    ok1.close();
                    SmrtmngmtN n1;
                    n1.in(name);
                }
    }
                break;
case 2:    //  to help returning user to login into their account
{


        cout<<"WELCOME BACK \n  PLEASE ENTER YOUR NAME AND PASSWORD\n";
        cin>>Name>>pwd;
        ifstream ok3,ok4;
        string a,b;
        b = Name+"p";
        ok3.open(Name);
        ok4.open(b);
        ok3>>a;
        ok4>>b;
        if((!a.compare(Name) && !b.compare(pwd))==1){


            cout<<"\n WELCOME BACK "<<Name;
            SmrtmngmtR c1;
            c1.open1(Name);
            ok3.close();
            ok4.close();
            break;

            }
            else
            {


                cout<<"INCORRECT CREDENTIALS START AGAIN";


            }
}
            break;
case(3):
{

 string extract;
 string c1 = "electricity=";
    cout<<"ENTER NAME OF THE OWNER\n";
    cin>>for_carn;
    ifstream ok5;
    ok5.open(for_carn);
    while(ok5 >> extract)
    {

    if(extract.compare(c1) == 0)
    {


     ok5>>extract;
    cout<<endl<<extract;
    ok5.close();
    break;
    }


    }
break;

}

default:

    cout<<"PLEASE ENTER VALID OPTION";

}
return 0;
}

