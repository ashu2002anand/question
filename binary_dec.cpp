#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int extra = 0;
int score = 0;
int wicket = 10;
int over=0,balls=0;
vector<int> wicketfall;

/*void result(int score,int targer,int wicket){
   if(score==targer){
      cout<<"Match Tied"<<endl;
   }
   if(score<targer){
      cout<<"you lost the match"<<endl;
   }
   else
      cout<<"you won the match by "<<wicket<<"wicket"<<endl;
}*/
void inningSummary(int score,int extra ,int over,int ball,int wicket){
      
      cout<<"\nOver played : "<<over<<"."<<ball<<endl;
      cout<<"Total score : "<<score<<"/"<<wicket<<endl;
      cout<<"Extra : "<<extra<<endl;
      cout<<"Fall of wicket"<<endl;

      for(int i =0;i<wicketfall.size();i++){
         cout<<wicketfall[i]<<" ";
      }
      return;
}

int main() {
   srand(time(0));
   cout << "Welcome to Virtual Cricket!" << endl;
   cout << "You are playing a 20 overs game." << endl;
   for (over = 1; over <= 20; over++) {
      cout<<"Over "<<over<<":\n";
      balls = 6;int runs=0;
      while (balls--)
      {
         int run = rand()%6;
         if (run==0)
         {
            cout<<"* ";
         }
         else if(run==5){
            if(score-wicketfall[wicketfall.size()-1]<30){
               cout<<run<<" ";
               score+=3;
               runs+=3;
               continue;
            }
            cout<<"W ";
            wicket--;
            wicketfall.push_back(score);
            if(wicket==0){
               inningSummary(score,extra,over-1,6-balls,10-wicket);
               return 0;
            }
         }
         else if(run==3){
            cout<<"wd ";
            runs+=1;
            extra++;
            score+=1;
         }
         else{
            cout<<run<<" ";
            score+=run;
             runs+=run;
         }
           
      }
      cout << "\nYou scored " << runs << " runs." << endl;
      
   }
      inningSummary(score,extra,over,balls,10-wicket);
   return 0;
}