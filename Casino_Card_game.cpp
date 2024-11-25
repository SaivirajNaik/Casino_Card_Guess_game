#include<iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
using namespace std;

enum Cards { SA,S2,S3,S4,S5,S6,S7,S8,S9,S10,SJ,SQ,SK,HA,H2,H3,H4,H5,H6,H7,H8,H9,H10,HJ,HQ,HK,DA,D2,D3,D4,D5,D6,D7,D8,D9,D10,DJ,DQ,DK,CA,C2,C3,C4,C5,C6,C7,C8,C9,C10,CJ,CQ,CK};

Cards generateRandomCard()
{
    int randomCard=rand() % 52;
    return static_cast<Cards>(randomCard);
}


int main()
{
    srand(time(0));

    Cards targetcard1 = generateRandomCard();
    Cards targetcard2 = generateRandomCard();
    Cards targetcard3 = generateRandomCard();
    Cards targetcard4 = generateRandomCard();
    Cards targetcard5 = generateRandomCard();

    string guess1;
    string guess2;
    string guess3;
    
    while(true)
    {
        system("cls");
        cout<<"Welcome to the Casino Card Guess Game!"<<endl;
        cout<<"**************************************"<<endl;
        cout<<endl;
        cout<<"RULES:"<<endl;
        cout<<"You have to pick any 3 random cards from a 52 card deck "<<endl;
        cout<<"Dealer who shuffles the card will pick 5 random cards"<<endl;
        cout<<"If one of your 3 cards matches with any one of his 5 cards, you win!! "<<endl;
        cout<<"!! ALL THE BEST !!"<<endl<<endl;
        cout<<"Guess the 3 card from below cards"<<endl;
        cout<<endl;
        cout<<"SA S2 S3 S4 S5 S6 S7 S8 S9 S10 SJ SQ SK"<<endl;
        cout<<"HA H2 H3 H4 H5 H6 H7 H8 H9 H10 HJ HQ HK"<<endl;
        cout<<"DA D2 D3 D4 D5 D6 D7 D8 D9 D10 DJ DQ DK"<<endl;
        cout<<"CA C2 C3 C4 C5 C6 C7 C8 C9 C10 CJ CQ CK"<<endl;
        cout<<endl;
        cout<<"S-Spades \tA-Ace\nH-Hearts \tJ-Jack\nD-Diamonds \tQ-Queen\nC-Clubs \tK-King"<<endl;
        cout<<endl;
        cout<<"*just for reference*"<<endl;
        cout<<"randoncard1="<<targetcard1+1<<"\nrandoncard2="<<targetcard2+1<<"\nrandoncard3="<<targetcard3+1<<"\nrandoncard4="<<targetcard4+1<<"\nrandoncard5="<<targetcard5<<endl<<endl;
        cout<<"Enter your 3 guess cards: "<<endl;
        cin>>guess1>>guess2>>guess3;


        for (std::__cxx11::basic_string<char>::size_type i = 0 ; i < guess1.length(); i++)
        {
            guess1[i]=tolower(guess1[i]);
        }
        for (std::__cxx11::basic_string<char>::size_type i = 0 ; i < guess2.length(); i++)
        {
            guess2[i]=tolower(guess2[i]);
        }
        for (std::__cxx11::basic_string<char>::size_type i = 0 ; i < guess3.length(); i++)
        {
            guess3[i]=tolower(guess3[i]);
        }

        //guess1
        if(guess1 == "sa" || guess1 == "s2" || guess1 == "s3" || guess1 == "s4" || guess1 == "s5" || guess1 == "s6" || guess1 == "s7" || guess1 == "s8" || guess1 == "s9" || guess1 == "s10" || guess1 == "sj" || guess1 == "sq" || guess1 == "sk" || guess1 == "ha" || guess1 == "h2" || guess1 == "h3" || guess1 == "h4" || guess1 == "h5" || guess1 == "h6" || guess1 == "h7" || guess1 == "h8" || guess1 == "h9" || guess1 == "h10" || guess1 == "hj" || guess1 == "hq" || guess1 == "hk" || guess1 == "da" || guess1 == "d2" || guess1 == "d3" || guess1 == "d4" || guess1 == "d5" || guess1 == "d6" || guess1 == "d7" || guess1 == "d8" || guess1 == "d9" || guess1 == "d10" || guess1 == "dj" || guess1 == "dq" || guess1 == "dk" || guess1 == "ca" || guess1 == "c2" || guess1 == "c3" || guess1 == "c4" || guess1 == "c5" || guess1 == "c6" || guess1 == "c7" || guess1 == "c8" || guess1 == "c9" || guess1 == "c10" || guess1 == "cj" || guess1 == "cq" || guess1 == "ck" )
        {
            Cards g1;
            
            if(guess1 == "sa")
            g1 = SA;
            
            else if(guess1 == "s2")
            g1 = S2;

            else if(guess1 == "s3")
            g1 = S3;

            else if(guess1 == "s4")
            g1 = S4;

            else if(guess1 == "s5")
            g1 = S5;

            else if(guess1 == "s6")
            g1 = S6;

            else if(guess1 == "s7")
            g1 = S7;

            else if(guess1 == "s8")
            g1 = S8;

            else if(guess1 == "s9")
            g1 = S9;

            else if(guess1 == "s10")
            g1 = S10;

            else if(guess1 == "sj")
            g1 = SJ;

            else if(guess1 == "sq")
            g1 = SQ;

            else if(guess1 == "sk")
            g1 = SK;

            else if(guess1 == "ha")
            g1 = HA;

            else if(guess1 == "h2")
            g1 = H2;

            else if(guess1 == "h3")
            g1 = H3;

            else if(guess1 == "h4")
            g1 = H4;

            else if(guess1 == "h5")
            g1 = H5;

            else if(guess1 == "h6")
            g1 = H6;

            else if(guess1 == "h7")
            g1 = H7;

            else if(guess1 == "h8")
            g1 = H8;

            else if(guess1 == "h9")
            g1 = H9;

            else if(guess1 == "h10")
            g1 = H10;

            else if(guess1 == "hj")
            g1 = HJ;

            else if(guess1 == "hq")
            g1 = HQ;

            else if(guess1 == "hk")
            g1 = HK;

            else if(guess1 == "da")
            g1 = DA;

            else if(guess1 == "d2")
            g1 = D2;

            else if(guess1 == "d3")
            g1 = D3;

            else if(guess1 == "d4")
            g1 = D4;

            else if(guess1 == "d5")
            g1 = D5;

            else if(guess1 == "d6")
            g1 = D6;

            else if(guess1 == "d7")
            g1 = D7;

            else if(guess1 == "d8")
            g1 = D8;

            else if(guess1 == "d9")
            g1 = D9;

            else if(guess1 == "d10")
            g1 = D10;

            else if(guess1 == "dj")
            g1 = DJ;

            else if(guess1 == "dq")
            g1 = DQ;

            else if(guess1 == "dk")
            g1 = DK;

            else if(guess1 == "ca")
            g1 = CA;

            else if(guess1 == "c2")
            g1 = C2;

            else if(guess1 == "c3")
            g1 = C3;

            else if(guess1 == "c4")
            g1 = C4;

            else if(guess1 == "c5")
            g1 = C5;

            else if(guess1 == "c6")
            g1 = C6;

            else if(guess1 == "c7")
            g1 = C7;

            else if(guess1 == "c8")
            g1 = C8;

            else if(guess1 == "c9")
            g1 = C9;

            else if(guess1 == "c10")
            g1 = C10;

            else if(guess1 == "cj")
            g1 = CJ;

            else if(guess1 == "cq")
            g1 = CQ;

            else if(guess1 == "ck")
            g1 = CK;
            


            if(g1 ==targetcard1 || g1 ==targetcard2 || g1 ==targetcard3 || g1 ==targetcard4 || g1 ==targetcard5)
            {
                cout<<endl;
                cout<<"Congratulations! Your 1st guessed card is correct. "<<endl;
                break;
            }
            else
            {
                cout<<"1st guess is Wrong"<<endl;
            }
        }

        //guess2
        if(guess2 == "sa" || guess2 == "s2" || guess2 == "s3" || guess2 == "s4" || guess2 == "s5" || guess2 == "s6" || guess2 == "s7" || guess2 == "s8" || guess2 == "s9" || guess2 == "s10" || guess2 == "sj" || guess2 == "sq" || guess2 == "sk" || guess2 == "ha" || guess2 == "h2" || guess2 == "h3" || guess2 == "h4" || guess2 == "h5" || guess2 == "h6" || guess2 == "h7" || guess2 == "h8" || guess2 == "h9" || guess2 == "h10" || guess2 == "hj" || guess2 == "hq" || guess2 == "hk" || guess2 == "da" || guess2 == "d2" || guess2 == "d3" || guess2 == "d4" || guess2 == "d5" || guess2 == "d6" || guess2 == "d7" || guess2 == "d8" || guess2 == "d9" || guess2 == "d10" || guess2 == "dj" || guess2 == "dq" || guess2 == "dk" || guess2 == "ca" || guess2 == "c2" || guess2 == "c3" || guess2 == "c4" || guess2 == "c5" || guess2 == "c6" || guess2 == "c7" || guess2 == "c8" || guess2 == "c9" || guess2 == "c10" || guess2 == "cj" || guess2 == "cq" || guess2 == "ck" )
        {
            Cards g2;
            
            if(guess2 == "sa")
            g2 = SA;
            
            else if(guess2 == "s2")
            g2 = S2;

            else if(guess2 == "s3")
            g2 = S3;

            else if(guess2 == "s4")
            g2 = S4;

            else if(guess2 == "s5")
            g2 = S5;

            else if(guess2 == "s6")
            g2 = S6;

            else if(guess2 == "s7")
            g2 = S7;

            else if(guess2 == "s8")
            g2 = S8;

            else if(guess2 == "s9")
            g2 = S9;

            else if(guess2 == "s10")
            g2 = S10;

            else if(guess2 == "sj")
            g2 = SJ;

            else if(guess2 == "sq")
            g2 = SQ;

            else if(guess2 == "sk")
            g2 = SK;

            else if(guess2 == "ha")
            g2 = HA;

            else if(guess2 == "h2")
            g2 = H2;

            else if(guess2 == "h3")
            g2 = H3;

            else if(guess2 == "h4")
            g2 = H4;

            else if(guess2 == "h5")
            g2 = H5;

            else if(guess2 == "h6")
            g2 = H6;

            else if(guess2 == "h7")
            g2 = H7;

            else if(guess2 == "h8")
            g2 = H8;

            else if(guess2 == "h9")
            g2 = H9;

            else if(guess2 == "h10")
            g2 = H10;

            else if(guess2 == "hj")
            g2 = HJ;

            else if(guess2 == "hq")
            g2 = HQ;

            else if(guess2 == "hk")
            g2 = HK;

            else if(guess2 == "da")
            g2 = DA;

            else if(guess2 == "d2")
            g2 = D2;

            else if(guess2 == "d3")
            g2 = D3;

            else if(guess2 == "d4")
            g2 = D4;

            else if(guess2 == "d5")
            g2 = D5;

            else if(guess2 == "d6")
            g2 = D6;

            else if(guess2 == "d7")
            g2 = D7;

            else if(guess2 == "d8")
            g2 = D8;

            else if(guess2 == "d9")
            g2 = D9;

            else if(guess2 == "d10")
            g2 = D10;

            else if(guess2 == "dj")
            g2 = DJ;

            else if(guess2 == "dq")
            g2 = DQ;

            else if(guess2 == "dk")
            g2 = DK;

            else if(guess2 == "ca")
            g2 = CA;

            else if(guess2 == "c2")
            g2 = C2;

            else if(guess2 == "c3")
            g2 = C3;

            else if(guess2 == "c4")
            g2 = C4;

            else if(guess2 == "c5")
            g2 = C5;

            else if(guess2 == "c6")
            g2 = C6;

            else if(guess2 == "c7")
            g2 = C7;

            else if(guess2 == "c8")
            g2 = C8;

            else if(guess2 == "c9")
            g2 = C9;

            else if(guess2 == "c10")
            g2 = C10;

            else if(guess2 == "cj")
            g2 = CJ;

            else if(guess2 == "cq")
            g2 = CQ;

            else if(guess2 == "ck")
            g2 = CK;
            


            if(g2 ==targetcard1 || g2 ==targetcard2 || g2 ==targetcard3 || g2 ==targetcard4 || g2 ==targetcard5)
            {
                cout<<endl;
                cout<<"Congratulations! Your 2nd guessed card is correct. "<<endl;
                break;
            }
            else
            {
                cout<<"2nd guess is Wrong"<<endl;
            }
        }


        //guess3
        if(guess3 == "sa" || guess3 == "s2" || guess3 == "s3" || guess3 == "s4" || guess3 == "s5" || guess3 == "s6" || guess3 == "s7" || guess3 == "s8" || guess3 == "s9" || guess3 == "s10" || guess3 == "sj" || guess3 == "sq" || guess3 == "sk" || guess3 == "ha" || guess3 == "h2" || guess3 == "h3" || guess3 == "h4" || guess3 == "h5" || guess3 == "h6" || guess3 == "h7" || guess3 == "h8" || guess3 == "h9" || guess3 == "h10" || guess3 == "hj" || guess3 == "hq" || guess3 == "hk" || guess3 == "da" || guess3 == "d2" || guess3 == "d3" || guess3 == "d4" || guess3 == "d5" || guess3 == "d6" || guess3 == "d7" || guess3 == "d8" || guess3 == "d9" || guess3 == "d10" || guess3 == "dj" || guess3 == "dq" || guess3 == "dk" || guess3 == "ca" || guess3 == "c2" || guess3 == "c3" || guess3 == "c4" || guess3 == "c5" || guess3 == "c6" || guess3 == "c7" || guess3 == "c8" || guess3 == "c9" || guess3 == "c10" || guess3 == "cj" || guess3 == "cq" || guess3 == "ck" )
        {
            Cards g3;
            
            if(guess3 == "sa")
            g3 = SA;
            
            else if(guess3 == "s2")
            g3 = S2;

            else if(guess3 == "s3")
            g3 = S3;

            else if(guess3 == "s4")
            g3 = S4;

            else if(guess3 == "s5")
            g3 = S5;

            else if(guess3 == "s6")
            g3 = S6;

            else if(guess3 == "s7")
            g3 = S7;

            else if(guess3 == "s8")
            g3 = S8;

            else if(guess3 == "s9")
            g3 = S9;

            else if(guess3 == "s10")
            g3 = S10;

            else if(guess3 == "sj")
            g3 = SJ;

            else if(guess3 == "sq")
            g3 = SQ;

            else if(guess3 == "sk")
            g3 = SK;

            else if(guess3 == "ha")
            g3 = HA;

            else if(guess3 == "h2")
            g3 = H2;

            else if(guess3 == "h3")
            g3 = H3;

            else if(guess3 == "h4")
            g3 = H4;

            else if(guess3 == "h5")
            g3 = H5;

            else if(guess3 == "h6")
            g3 = H6;

            else if(guess3 == "h7")
            g3 = H7;

            else if(guess3 == "h8")
            g3 = H8;

            else if(guess3 == "h9")
            g3 = H9;

            else if(guess3 == "h10")
            g3 = H10;

            else if(guess3 == "hj")
            g3 = HJ;

            else if(guess3 == "hq")
            g3 = HQ;

            else if(guess3 == "hk")
            g3 = HK;

            else if(guess3 == "da")
            g3 = DA;

            else if(guess3 == "d2")
            g3 = D2;

            else if(guess3 == "d3")
            g3 = D3;

            else if(guess3 == "d4")
            g3 = D4;

            else if(guess3 == "d5")
            g3 = D5;

            else if(guess3 == "d6")
            g3 = D6;

            else if(guess3 == "d7")
            g3 = D7;

            else if(guess3 == "d8")
            g3 = D8;

            else if(guess3 == "d9")
            g3 = D9;

            else if(guess3 == "d10")
            g3 = D10;

            else if(guess3 == "dj")
            g3 = DJ;

            else if(guess3 == "dq")
            g3 = DQ;

            else if(guess3 == "dk")
            g3 = DK;

            else if(guess3 == "ca")
            g3 = CA;

            else if(guess3 == "c2")
            g3 = C2;

            else if(guess3 == "c3")
            g3 = C3;

            else if(guess3 == "c4")
            g3 = C4;

            else if(guess3 == "c5")
            g3 = C5;

            else if(guess3 == "c6")
            g3 = C6;

            else if(guess3 == "c7")
            g3 = C7;

            else if(guess3 == "c8")
            g3 = C8;

            else if(guess3 == "c9")
            g3 = C9;

            else if(guess3 == "c10")
            g3 = C10;

            else if(guess3 == "cj")
            g3 = CJ;

            else if(guess3 == "cq")
            g3 = CQ;

            else if(guess3 == "ck")
            g3 = CK;
            


            if(g3 ==targetcard1 || g3 ==targetcard2 || g3 ==targetcard3 || g3 ==targetcard4 || g3 ==targetcard5)
            {
                cout<<endl;
                cout<<"Congratulations! Your 3rd guessed card is correct. "<<endl;
                break;
            }
            else
            {
                cout<<"3rd guess is Wrong"<<endl<<endl;
                cout<<"TRY AGAIN!!";
            }
        }
        
        
        else
        {
            cout<<"INVALID CARD. Please try again and enter a valid card. "<<endl<<endl;
            cout<<"TRY AGAIN!!";
        }
        Sleep(2500);

    }

}
