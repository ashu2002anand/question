#include<bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> wicket_fall;
int score = 0;
int wicket = 10;
int extra = 0;
int fours =0;
int Sixes = 0;int balls;int runs;int over;

void Inning_summary(int score,int wicket,int over,int ball,int four,int six) {
    cout<<"\n Inning Summary\n"<<endl;
    cout<<"Score : "<<score<<" / "<<wicket<<endl;
    cout<<"Over : "<<over<<"."<<ball<<endl;
    cout<<"Total Boundries : "<<four+six<<endl;
    cout<<"     Four : "<<four<<endl;
    cout<<"     Sixes : "<<six<<endl;
    cout<<"Wicket Fall : "<<endl;
    for (int i = 0; i < wicket_fall.size(); i++)
    {
        cout<<wicket_fall[i]<<" ";
    }
    return;
}

int main() {
   srand(time(0));
   cout << "Welcome to Virtual Cricket!" << endl;
   cout << "You are playing a 20 overs game." << endl;
   for (over = 1; over <= 20; over++) {
    cout<<"\nOver "<<over<<":\n";
    balls = 6;runs = 0;int last_wicket = score;
    while (balls--)
    {
        int run = rand()%7;
        if(run==0){
            cout<<"* "; runs+=run; score+=run;
        }
        else if(run==3){
            cout<<"wd "; runs+=1; score+=1;extra++;++balls;
        }
        else if (run==4)
        {
            cout<<"4 "; runs+=4; score+=4;
            fours+=1;
        }
        else if (run==6)
        {
            cout<<"6 "; runs+=6; score+=6;
            Sixes+=1;
        }
        else if(run==5){
            if (score-(last_wicket)>7)
            {
                cout<<"W ";
                --wicket; wicket_fall.push_back(score);
                if(wicket==0){
                    Inning_summary(score,10-wicket,over-1,6-balls,fours,Sixes);
                    return 0;
                }
            }
            else{
                cout<<"1 ";runs++;score++;
            }
            
        }
        else
        {
           cout<<run<<" ";runs+=run;score+=run;
        }   
    }
    cout<<"\nYou scored "<<runs<<" runs.\n";
        
   }
   cout << "Your final score is " << score << " runs." << endl;
   Inning_summary(score,10-wicket,over-1,0,fours,Sixes);
   return 0;
}